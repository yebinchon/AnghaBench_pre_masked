
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpu_timer {int dummy; } ;
struct TYPE_2__ {struct cpu_timer cpu; } ;
struct k_itimer {int it_sigev_notify; int it_requeue_pending; int it_interval; int it_process; int * sigq; TYPE_1__ it; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpu_timer*,int ) ;
 int FUNC_1 (struct k_itimer*) ;
 scalar_t__ FUNC_2 (struct k_itimer*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct k_itimer *VAR_2)
{
 struct cpu_timer *VAR_3 = &VAR_2->it.cpu;

 if ((VAR_2->it_sigev_notify & ~VAR_1) == VAR_0) {



  FUNC_0(VAR_3, 0);
 } else if (FUNC_3(VAR_2->sigq == ((void*)0))) {




  FUNC_4(VAR_2->it_process);
  FUNC_0(VAR_3, 0);
 } else if (!VAR_2->it_interval) {



  FUNC_2(VAR_2, 0);
  FUNC_0(VAR_3, 0);
 } else if (FUNC_2(VAR_2, ++VAR_2->it_requeue_pending)) {






  FUNC_1(VAR_2);
  ++VAR_2->it_requeue_pending;
 }
}
