
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_desc {int dummy; } ;
struct perf_sched {unsigned long nr_tasks; struct task_desc** tasks; } ;


 int FUNC_0 (struct perf_sched*,struct task_desc*,int ,struct task_desc*) ;

__attribute__((used)) static void FUNC_1(struct perf_sched *VAR_0)
{
 struct task_desc *VAR_1, *VAR_2;
 unsigned long VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0->nr_tasks; VAR_3++) {
  VAR_1 = VAR_0->tasks[VAR_3];
  VAR_4 = VAR_3 + 1;
  if (VAR_4 == VAR_0->nr_tasks)
   VAR_4 = 0;
  VAR_2 = VAR_0->tasks[VAR_4];
  FUNC_0(VAR_0, VAR_1, 0, VAR_2);
 }
}
