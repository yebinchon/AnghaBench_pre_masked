
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(CAN_FIFOMailBox_TypeDef *VAR_4) {
  int VAR_5 = FUNC_1(VAR_4);
  int VAR_6 = FUNC_0(VAR_4);

  if (VAR_6 == 356) {
    int VAR_7 = ((FUNC_2(VAR_4, 0) & 0x7U) << 8) | (FUNC_2(VAR_4, 1));

    VAR_7 = FUNC_3(VAR_7, 11);

    FUNC_4(&VAR_2, VAR_7);
  }


  if ((VAR_6 == 0x370) && (VAR_5 == 0)) {
    int VAR_8 = FUNC_2(VAR_4, 2) & 0x80;
    if (VAR_8 && !VAR_0) {
      VAR_3 = 1;
    }
    if (!VAR_8) {
      VAR_3 = 0;
    }
    VAR_0 = VAR_8;
  }


  if ((VAR_6 == 0x152) || (VAR_6 == 0x154)) {
    VAR_1 = (FUNC_2(VAR_4, 4) & 0x10) != 0;
  }
}
