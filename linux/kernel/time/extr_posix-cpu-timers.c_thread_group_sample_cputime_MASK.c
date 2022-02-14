
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct thread_group_cputimer {int cputime_atomic; } ;
struct task_struct {TYPE_1__* signal; } ;
struct posix_cputimers {int timers_active; } ;
struct TYPE_2__ {struct posix_cputimers posix_cputimers; struct thread_group_cputimer cputimer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct task_struct *VAR_0, u64 *VAR_1)
{
 struct thread_group_cputimer *VAR_2 = &VAR_0->signal->cputimer;
 struct posix_cputimers *VAR_3 = &VAR_0->signal->posix_cputimers;

 FUNC_0(!VAR_3->timers_active);

 FUNC_1(&VAR_2->cputime_atomic, VAR_1);
}
