
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PLONG ;
typedef scalar_t__* PCHAR ;
typedef int LONG ;


 int FUNC_0 (scalar_t__) ;

LONG
FUNC_1(PCHAR *VAR_0,
  PLONG VAR_1)
{
  LONG VAR_2 = 0;
  LONG VAR_3;

  *VAR_1 = 0;

  while (**VAR_0)
    {
      VAR_3 = FUNC_0(**VAR_0);
      if (VAR_3 >= 0)
        {
          *VAR_1 = (*VAR_1 << 4) | VAR_3;
          VAR_2++;
        }
      else
        {
          break;
        }

      (*VAR_0)++;
    }

  return VAR_2;
}
