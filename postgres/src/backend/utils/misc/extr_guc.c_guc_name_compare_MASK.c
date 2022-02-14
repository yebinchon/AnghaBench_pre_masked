
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char *VAR_0, const char *VAR_1)
{





 while (*VAR_0 && *VAR_1)
 {
  char VAR_2 = *VAR_0++;
  char VAR_3 = *VAR_1++;

  if (VAR_2 >= 'A' && VAR_2 <= 'Z')
   VAR_2 += 'a' - 'A';
  if (VAR_3 >= 'A' && VAR_3 <= 'Z')
   VAR_3 += 'a' - 'A';
  if (VAR_2 != VAR_3)
   return VAR_2 - VAR_3;
 }
 if (*VAR_0)
  return 1;
 if (*VAR_1)
  return -1;
 return 0;
}
