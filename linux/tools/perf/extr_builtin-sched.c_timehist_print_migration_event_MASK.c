
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int tstr ;
struct thread {int dummy; } ;
struct perf_sched {scalar_t__ max_cpu; scalar_t__ show_cpu_visual; scalar_t__ summary_only; } ;
struct perf_sample {int cpu; int time; int tid; int pid; } ;
struct machine {int dummy; } ;
struct evsel {int dummy; } ;


 char* VAR_0 ;
 struct thread* FUNC_0 (struct machine*,int ,int ) ;
 scalar_t__ FUNC_1 (struct evsel*,struct perf_sample*,char*) ;
 int FUNC_2 (char*,...) ;
 char* FUNC_3 (struct thread*) ;
 scalar_t__ FUNC_4 (struct perf_sched*,struct thread*,struct evsel*,struct perf_sample*) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static void FUNC_6(struct perf_sched *VAR_1,
     struct evsel *VAR_2,
     struct perf_sample *VAR_3,
     struct machine *VAR_4,
     struct thread *VAR_5)
{
 struct thread *VAR_6;
 char VAR_7[64];
 u32 VAR_8 = VAR_1->max_cpu + 1;
 u32 VAR_9, VAR_10;

 if (VAR_1->summary_only)
  return;

 VAR_8 = VAR_1->max_cpu + 1;
 VAR_9 = FUNC_1(VAR_2, VAR_3, "orig_cpu");
 VAR_10 = FUNC_1(VAR_2, VAR_3, "dest_cpu");

 VAR_6 = FUNC_0(VAR_4, VAR_3->pid, VAR_3->tid);
 if (VAR_6 == ((void*)0))
  return;

 if (FUNC_4(VAR_1, VAR_6, VAR_2, VAR_3) &&
     FUNC_4(VAR_1, VAR_5, VAR_2, VAR_3)) {
  return;
 }

 FUNC_5(VAR_3->time, VAR_7, sizeof(VAR_7));
 FUNC_2("%15s [%04d] ", VAR_7, VAR_3->cpu);

 if (VAR_1->show_cpu_visual) {
  u32 VAR_11;
  char VAR_12;

  FUNC_2("  ");
  for (VAR_11 = 0; VAR_11 < VAR_8; ++VAR_11) {
   VAR_12 = (VAR_11 == VAR_3->cpu) ? 'm' : ' ';
   FUNC_2("%c", VAR_12);
  }
  FUNC_2("  ");
 }

 FUNC_2(" %-*s ", VAR_0, FUNC_3(VAR_6));


 FUNC_2("  %9s  %9s  %9s ", "", "", "");

 FUNC_2("migrated: %s", FUNC_3(VAR_5));
 FUNC_2(" cpu %d => %d", VAR_9, VAR_10);

 FUNC_2("\n");
}
