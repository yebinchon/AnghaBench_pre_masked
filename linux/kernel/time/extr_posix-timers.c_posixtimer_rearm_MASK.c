
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernel_siginfo {scalar_t__ si_sys_private; int si_overrun; int si_tid; } ;
struct k_itimer {scalar_t__ it_requeue_pending; int it_active; long long it_overrun_last; long long it_overrun; TYPE_1__* kclock; scalar_t__ it_interval; } ;
struct TYPE_2__ {int (* timer_rearm ) (struct k_itimer*) ;} ;


 struct k_itimer* FUNC_0 (int ,unsigned long*) ;
 int FUNC_1 (struct k_itimer*) ;
 int FUNC_2 (struct k_itimer*,int ) ;
 int FUNC_3 (struct k_itimer*,unsigned long) ;

void FUNC_4(struct kernel_siginfo *VAR_0)
{
 struct k_itimer *VAR_1;
 unsigned long VAR_2;

 VAR_1 = FUNC_0(VAR_0->si_tid, &VAR_2);
 if (!VAR_1)
  return;

 if (VAR_1->it_interval && VAR_1->it_requeue_pending == VAR_0->si_sys_private) {
  VAR_1->kclock->timer_rearm(VAR_1);

  VAR_1->it_active = 1;
  VAR_1->it_overrun_last = VAR_1->it_overrun;
  VAR_1->it_overrun = -1LL;
  ++VAR_1->it_requeue_pending;

  VAR_0->si_overrun = FUNC_2(VAR_1, VAR_0->si_overrun);
 }

 FUNC_3(VAR_1, VAR_2);
}
