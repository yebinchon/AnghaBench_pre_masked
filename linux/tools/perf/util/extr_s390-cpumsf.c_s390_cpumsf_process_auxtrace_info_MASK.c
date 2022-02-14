
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int size; } ;
struct perf_record_auxtrace_info {int type; TYPE_1__ header; } ;
union perf_event {struct perf_record_auxtrace_info auxtrace_info; } ;
struct TYPE_16__ {scalar_t__ populated; } ;
struct TYPE_14__ {int free; int free_events; int flush_events; int process_auxtrace_event; int process_event; } ;
struct s390_cpumsf {int data_queued; int logdir; TYPE_7__ queues; TYPE_5__ auxtrace; int machine_type; int pmu_type; int auxtrace_type; int * machine; struct perf_session* session; scalar_t__ use_logfile; } ;
struct TYPE_11__ {int host; } ;
struct perf_session {TYPE_5__* auxtrace; TYPE_4__* evlist; TYPE_2__ machines; TYPE_6__* itrace_synth_opts; } ;
struct TYPE_15__ {scalar_t__ log; } ;
struct TYPE_13__ {TYPE_3__* env; } ;
struct TYPE_12__ {int cpuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*,struct perf_session*) ;
 int FUNC_3 (TYPE_6__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct s390_cpumsf*) ;
 int FUNC_5 (int ,struct s390_cpumsf*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 struct s390_cpumsf* FUNC_7 (int) ;
 int FUNC_8 (int *) ;

int FUNC_9(union perf_event *VAR_10,
          struct perf_session *VAR_11)
{
 struct perf_record_auxtrace_info *VAR_12 = &VAR_10->auxtrace_info;
 struct s390_cpumsf *VAR_13;
 int VAR_14;

 if (VAR_12->header.size < sizeof(struct perf_record_auxtrace_info))
  return -VAR_0;

 VAR_13 = FUNC_7(sizeof(struct s390_cpumsf));
 if (VAR_13 == ((void*)0))
  return -VAR_1;

 if (!FUNC_3(VAR_11->itrace_synth_opts)) {
  VAR_14 = -VAR_0;
  goto err_free;
 }
 VAR_13->use_logfile = VAR_11->itrace_synth_opts->log;
 if (VAR_13->use_logfile)
  FUNC_5(VAR_4, VAR_13);

 VAR_14 = FUNC_1(&VAR_13->queues);
 if (VAR_14)
  goto err_free;

 VAR_13->session = VAR_11;
 VAR_13->machine = &VAR_11->machines.host;
 VAR_13->auxtrace_type = VAR_12->type;
 VAR_13->pmu_type = VAR_2;
 VAR_13->machine_type = FUNC_6(VAR_11->evlist->env->cpuid);

 VAR_13->auxtrace.process_event = VAR_9;
 VAR_13->auxtrace.process_auxtrace_event = VAR_8;
 VAR_13->auxtrace.flush_events = VAR_5;
 VAR_13->auxtrace.free_events = VAR_7;
 VAR_13->auxtrace.free = VAR_6;
 VAR_11->auxtrace = &VAR_13->auxtrace;

 if (VAR_3)
  return 0;

 VAR_14 = FUNC_2(&VAR_13->queues, VAR_11);
 if (VAR_14)
  goto err_free_queues;

 if (VAR_13->queues.populated)
  VAR_13->data_queued = 1;

 return 0;

err_free_queues:
 FUNC_0(&VAR_13->queues);
 VAR_11->auxtrace = ((void*)0);
err_free:
 FUNC_8(&VAR_13->logdir);
 FUNC_4(VAR_13);
 return VAR_14;
}
