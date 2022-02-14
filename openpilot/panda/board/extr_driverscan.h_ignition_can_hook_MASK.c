
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

void FUNC_5(CAN_FIFOMailBox_TypeDef *VAR_1) {

  int VAR_2 = FUNC_1(VAR_1);
  int VAR_3 = FUNC_0(VAR_1);
  int VAR_4 = FUNC_4(VAR_1);

  if (VAR_2 == 0) {

    if ((VAR_3 == 0x1F1) && (VAR_4 == 8)) {

      VAR_0 = (FUNC_2(VAR_1, 0) & 0x20) != 0;
    }

    if ((VAR_3 == 0x348) && (VAR_4 == 8)) {

      VAR_0 = (FUNC_2(VAR_1, 0) & 0x1) != 0;
    }

    if ((VAR_3 == 0x160) && (VAR_4 == 5)) {

      VAR_0 = FUNC_3(VAR_1) != 0;
    }

    if ((VAR_3 == 0x3C0) && (VAR_4 == 4)) {

     VAR_0 = (FUNC_2(VAR_1, 2) & 0x2) != 0;
    }
  }
}
