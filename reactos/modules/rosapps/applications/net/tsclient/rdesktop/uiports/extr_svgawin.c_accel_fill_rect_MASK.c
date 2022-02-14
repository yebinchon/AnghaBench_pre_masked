
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_1 (int,int,scalar_t__,int,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,int,...) ;
 int FUNC_3 (int*,int,int,int) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int) ;

void FUNC_6(int VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
  int VAR_12;
  uint8* VAR_13;
  uint8* VAR_14;

  if (VAR_6 != 0)
  {
    VAR_13 = FUNC_5(VAR_9 * VAR_2);
    if (VAR_2 == 1)
      for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
        VAR_13[VAR_12] = VAR_11;
    else if (VAR_2 == 2)
      for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
        ((uint16*)VAR_13)[VAR_12] = VAR_11;
    VAR_14 = FUNC_1(VAR_7, VAR_8, VAR_6, VAR_4, VAR_3);
    for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
    {
      FUNC_0(VAR_14, VAR_13, VAR_9 * VAR_2);
      VAR_14 = VAR_14 + VAR_4 * VAR_2;
    }
    FUNC_4(VAR_13);
  }
  else if (VAR_5)
  {
    FUNC_2(VAR_1, VAR_11);
    FUNC_2(VAR_0, VAR_7, VAR_8, VAR_9, VAR_10);
  }
  else
  {
    VAR_13 = FUNC_5(VAR_9 * VAR_2);
    if (VAR_2 == 1)
      for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
        VAR_13[VAR_12] = VAR_11;
    else if (VAR_2 == 2)
      for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
        ((uint16*)VAR_13)[VAR_12] = VAR_11;
    for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
      FUNC_3(VAR_13, VAR_7, VAR_8 + VAR_12, VAR_9 * VAR_2);
    FUNC_4(VAR_13);
  }
}
