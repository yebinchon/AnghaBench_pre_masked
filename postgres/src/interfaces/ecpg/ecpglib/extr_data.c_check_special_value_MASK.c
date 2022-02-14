
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 () ;
 double FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static bool
FUNC_3(char *VAR_0, double *VAR_1, char **VAR_2)
{
 if (FUNC_2(VAR_0, "NaN", 3) == 0)
 {
  *VAR_1 = FUNC_1();
  *VAR_2 = VAR_0 + 3;
  return 1;
 }
 else if (FUNC_2(VAR_0, "Infinity", 8) == 0)
 {
  *VAR_1 = FUNC_0();
  *VAR_2 = VAR_0 + 8;
  return 1;
 }
 else if (FUNC_2(VAR_0, "-Infinity", 9) == 0)
 {
  *VAR_1 = -FUNC_0();
  *VAR_2 = VAR_0 + 9;
  return 1;
 }

 return 0;
}
