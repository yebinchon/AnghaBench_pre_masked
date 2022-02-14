
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0 (int (*VAR_0) (void *VAR_1), void *VAR_2)
{
  int VAR_3;

  do
    {
      VAR_3 = VAR_0 (VAR_2);
      if (VAR_3 < 0)
 return (-1);
    }
  while (VAR_3 & 0x80);

  return (0);
}
