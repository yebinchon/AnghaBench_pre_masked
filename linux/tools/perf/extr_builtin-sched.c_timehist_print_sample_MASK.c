
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef int tstr ;
struct thread_runtime {scalar_t__ dt_run; scalar_t__ dt_delay; scalar_t__ dt_preempt; scalar_t__ dt_iowait; scalar_t__ dt_sleep; } ;
struct thread {scalar_t__ tid; } ;
struct perf_sched {scalar_t__ max_cpu; scalar_t__ show_callchain; scalar_t__ show_next; scalar_t__ show_wakeups; scalar_t__ show_state; scalar_t__ show_cpu_visual; } ;
struct perf_sample {int cpu; } ;
struct evsel {int dummy; } ;
struct addr_location {int dummy; } ;
typedef int nstr ;
struct TYPE_2__ {int bt_stop_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 scalar_t__ FUNC_0 (struct evsel*,struct perf_sample*,char*) ;
 char* FUNC_1 (struct evsel*,struct perf_sample*,char*) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct perf_sample*,struct addr_location*,int ,int,int *,int ,int ) ;
 int FUNC_5 (char*,int,char*,char const*,scalar_t__ const) ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_6 (struct thread*,int) ;
 struct thread_runtime* FUNC_7 (struct thread*) ;
 int FUNC_8 (struct thread*) ;
 int FUNC_9 (scalar_t__,char*,int) ;

__attribute__((used)) static void FUNC_10(struct perf_sched *VAR_8,
      struct evsel *VAR_9,
      struct perf_sample *VAR_10,
      struct addr_location *VAR_11,
      struct thread *VAR_12,
      u64 VAR_13, int VAR_14)
{
 struct thread_runtime *VAR_15 = FUNC_7(VAR_12);
 const char *VAR_16 = FUNC_1(VAR_9, VAR_10, "next_comm");
 const u32 VAR_17 = FUNC_0(VAR_9, VAR_10, "next_pid");
 u32 VAR_18 = VAR_8->max_cpu + 1;
 char VAR_19[64];
 char VAR_20[30];
 u64 VAR_21;

 FUNC_9(VAR_13, VAR_19, sizeof(VAR_19));
 FUNC_3("%15s [%04d] ", VAR_19, VAR_10->cpu);

 if (VAR_8->show_cpu_visual) {
  u32 VAR_22;
  char VAR_23;

  FUNC_3(" ");
  for (VAR_22 = 0; VAR_22 < VAR_18; ++VAR_22) {

   if (VAR_22 == VAR_10->cpu)
    VAR_23 = (VAR_12->tid == 0) ? 'i' : 's';
   else
    VAR_23 = ' ';
   FUNC_3("%c", VAR_23);
  }
  FUNC_3(" ");
 }

 FUNC_3(" %-*s ", VAR_5, FUNC_8(VAR_12));

 VAR_21 = VAR_15->dt_sleep + VAR_15->dt_iowait + VAR_15->dt_preempt;
 FUNC_2(VAR_21, 6);

 FUNC_2(VAR_15->dt_delay, 6);
 FUNC_2(VAR_15->dt_run, 6);

 if (VAR_8->show_state)
  FUNC_3(" %5c ", FUNC_6(VAR_12, VAR_14));

 if (VAR_8->show_next) {
  FUNC_5(VAR_20, sizeof(VAR_20), "next: %s[%d]", VAR_16, VAR_17);
  FUNC_3(" %-*s", VAR_5, VAR_20);
 }

 if (VAR_8->show_wakeups && !VAR_8->show_next)
  FUNC_3("  %-*s", VAR_5, "");

 if (VAR_12->tid == 0)
  goto out;

 if (VAR_8->show_callchain)
  FUNC_3("  ");

 FUNC_4(VAR_10, VAR_11, 0,
       VAR_3 | VAR_1 |
       VAR_0 |
       VAR_2,
       &VAR_4, VAR_7.bt_stop_list, VAR_6);

out:
 FUNC_3("\n");
}
