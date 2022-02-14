
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int RIR; } ;
typedef TYPE_1__ CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_0, CAN_FIFOMailBox_TypeDef *VAR_1) {

  int VAR_2 = -1;

  if (VAR_0 == 0) {
    int VAR_3 = FUNC_0(VAR_1);
    VAR_2 = 2;




    if ((VAR_3 == 0x152) || (VAR_3 == 0x154)) {
      bool VAR_4 = (FUNC_1(VAR_1, 4) & 0x10) != 0;
      if (!VAR_4) {
        VAR_2 = -1;
      }
    }
    if ((VAR_3 == 0x151) || (VAR_3 == 0x153) || (VAR_3 == 0x314)) {



      uint32_t VAR_5 = VAR_3 + 1;
      VAR_1->RIR = (VAR_5 << 21) | (VAR_1->RIR & 0x1fffff);
    }
  }

  if (VAR_0 == 2) {
    VAR_2 = 0;
  }

  return VAR_2;
}
