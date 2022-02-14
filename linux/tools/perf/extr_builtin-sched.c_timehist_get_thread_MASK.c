
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct perf_sched {scalar_t__ idle_hist; } ;
struct perf_sample {int cpu; scalar_t__ tid; int pid; } ;
struct machine {int dummy; } ;
struct idle_thread_runtime {struct thread* last_thread; } ;
struct evsel {int dummy; } ;


 struct thread* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct perf_sample*,struct evsel*) ;
 struct thread* FUNC_2 (struct machine*,int ,int ) ;
 scalar_t__ FUNC_3 (struct evsel*,struct perf_sample*,char*) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct perf_sched*,struct idle_thread_runtime*,struct perf_sample*) ;
 int FUNC_7 (struct perf_sched*,struct perf_sample*,struct evsel*,struct machine*) ;
 struct idle_thread_runtime* FUNC_8 (struct thread*) ;

__attribute__((used)) static struct thread *FUNC_9(struct perf_sched *VAR_0,
       struct perf_sample *VAR_1,
       struct machine *VAR_2,
       struct evsel *VAR_3)
{
 struct thread *VAR_4;

 if (FUNC_1(VAR_1, VAR_3)) {
  VAR_4 = FUNC_0(VAR_1->cpu);
  if (VAR_4 == ((void*)0))
   FUNC_5("Failed to get idle thread for cpu %d.\n", VAR_1->cpu);

 } else {

  VAR_4 = FUNC_2(VAR_2, VAR_1->pid,
       VAR_1->tid ?: VAR_1->pid);
  if (VAR_4 == ((void*)0)) {
   FUNC_4("Failed to get thread for tid %d. skipping sample.\n",
     VAR_1->tid);
  }

  FUNC_7(VAR_0, VAR_1, VAR_3, VAR_2);
  if (VAR_0->idle_hist) {
   struct thread *VAR_5;
   struct idle_thread_runtime *VAR_6;

   VAR_5 = FUNC_0(VAR_1->cpu);
   if (VAR_5 == ((void*)0)) {
    FUNC_5("Failed to get idle thread for cpu %d.\n", VAR_1->cpu);
    return ((void*)0);
   }

   VAR_6 = FUNC_8(VAR_5);
   if (VAR_6 == ((void*)0))
    return ((void*)0);

   VAR_6->last_thread = VAR_4;


   if (FUNC_3(VAR_3, VAR_1, "next_pid") == 0)
    FUNC_6(VAR_0, VAR_6, VAR_1);
  }
 }

 return VAR_4;
}
