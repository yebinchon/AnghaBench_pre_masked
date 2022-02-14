
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef scalar_t__ u64 ;
struct sched_param {scalar_t__ sched_priority; } ;
struct record_opts {scalar_t__ overwrite; int target; scalar_t__ record_namespaces; } ;
struct TYPE_19__ {int cond; } ;
struct TYPE_16__ {int namespace_events; } ;
struct TYPE_15__ {int objdump_path; } ;
struct perf_top {int nr_threads_synthesize; scalar_t__ samples; TYPE_6__ qe; TYPE_11__* evlist; scalar_t__ realtime_prio; TYPE_7__* session; struct record_opts record_opts; TYPE_3__ tool; TYPE_2__ annotation_opts; } ;
typedef int pthread_t ;
typedef int errbuf ;
struct TYPE_21__ {scalar_t__ socket; } ;
struct TYPE_17__ {int host; } ;
struct TYPE_14__ {int env; } ;
struct TYPE_20__ {TYPE_11__* evlist; TYPE_4__ machines; TYPE_1__ header; } ;
struct TYPE_18__ {int threads; } ;
struct TYPE_13__ {TYPE_5__ core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (TYPE_11__*,int) ;
 int FUNC_3 (struct perf_top*) ;
 int FUNC_4 (int *,int *,int ,int,int) ;
 int VAR_6 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int VAR_7 ;
 int FUNC_7 (TYPE_7__*,int ,int *,struct record_opts*) ;
 TYPE_9__ VAR_8 ;
 scalar_t__ FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct perf_top*) ;
 int FUNC_13 (struct perf_top*) ;
 int FUNC_14 (struct perf_top*) ;
 int FUNC_15 (char*) ;
 int VAR_9 ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *,int *,int ,struct perf_top*) ;
 int FUNC_18 (int ,int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_19 (int ,int ,struct sched_param*) ;
 char* FUNC_20 (int,char*,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (char*,...) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int FUNC_23(struct perf_top *VAR_12)
{
 struct record_opts *VAR_13 = &VAR_12->record_opts;
 pthread_t VAR_14, VAR_15;
 int VAR_16;

 if (!VAR_12->annotation_opts.objdump_path) {
  VAR_16 = FUNC_5(&VAR_12->session->header.env,
            &VAR_12->annotation_opts.objdump_path);
  if (VAR_16)
   return VAR_16;
 }

 VAR_16 = FUNC_0(&VAR_2);
 if (VAR_16)
  return VAR_16;

 if (FUNC_8(VAR_12->session) < 0)
  return VAR_16;

 if (VAR_12->nr_threads_synthesize > 1)
  FUNC_10();

 FUNC_3(VAR_12);

 if (VAR_13->record_namespaces)
  VAR_12->tool.namespace_events = 1;

 VAR_16 = FUNC_7(VAR_12->session, VAR_7,
      &VAR_12->session->machines.host,
      &VAR_12->record_opts);
 if (VAR_16 < 0)
  FUNC_15("Couldn't synthesize BPF events: Pre-existing BPF programs won't have symbols resolved.\n");

 FUNC_4(&VAR_12->session->machines.host, &VAR_13->target,
        VAR_12->evlist->core.threads, 0,
        VAR_12->nr_threads_synthesize);

 if (VAR_12->nr_threads_synthesize > 1)
  FUNC_11();

 if (VAR_8.socket) {
  VAR_16 = FUNC_6(&VAR_6);
  if (VAR_16 < 0) {
   char VAR_17[VAR_0];
   const char *VAR_18 = FUNC_20(-VAR_16, VAR_17, sizeof(VAR_17));

   FUNC_22("Could not read the CPU topology map: %s\n", VAR_18);
   return VAR_16;
  }
 }

 VAR_16 = FUNC_14(VAR_12);
 if (VAR_16)
  return VAR_16;

 VAR_12->session->evlist = VAR_12->evlist;
 FUNC_9(VAR_12->session);
        if (!FUNC_21(&VAR_13->target))
  FUNC_1(VAR_12->evlist);

 VAR_16 = -1;
 if (FUNC_17(&VAR_15, ((void*)0), VAR_9, VAR_12)) {
  FUNC_22("Could not create process thread.\n");
  return VAR_16;
 }

 if (FUNC_17(&VAR_14, ((void*)0), (VAR_11 > 0 ? VAR_4 :
           VAR_3), VAR_12)) {
  FUNC_22("Could not create display thread.\n");
  goto out_join_thread;
 }

 if (VAR_12->realtime_prio) {
  struct sched_param VAR_19;

  VAR_19.sched_priority = VAR_12->realtime_prio;
  if (FUNC_19(0, VAR_1, &VAR_19)) {
   FUNC_22("Could not set realtime priority.\n");
   goto out_join;
  }
 }


 FUNC_2(VAR_12->evlist, 100);

 FUNC_12(VAR_12);

 while (!VAR_5) {
  u64 VAR_20 = VAR_12->samples;

  FUNC_12(VAR_12);

  if (VAR_13->overwrite || (VAR_20 == VAR_12->samples))
   VAR_16 = FUNC_2(VAR_12->evlist, 100);

  if (VAR_10) {
   FUNC_13(VAR_12);
   VAR_10 = 0;
  }
 }

 VAR_16 = 0;
out_join:
 FUNC_18(VAR_14, ((void*)0));
out_join_thread:
 FUNC_16(&VAR_12->qe.cond);
 FUNC_18(VAR_15, ((void*)0));
 return VAR_16;
}
