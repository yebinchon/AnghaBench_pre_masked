
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_dl_entity {scalar_t__ dl_overrun; scalar_t__ dl_non_contending; scalar_t__ dl_yielded; scalar_t__ dl_throttled; scalar_t__ dl_density; scalar_t__ dl_bw; scalar_t__ flags; scalar_t__ dl_period; scalar_t__ dl_deadline; scalar_t__ dl_runtime; } ;
struct task_struct {struct sched_dl_entity dl; } ;



void FUNC_0(struct task_struct *VAR_0)
{
 struct sched_dl_entity *VAR_1 = &VAR_0->dl;

 VAR_1->dl_runtime = 0;
 VAR_1->dl_deadline = 0;
 VAR_1->dl_period = 0;
 VAR_1->flags = 0;
 VAR_1->dl_bw = 0;
 VAR_1->dl_density = 0;

 VAR_1->dl_throttled = 0;
 VAR_1->dl_yielded = 0;
 VAR_1->dl_non_contending = 0;
 VAR_1->dl_overrun = 0;
}
