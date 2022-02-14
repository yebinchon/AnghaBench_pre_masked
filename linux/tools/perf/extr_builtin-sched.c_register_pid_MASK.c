
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_desc {unsigned long pid; size_t nr; int comm; } ;
struct perf_sched {size_t nr_tasks; struct task_desc** tasks; struct task_desc** pid_to_task; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct perf_sched*,struct task_desc*,int ,int ) ;
 struct task_desc** FUNC_2 (int,int) ;
 int FUNC_3 (char*,int,unsigned long,char const*) ;
 void* FUNC_4 (struct task_desc**,int) ;
 int FUNC_5 (int ,char const*) ;
 scalar_t__ FUNC_6 (char*,int*) ;
 scalar_t__ VAR_1 ;
 struct task_desc* FUNC_7 (int) ;

__attribute__((used)) static struct task_desc *FUNC_8(struct perf_sched *VAR_2,
          unsigned long VAR_3, const char *VAR_4)
{
 struct task_desc *VAR_5;
 static int VAR_6;

 if (VAR_2->pid_to_task == ((void*)0)) {
  if (FUNC_6("kernel/pid_max", &VAR_6) < 0)
   VAR_6 = VAR_0;
  FUNC_0((VAR_2->pid_to_task = FUNC_2(VAR_6, sizeof(struct task_desc *))) == ((void*)0));
 }
 if (VAR_3 >= (unsigned long)VAR_6) {
  FUNC_0((VAR_2->pid_to_task = FUNC_4(VAR_2->pid_to_task, (VAR_3 + 1) *
   sizeof(struct task_desc *))) == ((void*)0));
  while (VAR_3 >= (unsigned long)VAR_6)
   VAR_2->pid_to_task[VAR_6++] = ((void*)0);
 }

 VAR_5 = VAR_2->pid_to_task[VAR_3];

 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_7(sizeof(*VAR_5));
 VAR_5->pid = VAR_3;
 VAR_5->nr = VAR_2->nr_tasks;
 FUNC_5(VAR_5->comm, VAR_4);




 FUNC_1(VAR_2, VAR_5, 0, 0);

 VAR_2->pid_to_task[VAR_3] = VAR_5;
 VAR_2->nr_tasks++;
 VAR_2->tasks = FUNC_4(VAR_2->tasks, VAR_2->nr_tasks * sizeof(struct task_desc *));
 FUNC_0(!VAR_2->tasks);
 VAR_2->tasks[VAR_5->nr] = VAR_5;

 if (VAR_1 > 0)
  FUNC_3("registered task #%ld, PID %ld (%s)\n", VAR_2->nr_tasks, VAR_3, VAR_4);

 return VAR_5;
}
