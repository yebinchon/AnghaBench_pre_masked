
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

int
FUNC_1 (char **VAR_0, int *VAR_1)
{
  int VAR_2 = 0;
  int VAR_3;

  *VAR_1 = 0;

  while (**VAR_0)
 {
   VAR_3 = FUNC_0 (**VAR_0);
   if (VAR_3 >= 0)
  {
    *VAR_1 = (*VAR_1 << 4) | VAR_3;
    VAR_2++;
  }
   else
  break;

   (*VAR_0)++;
 }

  return (VAR_2);
}
