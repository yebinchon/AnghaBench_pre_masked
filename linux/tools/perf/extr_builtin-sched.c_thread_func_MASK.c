
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct task_desc {char* comm; unsigned long nr_events; unsigned long curr_event; int work_done_sem; scalar_t__ cpu_usage; int * atoms; int ready_for_work; } ;
struct sched_thread_parms {int fd; struct perf_sched* sched; struct task_desc* task; } ;
struct perf_sched {int work_done_wait_mutex; int start_work_mutex; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct perf_sched*,int ) ;
 int FUNC_3 (int ,char*) ;
 unsigned long FUNC_4 (int *) ;
 unsigned long FUNC_5 (int *) ;
 unsigned long FUNC_6 (int *) ;
 int FUNC_7 (char*,char*,char*) ;
 int FUNC_8 (struct sched_thread_parms**) ;

__attribute__((used)) static void *FUNC_9(void *VAR_1)
{
 struct sched_thread_parms *VAR_2 = VAR_1;
 struct task_desc *VAR_3 = VAR_2->task;
 struct perf_sched *VAR_4 = VAR_2->sched;
 u64 VAR_5, VAR_6;
 unsigned long VAR_7, VAR_8;
 char VAR_9[22];
 int VAR_10 = VAR_2->fd;

 FUNC_8(&VAR_2);

 FUNC_7(VAR_9, ":%s", VAR_3->comm);
 FUNC_3(VAR_0, VAR_9);
 if (VAR_10 < 0)
  return ((void*)0);
again:
 VAR_8 = FUNC_6(&VAR_3->ready_for_work);
 FUNC_0(VAR_8);
 VAR_8 = FUNC_4(&VAR_4->start_work_mutex);
 FUNC_0(VAR_8);
 VAR_8 = FUNC_5(&VAR_4->start_work_mutex);
 FUNC_0(VAR_8);

 VAR_5 = FUNC_1(VAR_10);

 for (VAR_7 = 0; VAR_7 < VAR_3->nr_events; VAR_7++) {
  VAR_3->curr_event = VAR_7;
  FUNC_2(VAR_4, VAR_3->atoms[VAR_7]);
 }

 VAR_6 = FUNC_1(VAR_10);
 VAR_3->cpu_usage = VAR_6 - VAR_5;
 VAR_8 = FUNC_6(&VAR_3->work_done_sem);
 FUNC_0(VAR_8);

 VAR_8 = FUNC_4(&VAR_4->work_done_wait_mutex);
 FUNC_0(VAR_8);
 VAR_8 = FUNC_5(&VAR_4->work_done_wait_mutex);
 FUNC_0(VAR_8);

 goto again;
}
