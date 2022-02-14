
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ grub_size_t ;



int
FUNC_0 (const char *VAR_0, const char *VAR_1, grub_size_t VAR_2)
{
  if (VAR_2 == 0)
    return 0;

  while (*VAR_0 && *VAR_1 && --VAR_2)
    {
      if (*VAR_0 != *VAR_1)
 break;

      VAR_0++;
      VAR_1++;
    }

  return (int) *VAR_0 - (int) *VAR_1;
}
