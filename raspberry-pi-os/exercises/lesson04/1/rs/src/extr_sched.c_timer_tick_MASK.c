
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ counter; scalar_t__ preempt_count; } ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3() {
  --VAR_0->counter;
  if (VAR_0->counter > 0 || VAR_0->preempt_count > 0) {
    return;
  }
  VAR_0->counter = 0;
  FUNC_2();
  FUNC_0();
  FUNC_1();
}
