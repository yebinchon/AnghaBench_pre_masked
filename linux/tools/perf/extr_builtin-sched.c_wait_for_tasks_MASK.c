
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct task_desc {scalar_t__ curr_event; int sleep_sem; scalar_t__ cpu_usage; int work_done_sem; int ready_for_work; } ;
struct perf_sched {int cpu_usage; unsigned long nr_tasks; int runavg_cpu_usage; int replay_repeat; int parent_cpu_usage; int runavg_parent_cpu_usage; struct task_desc** tasks; int start_work_mutex; int work_done_wait_mutex; int start_time; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned long FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 unsigned long FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct perf_sched *VAR_0)
{
 u64 VAR_1, VAR_2;
 struct task_desc *VAR_3;
 unsigned long VAR_4, VAR_5;

 VAR_0->start_time = FUNC_2();
 VAR_0->cpu_usage = 0;
 FUNC_4(&VAR_0->work_done_wait_mutex);

 for (VAR_4 = 0; VAR_4 < VAR_0->nr_tasks; VAR_4++) {
  VAR_3 = VAR_0->tasks[VAR_4];
  VAR_5 = FUNC_6(&VAR_3->ready_for_work);
  FUNC_0(VAR_5);
  FUNC_5(&VAR_3->ready_for_work, 0, 0);
 }
 VAR_5 = FUNC_3(&VAR_0->work_done_wait_mutex);
 FUNC_0(VAR_5);

 VAR_1 = FUNC_1();

 FUNC_4(&VAR_0->start_work_mutex);

 for (VAR_4 = 0; VAR_4 < VAR_0->nr_tasks; VAR_4++) {
  VAR_3 = VAR_0->tasks[VAR_4];
  VAR_5 = FUNC_6(&VAR_3->work_done_sem);
  FUNC_0(VAR_5);
  FUNC_5(&VAR_3->work_done_sem, 0, 0);
  VAR_0->cpu_usage += VAR_3->cpu_usage;
  VAR_3->cpu_usage = 0;
 }

 VAR_2 = FUNC_1();
 if (!VAR_0->runavg_cpu_usage)
  VAR_0->runavg_cpu_usage = VAR_0->cpu_usage;
 VAR_0->runavg_cpu_usage = (VAR_0->runavg_cpu_usage * (VAR_0->replay_repeat - 1) + VAR_0->cpu_usage) / VAR_0->replay_repeat;

 VAR_0->parent_cpu_usage = VAR_2 - VAR_1;
 if (!VAR_0->runavg_parent_cpu_usage)
  VAR_0->runavg_parent_cpu_usage = VAR_0->parent_cpu_usage;
 VAR_0->runavg_parent_cpu_usage = (VAR_0->runavg_parent_cpu_usage * (VAR_0->replay_repeat - 1) +
      VAR_0->parent_cpu_usage)/VAR_0->replay_repeat;

 VAR_5 = FUNC_3(&VAR_0->start_work_mutex);
 FUNC_0(VAR_5);

 for (VAR_4 = 0; VAR_4 < VAR_0->nr_tasks; VAR_4++) {
  VAR_3 = VAR_0->tasks[VAR_4];
  FUNC_5(&VAR_3->sleep_sem, 0, 0);
  VAR_3->curr_event = 0;
 }
}
