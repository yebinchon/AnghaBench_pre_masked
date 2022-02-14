
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_0(int * VAR_4, int * VAR_5, int * VAR_6, int * VAR_7,
               int * VAR_8, int * VAR_9)
{
  int VAR_10;
  int VAR_11;

  if (VAR_1 > *VAR_4)
  {
    VAR_10 = VAR_1 - *VAR_4;
  }
  else
  {
    VAR_10 = 0;
  }
  if (VAR_3 > *VAR_5)
  {
    VAR_11 = VAR_3 - *VAR_5;
  }
  else
  {
    VAR_11 = 0;
  }
  if (*VAR_4 + *VAR_6 > VAR_2)
  {
    *VAR_6 = (*VAR_6 - ((*VAR_4 + *VAR_6) - VAR_2));
  }
  if (*VAR_5 + *VAR_7 > VAR_0)
  {
    *VAR_7 = (*VAR_7 - ((*VAR_5 + *VAR_7) - VAR_0));
  }
  *VAR_6 = *VAR_6 - VAR_10;
  *VAR_7 = *VAR_7 - VAR_11;
  if (*VAR_6 <= 0)
  {
    return 0;
  }
  if (*VAR_7 <= 0)
  {
    return 0;
  }
  *VAR_4 = *VAR_4 + VAR_10;
  *VAR_5 = *VAR_5 + VAR_11;
  if (VAR_8 != 0)
  {
    *VAR_8 = *VAR_8 + VAR_10;
  }
  if (VAR_9 != 0)
  {
    *VAR_9 = *VAR_9 + VAR_11;
  }
  return 1;
}
