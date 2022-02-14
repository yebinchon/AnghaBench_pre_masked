
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int FUNC_0(const char *VAR_1, bool *VAR_2)
{
 if (!VAR_1)
  return -VAR_0;

 switch (VAR_1[0]) {
 case 'y':
 case 'Y':
 case '1':
  *VAR_2 = 1;
  return 0;
 case 'n':
 case 'N':
 case '0':
  *VAR_2 = 0;
  return 0;
 case 'o':
 case 'O':
  switch (VAR_1[1]) {
  case 'n':
  case 'N':
   *VAR_2 = 1;
   return 0;
  case 'f':
  case 'F':
   *VAR_2 = 0;
   return 0;
  default:
   break;
  }
 default:
  break;
 }

 return -VAR_0;
}
