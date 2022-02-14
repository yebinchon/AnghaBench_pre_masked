
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int,int,int ,int,int ) ;
 int VAR_5 ;
 int FUNC_1 (int *,int,int,int) ;

void FUNC_2(int VAR_6, int VAR_7)
{
  int VAR_8;
  int VAR_9;
  int VAR_10;
  uint8* VAR_11;
  int VAR_12;

  if (VAR_6 < 0)
    VAR_10 = -VAR_6;
  else
    VAR_10 = 0;
  VAR_9 = VAR_4 - VAR_6;
  if (VAR_9 > 32)
    VAR_9 = 32;
  if (VAR_9 > 0)
  {
    for (VAR_8 = 0; VAR_8 < 32; VAR_8++)
    {
      VAR_11 = FUNC_0(VAR_10, VAR_8, VAR_5, 32, VAR_3);
      VAR_12 = (VAR_9 - VAR_10) * VAR_2;
      if (VAR_6 + VAR_10 >= 0 && VAR_7 + VAR_8 >= 0 && VAR_6 + VAR_10 < VAR_4 && VAR_7 + VAR_8 < VAR_1)
        FUNC_1(VAR_11, VAR_6 + VAR_10, VAR_7 + VAR_8, VAR_12);
    }
  }
  VAR_0 = 1;
}
