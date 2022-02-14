
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(int VAR_1, CAN_FIFOMailBox_TypeDef *VAR_2) {

  int VAR_3 = -1;
  int VAR_4 = FUNC_0(VAR_2);

  if ((VAR_1 == 0) && !VAR_0) {
    VAR_3 = 2;
  }

  if ((VAR_1 == 2) && !VAR_0 && (VAR_4 != 658) && (VAR_4 != 678)) {
    VAR_3 = 0;
  }
  return VAR_3;
}
