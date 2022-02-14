
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int MSR; int TSR; } ;
typedef TYPE_1__ CAN_TypeDef ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(CAN_TypeDef *VAR_2) {
  VAR_2->TSR |= VAR_1;
  VAR_2->MSR &= ~(VAR_0);

  VAR_2->MSR = VAR_2->MSR;
}
