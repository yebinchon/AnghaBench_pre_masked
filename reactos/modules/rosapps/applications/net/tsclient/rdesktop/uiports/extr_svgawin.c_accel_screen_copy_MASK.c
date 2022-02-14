
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int,int,scalar_t__,int,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,int,int,int,int,int,int) ;
 int FUNC_4 (int *,int,int,int) ;
 int FUNC_5 (int *,int,int,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
  uint8* VAR_12;
  uint8* VAR_13;
  uint8* VAR_14;
  int VAR_15;

  if (VAR_5 != 0)
  {
    if (VAR_11 < VAR_7)
    {
      VAR_13 = FUNC_2(VAR_10, (VAR_11 + VAR_9) - 1, VAR_5, VAR_3, VAR_2);
      VAR_14 = FUNC_2(VAR_6, (VAR_7 + VAR_9) - 1, VAR_5, VAR_3, VAR_2);
      for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++)
      {
        FUNC_0(VAR_14, VAR_13, VAR_8 * VAR_1);
        VAR_13 = VAR_13 - VAR_3 * VAR_1;
        VAR_14 = VAR_14 - VAR_3 * VAR_1;
      }
    }
    else if (VAR_11 > VAR_7 || VAR_10 > VAR_6)
    {
      VAR_13 = FUNC_2(VAR_10, VAR_11, VAR_5, VAR_3, VAR_2);
      VAR_14 = FUNC_2(VAR_6, VAR_7, VAR_5, VAR_3, VAR_2);
      for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++)
      {
        FUNC_0(VAR_14, VAR_13, VAR_8 * VAR_1);
        VAR_13 = VAR_13 + VAR_3 * VAR_1;
        VAR_14 = VAR_14 + VAR_3 * VAR_1;
      }
    }
    else
    {
      VAR_13 = FUNC_2(VAR_10, VAR_11, VAR_5, VAR_3, VAR_2);
      VAR_14 = FUNC_2(VAR_6, VAR_7, VAR_5, VAR_3, VAR_2);
      for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++)
      {
        FUNC_1(VAR_14, VAR_13, VAR_8 * VAR_1);
        VAR_13 = VAR_13 + VAR_3 * VAR_1;
        VAR_14 = VAR_14 + VAR_3 * VAR_1;
      }
    }
  }
  else if (VAR_4)
  {
    FUNC_3(VAR_0, VAR_10, VAR_11, VAR_6, VAR_7, VAR_8, VAR_9);
  }
  else
  {

    VAR_12 = (uint8*)FUNC_7(VAR_8 * VAR_9 * VAR_1);
    for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++)
      FUNC_5(FUNC_2(0, VAR_15, VAR_12, VAR_8, VAR_2), VAR_10, VAR_11 + VAR_15, VAR_8 * VAR_1);
    for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++)
      FUNC_4(FUNC_2(0, VAR_15, VAR_12, VAR_8, VAR_2), VAR_6, VAR_7 + VAR_15, VAR_8 * VAR_1);
    FUNC_6(VAR_12);
  }
}
