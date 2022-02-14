
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int IMR; unsigned int RTSR; unsigned int FTSR; } ;
struct TYPE_3__ {int * EXTICR; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (char*) ;

void FUNC_2(void){
  if(VAR_9 == VAR_5){
    VAR_6->EXTICR[0] = VAR_8;
    VAR_0->IMR |= (1U << 3);
    VAR_0->RTSR |= (1U << 3);
    VAR_0->FTSR |= (1U << 3);
    FUNC_1("setup interrupts: normal\n");
  } else if(VAR_9 == VAR_4) {
    VAR_6->EXTICR[0] = VAR_7;
    VAR_0->IMR |= (1U << 0);
    VAR_0->RTSR |= (1U << 0);
    VAR_0->FTSR |= (1U << 0);
    FUNC_0(VAR_2);
    FUNC_1("setup interrupts: flipped\n");
  } else {
    FUNC_1("tried to setup ignition interrupts without harness connected\n");
  }
  FUNC_0(VAR_1);
  FUNC_0(VAR_3);
}
