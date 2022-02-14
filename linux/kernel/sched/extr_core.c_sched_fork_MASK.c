
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {int pushable_dl_tasks; int pushable_tasks; scalar_t__ on_cpu; int sched_info; int pi_lock; TYPE_1__* sched_class; int se; int prio; scalar_t__ sched_reset_on_fork; int normal_prio; void* static_prio; scalar_t__ rt_priority; int policy; int state; } ;
struct TYPE_5__ {int normal_prio; } ;
struct TYPE_4__ {int (* task_fork ) (struct task_struct*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (unsigned long,struct task_struct*) ;
 int FUNC_5 (struct task_struct*,int ) ;
 TYPE_3__* VAR_4 ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct task_struct*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 scalar_t__ FUNC_14 (int ) ;
 TYPE_1__ VAR_6 ;
 int FUNC_15 () ;
 int FUNC_16 (struct task_struct*,int) ;
 int FUNC_17 () ;
 int FUNC_18 (struct task_struct*) ;
 scalar_t__ FUNC_19 (struct task_struct*) ;
 scalar_t__ FUNC_20 (struct task_struct*) ;
 int FUNC_21 (struct task_struct*) ;
 scalar_t__ FUNC_22 (scalar_t__) ;

int FUNC_23(unsigned long VAR_7, struct task_struct *VAR_8)
{
 unsigned long VAR_9;

 FUNC_4(VAR_7, VAR_8);





 VAR_8->state = VAR_3;




 VAR_8->prio = VAR_4->normal_prio;

 FUNC_21(VAR_8);




 if (FUNC_22(VAR_8->sched_reset_on_fork)) {
  if (FUNC_19(VAR_8) || FUNC_20(VAR_8)) {
   VAR_8->policy = VAR_2;
   VAR_8->static_prio = FUNC_0(0);
   VAR_8->rt_priority = 0;
  } else if (FUNC_1(VAR_8->static_prio) < 0)
   VAR_8->static_prio = FUNC_0(0);

  VAR_8->prio = VAR_8->normal_prio = FUNC_3(VAR_8);
  FUNC_16(VAR_8, 0);





  VAR_8->sched_reset_on_fork = 0;
 }

 if (FUNC_6(VAR_8->prio))
  return -VAR_0;
 else if (FUNC_14(VAR_8->prio))
  VAR_8->sched_class = &VAR_6;
 else
  VAR_8->sched_class = &VAR_5;

 FUNC_7(&VAR_8->se);
 FUNC_12(&VAR_8->pi_lock, VAR_9);




 FUNC_5(VAR_8, FUNC_17());
 if (VAR_8->sched_class->task_fork)
  VAR_8->sched_class->task_fork(VAR_8);
 FUNC_13(&VAR_8->pi_lock, VAR_9);
 FUNC_8(VAR_8);




 return 0;
}
