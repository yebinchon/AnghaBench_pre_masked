
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int grub_size_t ;



void *
FUNC_0 (void *VAR_0, const void *VAR_1, grub_size_t VAR_2)
{
  char *VAR_3 = (char *) VAR_0;
  const char *VAR_4 = (const char *) VAR_1;

  if (VAR_3 < VAR_4)
    while (VAR_2--)
      *VAR_3++ = *VAR_4++;
  else
    {
      VAR_3 += VAR_2;
      VAR_4 += VAR_2;

      while (VAR_2--)
 *--VAR_3 = *--VAR_4;
    }

  return VAR_0;
}
