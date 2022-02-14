
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_dl_entity {int flags; int dl_period; int dl_deadline; int dl_runtime; } ;
struct task_struct {int rt_priority; struct sched_dl_entity dl; } ;
struct sched_attr {int sched_flags; int sched_period; int sched_deadline; int sched_runtime; int sched_priority; } ;



void FUNC_0(struct task_struct *VAR_0, struct sched_attr *VAR_1)
{
 struct sched_dl_entity *VAR_2 = &VAR_0->dl;

 VAR_1->sched_priority = VAR_0->rt_priority;
 VAR_1->sched_runtime = VAR_2->dl_runtime;
 VAR_1->sched_deadline = VAR_2->dl_deadline;
 VAR_1->sched_period = VAR_2->dl_period;
 VAR_1->sched_flags = VAR_2->flags;
}
