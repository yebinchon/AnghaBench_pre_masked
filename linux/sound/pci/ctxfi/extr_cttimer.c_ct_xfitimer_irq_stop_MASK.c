
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw {int (* set_timer_tick ) (struct hw*,int ) ;int (* set_timer_irq ) (struct hw*,int ) ;} ;
struct ct_timer {scalar_t__ running; TYPE_1__* atc; } ;
struct TYPE_2__ {struct hw* hw; } ;


 int FUNC_0 (struct hw*,int ) ;
 int FUNC_1 (struct hw*,int ) ;

__attribute__((used)) static void FUNC_2(struct ct_timer *VAR_0)
{
 if (VAR_0->running) {
  struct hw *VAR_1 = VAR_0->atc->hw;
  VAR_1->set_timer_irq(VAR_1, 0);
  VAR_1->set_timer_tick(VAR_1, 0);
  VAR_0->running = 0;
 }
}
