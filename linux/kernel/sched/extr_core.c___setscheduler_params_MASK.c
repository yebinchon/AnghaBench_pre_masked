
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int policy; int normal_prio; int rt_priority; int static_prio; } ;
struct sched_attr {int sched_policy; int sched_priority; int sched_nice; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct task_struct*,struct sched_attr const*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*,int) ;

__attribute__((used)) static void FUNC_6(struct task_struct *VAR_1,
  const struct sched_attr *VAR_2)
{
 int VAR_3 = VAR_2->sched_policy;

 if (VAR_3 == VAR_0)
  VAR_3 = VAR_1->policy;

 VAR_1->policy = VAR_3;

 if (FUNC_2(VAR_3))
  FUNC_1(VAR_1, VAR_2);
 else if (FUNC_3(VAR_3))
  VAR_1->static_prio = FUNC_0(VAR_2->sched_nice);






 VAR_1->rt_priority = VAR_2->sched_priority;
 VAR_1->normal_prio = FUNC_4(VAR_1);
 FUNC_5(VAR_1, 1);
}
