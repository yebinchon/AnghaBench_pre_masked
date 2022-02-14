
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int env; } ;
struct perf_session {TYPE_3__* evlist; TYPE_1__ header; } ;
struct perf_sched {int nr_lost_chunks; int nr_lost_events; int nr_events; int tool; int force; } ;
struct perf_data {int force; int mode; int path; } ;
struct evsel_str_handler {char* member_0; int member_1; } ;
struct TYPE_5__ {int * nr_events; int total_lost; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;


 scalar_t__ FUNC_0 (struct perf_session*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct perf_session*) ;
 int VAR_2 ;
 int FUNC_2 (struct perf_session*) ;
 scalar_t__ FUNC_3 (struct perf_session*,char*) ;
 struct perf_session* FUNC_4 (struct perf_data*,int,int *) ;
 int FUNC_5 (struct perf_session*) ;
 scalar_t__ FUNC_6 (struct perf_session*,struct evsel_str_handler const*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct perf_sched *VAR_7)
{
 const struct evsel_str_handler VAR_8[] = {
  { "sched:sched_switch", VAR_5, },
  { "sched:sched_stat_runtime", VAR_4, },
  { "sched:sched_wakeup", VAR_6, },
  { "sched:sched_wakeup_new", VAR_6, },
  { "sched:sched_migrate_task", VAR_3, },
 };
 struct perf_session *VAR_9;
 struct perf_data VAR_10 = {
  .path = VAR_2,
  .mode = VAR_0,
  .force = VAR_7->force,
 };
 int VAR_11 = -1;

 VAR_9 = FUNC_4(&VAR_10, 0, &VAR_7->tool);
 if (FUNC_0(VAR_9)) {
  FUNC_7("Error creating perf session");
  return FUNC_1(VAR_9);
 }

 FUNC_9(&VAR_9->header.env);

 if (FUNC_6(VAR_9, VAR_8))
  goto out_delete;

 if (FUNC_3(VAR_9, "record -R")) {
  int VAR_12 = FUNC_5(VAR_9);
  if (VAR_12) {
   FUNC_8("Failed to process events, error %d", VAR_12);
   goto out_delete;
  }

  VAR_7->nr_events = VAR_9->evlist->stats.nr_events[0];
  VAR_7->nr_lost_events = VAR_9->evlist->stats.total_lost;
  VAR_7->nr_lost_chunks = VAR_9->evlist->stats.nr_events[VAR_1];
 }

 VAR_11 = 0;
out_delete:
 FUNC_2(VAR_9);
 return VAR_11;
}
