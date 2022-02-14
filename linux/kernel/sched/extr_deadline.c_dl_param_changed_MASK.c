
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_dl_entity {scalar_t__ dl_runtime; scalar_t__ dl_deadline; scalar_t__ dl_period; scalar_t__ flags; } ;
struct task_struct {struct sched_dl_entity dl; } ;
struct sched_attr {scalar_t__ sched_runtime; scalar_t__ sched_deadline; scalar_t__ sched_period; scalar_t__ sched_flags; } ;



bool FUNC_0(struct task_struct *VAR_0, const struct sched_attr *VAR_1)
{
 struct sched_dl_entity *VAR_2 = &VAR_0->dl;

 if (VAR_2->dl_runtime != VAR_1->sched_runtime ||
     VAR_2->dl_deadline != VAR_1->sched_deadline ||
     VAR_2->dl_period != VAR_1->sched_period ||
     VAR_2->flags != VAR_1->sched_flags)
  return 1;

 return 0;
}
