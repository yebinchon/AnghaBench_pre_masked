
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_6__ {struct posix_cputimer_base* bases; } ;
struct task_struct {TYPE_4__* signal; TYPE_2__ posix_cputimers; } ;
struct posix_cputimer_base {scalar_t__ nextevt; int tqhead; } ;
struct cpu_timer {struct task_struct* task; } ;
struct TYPE_5__ {struct cpu_timer cpu; } ;
struct k_itimer {int it_clock; TYPE_1__ it; } ;
struct TYPE_7__ {struct posix_cputimer_base* bases; } ;
struct TYPE_8__ {TYPE_3__ posix_cputimers; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct cpu_timer*) ;
 scalar_t__ FUNC_3 (struct cpu_timer*) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (struct task_struct*,int ) ;

__attribute__((used)) static void FUNC_6(struct k_itimer *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1->it_clock);
 struct cpu_timer *VAR_3 = &VAR_1->it.cpu;
 u64 VAR_4 = FUNC_3(VAR_3);
 struct task_struct *VAR_5 = VAR_3->task;
 struct posix_cputimer_base *VAR_6;

 if (FUNC_0(VAR_1->it_clock))
  VAR_6 = VAR_5->posix_cputimers.bases + VAR_2;
 else
  VAR_6 = VAR_5->signal->posix_cputimers.bases + VAR_2;

 if (!FUNC_2(&VAR_6->tqhead, VAR_3))
  return;







 if (VAR_4 < VAR_6->nextevt)
  VAR_6->nextevt = VAR_4;

 if (FUNC_0(VAR_1->it_clock))
  FUNC_5(VAR_5, VAR_0);
 else
  FUNC_4(VAR_5->signal, VAR_0);
}
