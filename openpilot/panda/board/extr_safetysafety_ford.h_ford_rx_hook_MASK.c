
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(CAN_FIFOMailBox_TypeDef *VAR_4) {

  int VAR_5 = FUNC_0(VAR_4);

  if (VAR_5 == 0x217) {

    VAR_3 = 0;
    for (int VAR_6 = 0; VAR_6 < 8; VAR_6 += 2) {
      VAR_3 |= FUNC_1(VAR_4, VAR_6) | (FUNC_1(VAR_4, (int)(VAR_6 + 1)) & 0xFCU);
    }
  }


  if (VAR_5 == 0x83) {
    bool VAR_7 = FUNC_1(VAR_4, 1) & 0x1;
    bool VAR_8 = FUNC_1(VAR_4, 3) & 0x30;
    if (VAR_7) {
      VAR_0 = 0;
    }
    if (VAR_8) {
      VAR_0 = 1;
    }
  }



  if (VAR_5 == 0x165) {
    int VAR_9 = FUNC_1(VAR_4, 0) & 0x20;
    if (VAR_9 && (!(VAR_1) || VAR_3)) {
      VAR_0 = 0;
    }
    VAR_1 = VAR_9;
  }


  if (VAR_5 == 0x204) {
    int VAR_10 = (FUNC_1(VAR_4, 0) & 0x03) | FUNC_1(VAR_4, 1);
    if (VAR_10 && !(VAR_2)) {
      VAR_0 = 0;
    }
    VAR_2 = VAR_10;
  }
}
