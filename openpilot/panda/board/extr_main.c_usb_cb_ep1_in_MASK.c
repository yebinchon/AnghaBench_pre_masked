
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int VAR_0 ;

int FUNC_3(void *VAR_1, int VAR_2, bool VAR_3) {
  FUNC_1(VAR_3);
  CAN_FIFOMailBox_TypeDef *VAR_4 = (CAN_FIFOMailBox_TypeDef *)VAR_1;
  int VAR_5 = 0;
  while (VAR_5 < FUNC_0(VAR_2/0x10, 4) && FUNC_2(&VAR_0, &VAR_4[VAR_5])) {
    VAR_5++;
  }
  return VAR_5*0x10;
}
