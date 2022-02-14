
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct switch_tracking {int* tids; int cycles_before_comm_1; int cycles_between_comm_2_and_comm_3; int cycles_after_comm_4; scalar_t__* comm_seen; struct evsel* cycles_evsel; struct evsel* switch_evsel; } ;
struct perf_sample {int cpu; int id; } ;
struct evsel {int dummy; } ;
struct evlist {int dummy; } ;
typedef int pid_t ;


 int FUNC_0 (struct switch_tracking*,int) ;
 struct evsel* FUNC_1 (struct evlist*,int ) ;
 scalar_t__ FUNC_2 (struct evlist*,union perf_event*,struct perf_sample*) ;
 int FUNC_3 (struct evsel*,struct perf_sample*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(struct evlist *VAR_0,
    union perf_event *VAR_1,
    struct switch_tracking *VAR_2)
{
 struct perf_sample VAR_3;
 struct evsel *VAR_4;
 pid_t VAR_5, VAR_6;
 int VAR_7, VAR_8;

 if (FUNC_2(VAR_0, VAR_1, &VAR_3)) {
  FUNC_4("perf_evlist__parse_sample failed\n");
  return -1;
 }

 VAR_4 = FUNC_1(VAR_0, VAR_3.id);
 if (VAR_4 == VAR_2->switch_evsel) {
  VAR_5 = FUNC_3(VAR_4, &VAR_3, "next_pid");
  VAR_6 = FUNC_3(VAR_4, &VAR_3, "prev_pid");
  VAR_7 = VAR_3.cpu;
  FUNC_5("sched_switch: cpu: %d prev_tid %d next_tid %d\n",
     VAR_7, VAR_6, VAR_5);
  VAR_8 = FUNC_0(VAR_2, VAR_7);
  if (VAR_8)
   return VAR_8;




  if (VAR_2->tids[VAR_7] != -1 &&
      VAR_2->tids[VAR_7] != VAR_6) {
   FUNC_4("Missing sched_switch events\n");
   return -1;
  }
  VAR_2->tids[VAR_7] = VAR_5;
 }

 if (VAR_4 == VAR_2->cycles_evsel) {
  FUNC_5("cycles event\n");
  if (!VAR_2->comm_seen[0])
   VAR_2->cycles_before_comm_1 = 1;
  if (VAR_2->comm_seen[1] &&
      !VAR_2->comm_seen[2])
   VAR_2->cycles_between_comm_2_and_comm_3 = 1;
  if (VAR_2->comm_seen[3])
   VAR_2->cycles_after_comm_4 = 1;
 }

 return 0;
}
