
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static bool FUNC_1(int *VAR_0, char ***VAR_1, char **VAR_2,
   const char *VAR_3)
{
 int VAR_4 = *VAR_0;
 char **VAR_5 = *VAR_1;

 if (!VAR_4) {
  FUNC_0("Missing expected option: '%s'\n", VAR_3);
  return 0;
 }

 (*VAR_0)--;
 (*VAR_1)++;
 *VAR_2 = VAR_5[0];
 return 1;
}
