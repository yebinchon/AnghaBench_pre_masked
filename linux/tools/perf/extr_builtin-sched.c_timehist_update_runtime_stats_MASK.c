
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct thread_runtime {scalar_t__ ready_to_run; scalar_t__ last_time; scalar_t__ last_state; scalar_t__ dt_preempt; int total_preempt_time; scalar_t__ dt_iowait; int total_iowait_time; scalar_t__ dt_sleep; int total_sleep_time; scalar_t__ dt_delay; int total_delay_time; scalar_t__ dt_run; int total_run_time; int run_stats; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct thread_runtime *VAR_2,
      u64 VAR_3, u64 VAR_4)
{
 VAR_2->dt_delay = 0;
 VAR_2->dt_sleep = 0;
 VAR_2->dt_iowait = 0;
 VAR_2->dt_preempt = 0;
 VAR_2->dt_run = 0;

 if (VAR_4) {
  VAR_2->dt_run = VAR_3 - VAR_4;
  if (VAR_2->ready_to_run) {
   if (VAR_2->ready_to_run > VAR_4)
    FUNC_0("time travel: wakeup time for task > previous sched_switch event\n");
   else
    VAR_2->dt_delay = VAR_4 - VAR_2->ready_to_run;
  }

  if (VAR_2->last_time > VAR_4)
   FUNC_0("time travel: last sched out time for task > previous sched_switch event\n");
  else if (VAR_2->last_time) {
   u64 VAR_5 = VAR_4 - VAR_2->last_time;

   if (VAR_2->last_state == VAR_0)
    VAR_2->dt_preempt = VAR_5;
   else if (VAR_2->last_state == VAR_1)
    VAR_2->dt_iowait = VAR_5;
   else
    VAR_2->dt_sleep = VAR_5;
  }
 }

 FUNC_1(&VAR_2->run_stats, VAR_2->dt_run);

 VAR_2->total_run_time += VAR_2->dt_run;
 VAR_2->total_delay_time += VAR_2->dt_delay;
 VAR_2->total_sleep_time += VAR_2->dt_sleep;
 VAR_2->total_iowait_time += VAR_2->dt_iowait;
 VAR_2->total_preempt_time += VAR_2->dt_preempt;
}
