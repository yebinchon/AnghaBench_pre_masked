
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int,int) ;

int FUNC_1(int VAR_4, int VAR_5)
{
  if (VAR_4 >= 0 && VAR_4 < VAR_2 && VAR_5 >= 0 && VAR_5 < VAR_0)
  {
    if (VAR_3 != 0)
    {
      if (VAR_1 == 1)
        return VAR_3[VAR_5 * VAR_2 + VAR_4];
      else if (VAR_1 == 2)
        return ((uint16*)VAR_3)[VAR_5 * VAR_2 + VAR_4];
      else
        return 0;
    }
    else
      return FUNC_0(VAR_4, VAR_5);
  }
  else
    return 0;
}
