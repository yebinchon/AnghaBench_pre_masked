
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int RDLR; } ;
typedef TYPE_1__ CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(int VAR_0, CAN_FIFOMailBox_TypeDef *VAR_1) {

  int VAR_2 = -1;
  int VAR_3 = FUNC_0(VAR_1);

  if (VAR_0 == 0) {


    if (VAR_3 != 0x214) {

      VAR_2 = 2;
    }
    if (VAR_3 == 0x101) {
      VAR_1->RDLR = FUNC_2(VAR_1) | 0x4000;
      uint32_t VAR_4 = (FUNC_1(VAR_1, 1) + FUNC_1(VAR_1, 0) + 2) & 0xFF;
      VAR_1->RDLR = FUNC_2(VAR_1) & 0xFFFF;
      VAR_1->RDLR = FUNC_2(VAR_1) + (VAR_4 << 16);
    }
  }
  if (VAR_0 == 2) {

    if (VAR_3 != 0x101) {
      VAR_2 = 0;
    }
  }
  return VAR_2;
}
