
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char **VAR_0, const char *VAR_1)
{
 const char *VAR_2 = *VAR_0, *VAR_3 = VAR_1;
 while (*VAR_2 && *VAR_3 && (*VAR_2 == *VAR_3 || *VAR_2 == *VAR_3 + 32))
  ++VAR_2, ++VAR_3;
 if (*VAR_3 == 0)
 {

  *VAR_0 = VAR_2;
  return 1;
 }
 else
  return 0;
}
