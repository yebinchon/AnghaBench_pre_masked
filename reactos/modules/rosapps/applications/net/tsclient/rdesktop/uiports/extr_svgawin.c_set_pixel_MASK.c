
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int ) ;
 int* VAR_7 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;

void FUNC_4(int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
  if (VAR_8 >= VAR_2 && VAR_8 < VAR_0 && VAR_9 >= VAR_3 && VAR_9 < VAR_1)
  {
    if (VAR_8 >= 0 && VAR_8 < VAR_6 && VAR_9 >= 0 && VAR_9 < VAR_4)
    {
      if (VAR_11 == 0x0)
        VAR_10 = 0;
      else if (VAR_11 == 0xf)
        VAR_10 = -1;
      else if (VAR_11 != 0xc)
        VAR_10 = FUNC_1(VAR_11, VAR_10, FUNC_0(VAR_8, VAR_9));
      if (VAR_7 != 0)
      {
        if (VAR_5 == 1)
          VAR_7[VAR_9 * VAR_6 + VAR_8] = VAR_10;
        else if (VAR_5 == 2)
          ((uint16*)VAR_7)[VAR_9 * VAR_6 + VAR_8] = VAR_10;
      }
      else
      {
        FUNC_3(VAR_10);
        FUNC_2(VAR_8, VAR_9);
      }
    }
  }
}
