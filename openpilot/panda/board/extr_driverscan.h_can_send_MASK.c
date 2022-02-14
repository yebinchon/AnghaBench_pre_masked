
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int uint8_t ;
struct TYPE_6__ {int RDTR; } ;
typedef TYPE_1__ CAN_FIFOMailBox_TypeDef ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 unsigned int VAR_1 ;
 int* VAR_2 ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 int * VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

void FUNC_5(CAN_FIFOMailBox_TypeDef *VAR_5, uint8_t VAR_6) {
  if (FUNC_4(VAR_5) != 0) {
    if (VAR_6 < VAR_0) {


      VAR_5->RDTR &= 0xF;
      if ((VAR_6 == 3U) && (VAR_2[3] == 0xFFU)) {
        VAR_4 += FUNC_1(VAR_5) ? 0U : 1U;
      } else {
        VAR_1 += FUNC_2(VAR_3[VAR_6], VAR_5) ? 0U : 1U;
        FUNC_3(FUNC_0(VAR_6));
      }
    }
  }
}
