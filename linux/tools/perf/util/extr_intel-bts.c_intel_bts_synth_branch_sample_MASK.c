
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int size; int misc; int type; } ;
struct TYPE_8__ {TYPE_3__ header; } ;
union perf_event {TYPE_4__ sample; } ;
struct perf_sample {int period; int cpumode; int insn; int insn_len; int flags; int cpu; int stream_id; int id; void* addr; int tid; int pid; void* ip; } ;
struct perf_event_header {int dummy; } ;
struct TYPE_5__ {int buf; int length; } ;
struct intel_bts_queue {TYPE_1__ intel_pt_insn; int sample_flags; int cpu; struct intel_bts* bts; int tid; int pid; } ;
struct TYPE_6__ {scalar_t__ initial_skip; scalar_t__ inject; } ;
struct intel_bts {int branches_event_size; int session; int branches_sample_type; TYPE_2__ synth_opts; int branches_id; int num_events; } ;
struct branch {int to; int from; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_bts*,void*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (union perf_event*,int ,int ,struct perf_sample*) ;
 int FUNC_4 (int ,union perf_event*,struct perf_sample*) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int FUNC_6(struct intel_bts_queue *VAR_2,
      struct branch *VAR_3)
{
 int VAR_4;
 struct intel_bts *VAR_5 = VAR_2->bts;
 union perf_event VAR_6;
 struct perf_sample VAR_7 = { .ip = 0, };

 if (VAR_5->synth_opts.initial_skip &&
     VAR_5->num_events++ <= VAR_5->synth_opts.initial_skip)
  return 0;

 VAR_7.ip = FUNC_1(VAR_3->from);
 VAR_7.cpumode = FUNC_0(VAR_5, VAR_7.ip);
 VAR_7.pid = VAR_2->pid;
 VAR_7.tid = VAR_2->tid;
 VAR_7.addr = FUNC_1(VAR_3->to);
 VAR_7.id = VAR_2->bts->branches_id;
 VAR_7.stream_id = VAR_2->bts->branches_id;
 VAR_7.period = 1;
 VAR_7.cpu = VAR_2->cpu;
 VAR_7.flags = VAR_2->sample_flags;
 VAR_7.insn_len = VAR_2->intel_pt_insn.length;
 FUNC_2(VAR_7.insn, VAR_2->intel_pt_insn.buf, VAR_0);

 VAR_6.sample.header.type = VAR_1;
 VAR_6.sample.header.misc = VAR_7.cpumode;
 VAR_6.sample.header.size = sizeof(struct perf_event_header);

 if (VAR_5->synth_opts.inject) {
  VAR_6.sample.header.size = VAR_5->branches_event_size;
  VAR_4 = FUNC_3(&VAR_6,
          VAR_5->branches_sample_type,
          0, &VAR_7);
  if (VAR_4)
   return VAR_4;
 }

 VAR_4 = FUNC_4(VAR_5->session, &VAR_6, &VAR_7);
 if (VAR_4)
  FUNC_5("Intel BTS: failed to deliver branch event, error %d\n",
         VAR_4);

 return VAR_4;
}
