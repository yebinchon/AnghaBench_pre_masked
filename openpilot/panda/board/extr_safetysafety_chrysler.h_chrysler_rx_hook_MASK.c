
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
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(CAN_FIFOMailBox_TypeDef *VAR_4) {
  int VAR_5 = FUNC_1(VAR_4);
  int VAR_6 = FUNC_0(VAR_4);


  if (VAR_6 == 544) {
    int VAR_7 = ((FUNC_2(VAR_4, 4) & 0x7U) << 8) + FUNC_2(VAR_4, 5) - 1024U;


    FUNC_3(&VAR_2, VAR_7);
  }


  if (VAR_6 == 0x1F4) {
    int VAR_8 = ((FUNC_2(VAR_4, 2) & 0x38) >> 3) == 7;
    if (VAR_8 && !VAR_1) {
      VAR_3 = 1;
    }
    if (!VAR_8) {
      VAR_3 = 0;
    }
    VAR_1 = VAR_8;
  }


  if ((VAR_5 == 0) && (VAR_6 == 0x292)) {
    VAR_0 = 1;
    VAR_3 = 0;
  }
}
