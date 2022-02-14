
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(CAN_FIFOMailBox_TypeDef *VAR_7) {
  int VAR_8 = FUNC_1(VAR_7);
  int VAR_9 = FUNC_0(VAR_7);



  if ((VAR_8 == 0) && (VAR_9 == VAR_1)) {
    int VAR_10 = FUNC_2(VAR_7, 5) | ((FUNC_2(VAR_7, 6) & 0x1F) << 8);
    int VAR_11 = (FUNC_2(VAR_7, 6) & 0x80) >> 7;
    if (VAR_11 == 1) {
      VAR_10 *= -1;
    }

    FUNC_4(&VAR_6, VAR_10);
  }




  if (VAR_9 == VAR_0) {
    int VAR_12 = (FUNC_2(VAR_7, 7) & 0x70) >> 4;
    VAR_3 = ((VAR_12 == 3) || (VAR_12 == 4) || (VAR_12 == 5)) ? 1 : 0;
  }


  if (VAR_9 == VAR_2) {
    int VAR_13 = (FUNC_3(VAR_7) >> 12) & 0xFF;
    if ((VAR_13 > 0) && (VAR_5 == 0) && VAR_4) {
      VAR_3 = 0;
    }
    VAR_5 = VAR_13;
  }
}
