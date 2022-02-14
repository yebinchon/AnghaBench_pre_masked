
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
      case 'a':
      case 'b':
      case 'c':
      case 'A':
      case 'B':
      case '#':
      case 'C':
      case 'U':
      case 'g':
      case 'G':
      case 'r':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case '!':
        return 1;
    }
    return 0;
}
