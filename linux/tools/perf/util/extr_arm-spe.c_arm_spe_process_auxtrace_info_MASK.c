
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; } ;
struct perf_record_auxtrace_info {int * priv; int type; TYPE_1__ header; } ;
union perf_event {struct perf_record_auxtrace_info auxtrace_info; } ;
typedef int u64 ;
struct TYPE_5__ {int host; } ;
struct perf_session {TYPE_3__* auxtrace; TYPE_2__ machines; } ;
struct TYPE_6__ {int free; int free_events; int flush_events; int process_auxtrace_event; int process_event; } ;
struct arm_spe {TYPE_3__ auxtrace; int pmu_type; int auxtrace_type; int * machine; struct perf_session* session; int queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct arm_spe*) ;
 struct arm_spe* FUNC_3 (int) ;

int FUNC_4(union perf_event *VAR_8,
      struct perf_session *VAR_9)
{
 struct perf_record_auxtrace_info *VAR_10 = &VAR_8->auxtrace_info;
 size_t VAR_11 = sizeof(u64) * VAR_0;
 struct arm_spe *VAR_12;
 int VAR_13;

 if (VAR_10->header.size < sizeof(struct perf_record_auxtrace_info) +
     VAR_11)
  return -VAR_1;

 VAR_12 = FUNC_3(sizeof(struct arm_spe));
 if (!VAR_12)
  return -VAR_2;

 VAR_13 = FUNC_1(&VAR_12->queues);
 if (VAR_13)
  goto err_free;

 VAR_12->session = VAR_9;
 VAR_12->machine = &VAR_9->machines.host;
 VAR_12->auxtrace_type = VAR_10->type;
 VAR_12->pmu_type = VAR_10->priv[VAR_0];

 VAR_12->auxtrace.process_event = VAR_7;
 VAR_12->auxtrace.process_auxtrace_event = VAR_6;
 VAR_12->auxtrace.flush_events = VAR_3;
 VAR_12->auxtrace.free_events = VAR_5;
 VAR_12->auxtrace.free = VAR_4;
 VAR_9->auxtrace = &VAR_12->auxtrace;

 FUNC_0(&VAR_10->priv[0]);

 return 0;

err_free:
 FUNC_2(VAR_12);
 return VAR_13;
}
