
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

const char *
FUNC_0(int VAR_5)
{
 if (VAR_5 == VAR_2) {
  return ("miscellaneous error");
 } else if (VAR_5 == VAR_4) {
  return ("no error");
 } else {
  if (VAR_5 < 0)
   VAR_5 = -VAR_5;
  if ((VAR_5 >= VAR_1) && (VAR_5 <= VAR_3)) {
   return (VAR_0[VAR_5 - VAR_1]);
  }
 }
 return ("unrecognized error number");
}
