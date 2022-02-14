
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int VAR_0 ;

int FUNC_0(js_State *VAR_1, const char *VAR_2, int *VAR_3)
{
 int VAR_4 = 0;
 while (*VAR_2) {
  int VAR_5 = *VAR_2++;
  if (VAR_5 >= '0' && VAR_5 <= '9') {
   if (VAR_4 >= VAR_0 / 10)
    return 0;
   VAR_4 = VAR_4 * 10 + (VAR_5 - '0');
  } else {
   return 0;
  }
 }
 return *VAR_3 = VAR_4, 1;
}
