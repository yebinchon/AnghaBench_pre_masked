
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(CAN_FIFOMailBox_TypeDef *VAR_3) {
  int VAR_4 = FUNC_1(VAR_3);
  int VAR_5 = FUNC_0(VAR_3);

  if (((VAR_5 == 0x119) || (VAR_5 == 0x371)) && (VAR_4 == 0)){
    int VAR_6 = (VAR_5 == 0x119) ? 16 : 29;
    int VAR_7 = ((FUNC_2(VAR_3) >> VAR_6) & 0x7FF);
    VAR_7 = FUNC_4(VAR_7, 11);

    FUNC_5(&VAR_2, VAR_7);
  }


  if (((VAR_5 == 0x240) || (VAR_5 == 0x144)) && (VAR_4 == 0)) {
    int VAR_8 = (VAR_5 == 0x240) ? 9 : 17;
    int VAR_9 = ((FUNC_3(VAR_3) >> VAR_8) & 1);
    if (VAR_9 && !VAR_1) {
      VAR_0 = 1;
    }
    if (!VAR_9) {
      VAR_0 = 0;
    }
    VAR_1 = VAR_9;
  }
}
