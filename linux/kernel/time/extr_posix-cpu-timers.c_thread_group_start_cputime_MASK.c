
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct thread_group_cputimer {int cputime_atomic; } ;
struct task_struct {TYPE_1__* signal; } ;
struct task_cputime {int dummy; } ;
struct posix_cputimers {int timers_active; } ;
struct TYPE_2__ {struct posix_cputimers posix_cputimers; struct thread_group_cputimer cputimer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct task_struct*,struct task_cputime*) ;
 int FUNC_4 (int *,struct task_cputime*) ;

__attribute__((used)) static void FUNC_5(struct task_struct *VAR_0, u64 *VAR_1)
{
 struct thread_group_cputimer *VAR_2 = &VAR_0->signal->cputimer;
 struct posix_cputimers *VAR_3 = &VAR_0->signal->posix_cputimers;


 if (!FUNC_0(VAR_3->timers_active)) {
  struct task_cputime VAR_4;






  FUNC_3(VAR_0, &VAR_4);
  FUNC_4(&VAR_2->cputime_atomic, &VAR_4);
  FUNC_1(VAR_3->timers_active, 1);
 }
 FUNC_2(&VAR_2->cputime_atomic, VAR_1);
}
