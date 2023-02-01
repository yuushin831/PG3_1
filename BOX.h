#pragma once
#include"IShape.h"
class BOX :public IShape
{
public:
	void draw() override;
	void size() override;

};

