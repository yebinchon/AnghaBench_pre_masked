
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int size; } ;
struct perf_record_auxtrace_info {int * priv; int type; TYPE_1__ header; } ;
union perf_event {struct perf_record_auxtrace_info auxtrace_info; } ;
typedef int u64 ;
struct TYPE_10__ {int host; } ;
struct perf_session {TYPE_4__* auxtrace; TYPE_5__* itrace_synth_opts; TYPE_2__ machines; } ;
struct TYPE_14__ {scalar_t__ populated; } ;
struct TYPE_13__ {scalar_t__ returns; scalar_t__ calls; int thread_stack; int default_no_sample; scalar_t__ set; } ;
struct TYPE_12__ {int free; int free_events; int flush_events; int process_auxtrace_event; int process_event; } ;
struct TYPE_11__ {int time_zero; int time_mult; int time_shift; } ;
struct intel_bts {int sampling_mode; int branches_filter; int data_queued; TYPE_6__ queues; TYPE_5__ synth_opts; TYPE_4__ auxtrace; int snapshot_mode; int cap_user_time_zero; TYPE_3__ tc; int pmu_type; int auxtrace_type; int * machine; struct perf_session* session; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*,struct perf_session*) ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (struct intel_bts*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int *,size_t,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (struct intel_bts*,struct perf_session*) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 struct intel_bts* FUNC_7 (int) ;

int FUNC_8(union perf_event *VAR_19,
        struct perf_session *VAR_20)
{
 struct perf_record_auxtrace_info *VAR_21 = &VAR_19->auxtrace_info;
 size_t VAR_22 = sizeof(u64) * VAR_4;
 struct intel_bts *VAR_23;
 int VAR_24;

 if (VAR_21->header.size < sizeof(struct perf_record_auxtrace_info) +
     VAR_22)
  return -VAR_0;

 VAR_23 = FUNC_7(sizeof(struct intel_bts));
 if (!VAR_23)
  return -VAR_1;

 VAR_24 = FUNC_1(&VAR_23->queues);
 if (VAR_24)
  goto err_free;

 VAR_23->session = VAR_20;
 VAR_23->machine = &VAR_20->machines.host;
 VAR_23->auxtrace_type = VAR_21->type;
 VAR_23->pmu_type = VAR_21->priv[VAR_3];
 VAR_23->tc.time_shift = VAR_21->priv[VAR_6];
 VAR_23->tc.time_mult = VAR_21->priv[VAR_5];
 VAR_23->tc.time_zero = VAR_21->priv[VAR_7];
 VAR_23->cap_user_time_zero =
   VAR_21->priv[VAR_2];
 VAR_23->snapshot_mode = VAR_21->priv[VAR_4];

 VAR_23->sampling_mode = 0;

 VAR_23->auxtrace.process_event = VAR_18;
 VAR_23->auxtrace.process_auxtrace_event = VAR_17;
 VAR_23->auxtrace.flush_events = VAR_14;
 VAR_23->auxtrace.free_events = VAR_16;
 VAR_23->auxtrace.free = VAR_15;
 VAR_20->auxtrace = &VAR_23->auxtrace;

 FUNC_4(&VAR_21->priv[0], VAR_3,
        VAR_4);

 if (VAR_13)
  return 0;

 if (VAR_20->itrace_synth_opts->set) {
  VAR_23->synth_opts = *VAR_20->itrace_synth_opts;
 } else {
  FUNC_6(&VAR_23->synth_opts,
    VAR_20->itrace_synth_opts->default_no_sample);
  VAR_23->synth_opts.thread_stack =
    VAR_20->itrace_synth_opts->thread_stack;
 }

 if (VAR_23->synth_opts.calls)
  VAR_23->branches_filter |= VAR_9 | VAR_8 |
     VAR_12;
 if (VAR_23->synth_opts.returns)
  VAR_23->branches_filter |= VAR_10 |
     VAR_11;

 VAR_24 = FUNC_5(VAR_23, VAR_20);
 if (VAR_24)
  goto err_free_queues;

 VAR_24 = FUNC_2(&VAR_23->queues, VAR_20);
 if (VAR_24)
  goto err_free_queues;

 if (VAR_23->queues.populated)
  VAR_23->data_queued = 1;

 return 0;

err_free_queues:
 FUNC_0(&VAR_23->queues);
 VAR_20->auxtrace = ((void*)0);
err_free:
 FUNC_3(VAR_23);
 return VAR_24;
}
