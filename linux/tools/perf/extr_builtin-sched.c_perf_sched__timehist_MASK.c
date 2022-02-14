
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int nr_cpus_online; } ;
struct TYPE_6__ {TYPE_4__ env; } ;
struct perf_session {TYPE_1__ header; struct evlist* evlist; } ;
struct TYPE_10__ {int ordered_events; int ordering_requires_timestamps; int build_id; int tracing_data; int attr; int lost; int fork; int exit; int comm; int mmap; int sample; } ;
struct perf_sched {int max_cpu; scalar_t__ summary; int nr_lost_chunks; int nr_lost_events; int nr_events; scalar_t__ summary_only; scalar_t__ show_migrations; int time_str; int ptime; TYPE_5__ tool; int show_callchain; int force; } ;
struct perf_data {int force; int mode; int path; } ;
struct evsel_str_handler {char* member_0; int member_1; } ;
struct TYPE_7__ {int * nr_events; int total_lost; } ;
struct evlist {TYPE_2__ stats; } ;
struct TYPE_8__ {int use_callchain; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct perf_session*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct perf_session*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct evlist*,char*) ;
 int FUNC_5 (struct perf_session*) ;
 struct perf_session* FUNC_6 (struct perf_data*,int,TYPE_5__*) ;
 int FUNC_7 (struct perf_session*) ;
 scalar_t__ FUNC_8 (struct perf_session*,struct evsel_str_handler const*) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int VAR_11 ;
 int FUNC_10 (char*,...) ;
 int VAR_12 ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_4__*) ;
 TYPE_3__ VAR_13 ;
 scalar_t__ FUNC_13 (struct perf_sched*,struct evlist*) ;
 int FUNC_14 (struct perf_sched*) ;
 int VAR_14 ;
 int FUNC_15 (struct perf_sched*,struct perf_session*) ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_16(struct perf_sched *VAR_17)
{
 const struct evsel_str_handler VAR_18[] = {
  { "sched:sched_switch", VAR_15, },
  { "sched:sched_wakeup", VAR_16, },
  { "sched:sched_wakeup_new", VAR_16, },
 };
 const struct evsel_str_handler VAR_19[] = {
  { "sched:sched_migrate_task", VAR_14, },
 };
 struct perf_data VAR_20 = {
  .path = VAR_3,
  .mode = VAR_1,
  .force = VAR_17->force,
 };

 struct perf_session *VAR_21;
 struct evlist *VAR_22;
 int VAR_23 = -1;




 VAR_17->tool.sample = VAR_11;
 VAR_17->tool.mmap = VAR_9;
 VAR_17->tool.comm = VAR_6;
 VAR_17->tool.exit = VAR_7;
 VAR_17->tool.fork = VAR_8;
 VAR_17->tool.lost = VAR_12;
 VAR_17->tool.attr = VAR_4;
 VAR_17->tool.tracing_data = VAR_10;
 VAR_17->tool.build_id = VAR_5;

 VAR_17->tool.ordered_events = 1;
 VAR_17->tool.ordering_requires_timestamps = 1;

 VAR_13.use_callchain = VAR_17->show_callchain;

 VAR_21 = FUNC_6(&VAR_20, 0, &VAR_17->tool);
 if (FUNC_0(VAR_21))
  return FUNC_1(VAR_21);

 VAR_22 = VAR_21->evlist;

 FUNC_12(&VAR_21->header.env);

 if (FUNC_9(&VAR_17->ptime, VAR_17->time_str) != 0) {
  FUNC_10("Invalid time string\n");
  return -VAR_0;
 }

 if (FUNC_13(VAR_17, VAR_22) != 0)
  goto out;

 FUNC_11();


 if (FUNC_8(VAR_21, VAR_18))
  goto out;


 if (!FUNC_4(VAR_21->evlist,
        "sched:sched_switch")) {
  FUNC_10("No sched_switch events found. Have you run 'perf sched record'?\n");
  goto out;
 }

 if (VAR_17->show_migrations &&
     FUNC_8(VAR_21, VAR_19))
  goto out;


 VAR_17->max_cpu = VAR_21->header.env.nr_cpus_online;
 if (VAR_17->max_cpu == 0)
  VAR_17->max_cpu = 4;
 if (FUNC_3(VAR_17->max_cpu))
  goto out;


 if (VAR_17->summary_only)
  VAR_17->summary = VAR_17->summary_only;

 if (!VAR_17->summary_only)
  FUNC_14(VAR_17);

 VAR_23 = FUNC_7(VAR_21);
 if (VAR_23) {
  FUNC_10("Failed to process events, error %d", VAR_23);
  goto out;
 }

 VAR_17->nr_events = VAR_22->stats.nr_events[0];
 VAR_17->nr_lost_events = VAR_22->stats.total_lost;
 VAR_17->nr_lost_chunks = VAR_22->stats.nr_events[VAR_2];

 if (VAR_17->summary)
  FUNC_15(VAR_17, VAR_21);

out:
 FUNC_2();
 FUNC_5(VAR_21);

 return VAR_23;
}
