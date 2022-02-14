
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct total_run_stats {TYPE_1__* sched; int total_run_time; int sched_count; int task_count; } ;
struct TYPE_4__ {scalar_t__ n; } ;
struct thread_runtime {scalar_t__ total_run_time; TYPE_2__ run_stats; } ;
struct thread {int dummy; } ;
struct TYPE_3__ {scalar_t__ show_state; } ;


 int FUNC_0 (struct thread*,struct thread_runtime*) ;
 int FUNC_1 (struct thread*,struct thread_runtime*) ;
 scalar_t__ FUNC_2 (struct thread*) ;
 struct thread_runtime* FUNC_3 (struct thread*) ;

__attribute__((used)) static int FUNC_4(struct thread *VAR_0, void *VAR_1)
{
 struct total_run_stats *VAR_2 = VAR_1;
 struct thread_runtime *VAR_3;

 if (FUNC_2(VAR_0))
  return 0;

 VAR_3 = FUNC_3(VAR_0);
 if (VAR_3 && VAR_3->run_stats.n) {
  VAR_2->task_count++;
  VAR_2->sched_count += VAR_3->run_stats.n;
  VAR_2->total_run_time += VAR_3->total_run_time;

  if (VAR_2->sched->show_state)
   FUNC_1(VAR_0, VAR_3);
  else
   FUNC_0(VAR_0, VAR_3);
 }

 return 0;
}
