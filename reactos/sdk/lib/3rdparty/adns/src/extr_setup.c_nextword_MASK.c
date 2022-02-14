
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(const char **VAR_0, const char **VAR_1, int *VAR_2) {
  const char *VAR_3, *VAR_4;

  VAR_3= *VAR_0;
  while (FUNC_0(*VAR_3)) VAR_3++;
  if (!*VAR_3) return 0;

  VAR_4= VAR_3;
  while (*VAR_4 && !FUNC_0(*VAR_4)) VAR_4++;

  *VAR_2= VAR_4-VAR_3;
  *VAR_1= VAR_3;
  *VAR_0= VAR_4;

  return 1;
}
