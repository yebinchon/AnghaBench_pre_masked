
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tstr ;
struct thread {int dummy; } ;
struct perf_sched {char* max_cpu; scalar_t__ show_cpu_visual; } ;
struct perf_sample {int cpu; int time; int tid; int pid; } ;
struct machine {int dummy; } ;
struct evsel {int dummy; } ;


 char* VAR_0 ;
 struct thread* FUNC_0 (struct machine*,int ,int ) ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 (struct thread*) ;
 scalar_t__ FUNC_3 (struct perf_sched*,struct thread*,struct evsel*,struct perf_sample*) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void FUNC_5(struct perf_sched *VAR_1,
     struct evsel *VAR_2,
     struct perf_sample *VAR_3,
     struct machine *VAR_4,
     struct thread *VAR_5)
{
 struct thread *VAR_6;
 char VAR_7[64];

 VAR_6 = FUNC_0(VAR_4, VAR_3->pid, VAR_3->tid);
 if (VAR_6 == ((void*)0))
  return;


 if (FUNC_3(VAR_1, VAR_6, VAR_2, VAR_3) &&
     FUNC_3(VAR_1, VAR_5, VAR_2, VAR_3)) {
  return;
 }

 FUNC_4(VAR_3->time, VAR_7, sizeof(VAR_7));
 FUNC_1("%15s [%04d] ", VAR_7, VAR_3->cpu);
 if (VAR_1->show_cpu_visual)
  FUNC_1(" %*s ", VAR_1->max_cpu + 1, "");

 FUNC_1(" %-*s ", VAR_0, FUNC_2(VAR_6));


 FUNC_1("  %9s  %9s  %9s ", "", "", "");

 FUNC_1("awakened: %s", FUNC_2(VAR_5));

 FUNC_1("\n");
}
