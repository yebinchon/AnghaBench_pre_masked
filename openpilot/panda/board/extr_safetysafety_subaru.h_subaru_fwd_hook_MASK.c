
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(int VAR_0, CAN_FIFOMailBox_TypeDef *VAR_1) {

  int VAR_2 = -1;
  if (VAR_0 == 0) {
    VAR_2 = 2;
  }
  if (VAR_0 == 2) {




    int VAR_3 = FUNC_0(VAR_1);
    int VAR_4 = (VAR_3 == 290) || (VAR_3 == 356) || (VAR_3 == 545) || (VAR_3 == 802);
    if (!VAR_4) {
      VAR_2 = 0;
    }
  }


  return VAR_2;
}
