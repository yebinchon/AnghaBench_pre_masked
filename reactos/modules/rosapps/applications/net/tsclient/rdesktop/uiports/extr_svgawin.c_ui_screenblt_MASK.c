
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int,int,int) ;
 int FUNC_1 (int,int,int,int,int ) ;
 scalar_t__ FUNC_2 (int,int,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int,int*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int,int,int ,int) ;
 int FUNC_8 (int,int,int ,int*,int,int ) ;
 scalar_t__ FUNC_9 (int*,int*,int*,int*,int*,int*) ;
 int FUNC_10 (int*) ;
 scalar_t__ FUNC_11 (int) ;

void FUNC_12(uint8 VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9,
                  int VAR_10, int VAR_11)
{
  int VAR_12;
  int VAR_13;
  uint8* VAR_14;

  if (VAR_6 == VAR_10 && VAR_7 == VAR_11)
    return;
  if (FUNC_9(&VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_11))
  {
    if (FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9) || FUNC_2(VAR_10, VAR_11, VAR_8, VAR_9))
      FUNC_4(VAR_3, VAR_4);
    if (VAR_5 == 0xc)
      FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
    else
    {
      VAR_14 = (uint8*)FUNC_11(VAR_8 * VAR_9 * VAR_1);
      for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
        for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
          FUNC_8(VAR_13, VAR_12, FUNC_5(VAR_10 + VAR_13, VAR_11 + VAR_12), VAR_14, VAR_8, VAR_2);
      for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
        for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
          FUNC_7(VAR_6 + VAR_13, VAR_7 + VAR_12, FUNC_6(VAR_13, VAR_12, VAR_14, VAR_8, VAR_2), VAR_5);
      FUNC_10(VAR_14);
    }
    FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9, VAR_0);
    FUNC_3();
  }
}
