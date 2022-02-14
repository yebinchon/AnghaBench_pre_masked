
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arc_operand {int fmt; } ;



int
FUNC_0 (const struct arc_operand *VAR_0)
{
  switch (VAR_0->fmt)
    {
      case 'L':
      case 'd':
      case 'h':
      case 'H':
      case 'i':
      case 'I':
      case 'y':
      case 'Y':
      case 's':
      case 'S':
      case 'Z':
      case 'W':
        return 1;
    }
  return 0;
}
