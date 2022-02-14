
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int size; int misc; int type; } ;
struct TYPE_8__ {TYPE_2__ header; } ;
union perf_event {TYPE_3__ sample; } ;
typedef void* u64 ;
struct perf_sample {int branch_stack; int cpumode; int flags; int cpu; void* period; int stream_id; int id; int tid; int pid; void* ip; } ;
struct perf_event_header {int dummy; } ;
struct cs_etm_traceid_queue {int last_branch; TYPE_5__* packet; int trace_chan_id; TYPE_1__* prev_packet; int tid; int pid; union perf_event* event_buf; } ;
struct cs_etm_queue {struct cs_etm_auxtrace* etm; } ;
struct TYPE_9__ {scalar_t__ last_branch; scalar_t__ inject; } ;
struct cs_etm_auxtrace {TYPE_4__ synth_opts; int session; int instructions_sample_type; int instructions_id; } ;
struct TYPE_10__ {int cpu; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct cs_etm_queue*,int ,TYPE_5__*,struct perf_sample*) ;
 int FUNC_1 (struct cs_etm_queue*,struct cs_etm_traceid_queue*) ;
 int FUNC_2 (struct cs_etm_queue*,void*) ;
 int FUNC_3 (union perf_event*,struct perf_sample*,int ) ;
 int FUNC_4 (struct cs_etm_traceid_queue*) ;
 int FUNC_5 (int ,union perf_event*,struct perf_sample*) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int FUNC_7(struct cs_etm_queue *VAR_1,
         struct cs_etm_traceid_queue *VAR_2,
         u64 VAR_3, u64 VAR_4)
{
 int VAR_5 = 0;
 struct cs_etm_auxtrace *VAR_6 = VAR_1->etm;
 union perf_event *VAR_7 = VAR_2->event_buf;
 struct perf_sample VAR_8 = {.ip = 0,};

 VAR_7->sample.header.type = VAR_0;
 VAR_7->sample.header.misc = FUNC_2(VAR_1, VAR_3);
 VAR_7->sample.header.size = sizeof(struct perf_event_header);

 VAR_8.ip = VAR_3;
 VAR_8.pid = VAR_2->pid;
 VAR_8.tid = VAR_2->tid;
 VAR_8.id = VAR_1->etm->instructions_id;
 VAR_8.stream_id = VAR_1->etm->instructions_id;
 VAR_8.period = VAR_4;
 VAR_8.cpu = VAR_2->packet->cpu;
 VAR_8.flags = VAR_2->prev_packet->flags;
 VAR_8.cpumode = VAR_7->sample.header.misc;

 FUNC_0(VAR_1, VAR_2->trace_chan_id, VAR_2->packet, &VAR_8);

 if (VAR_6->synth_opts.last_branch) {
  FUNC_1(VAR_1, VAR_2);
  VAR_8.branch_stack = VAR_2->last_branch;
 }

 if (VAR_6->synth_opts.inject) {
  VAR_5 = FUNC_3(VAR_7, &VAR_8,
        VAR_6->instructions_sample_type);
  if (VAR_5)
   return VAR_5;
 }

 VAR_5 = FUNC_5(VAR_6->session, VAR_7, &VAR_8);

 if (VAR_5)
  FUNC_6(
   "CS ETM Trace: failed to deliver instruction event, error %d\n",
   VAR_5);

 if (VAR_6->synth_opts.last_branch)
  FUNC_4(VAR_2);

 return VAR_5;
}
