
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union perf_event {int dummy; } perf_event ;
struct perf_synth_intel_ptwrite {int ip; int payload; scalar_t__ flags; } ;
struct perf_sample {int raw_data; int raw_size; int stream_id; int id; int ip; } ;
struct intel_pt_queue {TYPE_1__* state; struct intel_pt* pt; union perf_event* event_buf; } ;
struct intel_pt {int ptwrites_sample_type; int ptwrites_id; } ;
struct TYPE_2__ {int flags; int ptw_payload; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct intel_pt*,struct intel_pt_queue*,union perf_event*,struct perf_sample*,int ) ;
 int FUNC_2 (struct intel_pt*,struct intel_pt_queue*,union perf_event*,struct perf_sample*) ;
 scalar_t__ FUNC_3 (struct intel_pt*) ;
 int FUNC_4 (struct perf_synth_intel_ptwrite*) ;
 int FUNC_5 (struct perf_synth_intel_ptwrite) ;

__attribute__((used)) static int FUNC_6(struct intel_pt_queue *VAR_1)
{
 struct intel_pt *VAR_2 = VAR_1->pt;
 union perf_event *VAR_3 = VAR_1->event_buf;
 struct perf_sample VAR_4 = { .ip = 0, };
 struct perf_synth_intel_ptwrite VAR_5;

 if (FUNC_3(VAR_2))
  return 0;

 FUNC_2(VAR_2, VAR_1, VAR_3, &VAR_4);

 VAR_4.id = VAR_1->pt->ptwrites_id;
 VAR_4.stream_id = VAR_1->pt->ptwrites_id;

 VAR_5.flags = 0;
 VAR_5.ip = !!(VAR_1->state->flags & VAR_0);
 VAR_5.payload = FUNC_0(VAR_1->state->ptw_payload);

 VAR_4.raw_size = FUNC_5(VAR_5);
 VAR_4.raw_data = FUNC_4(&VAR_5);

 return FUNC_1(VAR_2, VAR_1, VAR_3, &VAR_4,
         VAR_2->ptwrites_sample_type);
}
