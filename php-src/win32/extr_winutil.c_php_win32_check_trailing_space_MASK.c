
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int FUNC_0(const char * VAR_1, const size_t VAR_2)
{
 if (VAR_2 > VAR_0 - 1) {
  return 1;
 }
 if (VAR_1) {
  if (VAR_1[0] == ' ' || VAR_1[VAR_2 - 1] == ' ') {
   return 0;
  } else {
   return 1;
  }
 } else {
  return 0;
 }
}
