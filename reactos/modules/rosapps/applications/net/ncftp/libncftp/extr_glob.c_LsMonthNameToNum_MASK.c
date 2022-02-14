
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(char *VAR_0)
{
 int VAR_1;

 switch (*VAR_0++) {
  case 'A':
   VAR_1 = (*VAR_0 == 'u') ? 7 : 3;
   break;
  case 'D':
   VAR_1 = 11;
   break;
  case 'F':
   VAR_1 = 1;
   break;
  default:
  case 'J':
   if (*VAR_0++ == 'u')
    VAR_1 = (*VAR_0 == 'l') ? 6 : 5;
   else
    VAR_1 = 0;
   break;
  case 'M':
   VAR_1 = (*++VAR_0 == 'r') ? 2 : 4;
   break;
  case 'N':
   VAR_1 = 10;
   break;
  case 'O':
   VAR_1 = 9;
   break;
  case 'S':
   VAR_1 = 8;
 }
 return (VAR_1);
}
