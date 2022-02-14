
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {int sum_exec_runtime; } ;
struct task_struct {scalar_t__ state; scalar_t__ sched_remote_wakeup; scalar_t__ on_rq; struct sched_entity se; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct task_struct *VAR_1)
{
 struct sched_entity *VAR_2 = &VAR_1->se;






 if (VAR_1->on_rq)
  return 1;
 if (!VAR_2->sum_exec_runtime ||
     (VAR_1->state == VAR_0 && VAR_1->sched_remote_wakeup))
  return 1;

 return 0;
}
