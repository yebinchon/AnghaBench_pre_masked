
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_0(int* VAR_6, int* VAR_7, int* VAR_8, int* VAR_9, int* VAR_10, int* VAR_11)
{
  int VAR_12;
  int VAR_13;


  if (VAR_4 > *VAR_6)
    VAR_12 = VAR_4 - *VAR_6;
  else
    VAR_12 = 0;
  if (VAR_5 > *VAR_7)
    VAR_13 = VAR_5 - *VAR_7;
  else
    VAR_13 = 0;
  if (*VAR_6 + *VAR_8 > VAR_2)
    *VAR_8 = (*VAR_8 - ((*VAR_6 + *VAR_8) - VAR_2)) ;
  if (*VAR_7 + *VAR_9 > VAR_3)
    *VAR_9 = (*VAR_9 - ((*VAR_7 + *VAR_9) - VAR_3)) ;
  *VAR_8 = *VAR_8 - VAR_12;
  *VAR_9 = *VAR_9 - VAR_13;
  if (*VAR_8 <= 0)
    return VAR_0;
  if (*VAR_9 <= 0)
    return VAR_0;
  *VAR_6 = *VAR_6 + VAR_12;
  *VAR_7 = *VAR_7 + VAR_13;
  if (VAR_10 != ((void*)0))
    *VAR_10 = *VAR_10 + VAR_12;
  if (VAR_11 != ((void*)0))
    *VAR_11 = *VAR_11 + VAR_13;




  return VAR_1;
}
