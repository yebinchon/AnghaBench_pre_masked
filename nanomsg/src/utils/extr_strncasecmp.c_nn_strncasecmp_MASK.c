
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

int
FUNC_1(const char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 int VAR_3;
 size_t VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if ((*VAR_0 == 0) && (*VAR_1 == 0)) {
   return (0);
  }
  if ((VAR_3 = FUNC_0(*VAR_0) - FUNC_0(*VAR_1)) != 0) {
   return (VAR_3);
  }
  VAR_0++;
  VAR_1++;
 }
 return (0);
}
