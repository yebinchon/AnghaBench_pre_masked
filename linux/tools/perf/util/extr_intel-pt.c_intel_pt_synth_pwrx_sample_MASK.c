
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union perf_event {int dummy; } perf_event ;
struct perf_synth_intel_pwrx {int payload; scalar_t__ reserved; } ;
struct perf_sample {int raw_data; int raw_size; int stream_id; int id; int ip; } ;
struct intel_pt_queue {TYPE_1__* state; struct intel_pt* pt; union perf_event* event_buf; } ;
struct intel_pt {int pwr_events_sample_type; int pwrx_id; } ;
struct TYPE_2__ {int pwrx_payload; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct intel_pt*,struct intel_pt_queue*,union perf_event*,struct perf_sample*,int ) ;
 int FUNC_2 (struct intel_pt*,struct intel_pt_queue*,union perf_event*,struct perf_sample*) ;
 scalar_t__ FUNC_3 (struct intel_pt*) ;
 int FUNC_4 (struct perf_synth_intel_pwrx*) ;
 int FUNC_5 (struct perf_synth_intel_pwrx) ;

__attribute__((used)) static int FUNC_6(struct intel_pt_queue *VAR_0)
{
 struct intel_pt *VAR_1 = VAR_0->pt;
 union perf_event *VAR_2 = VAR_0->event_buf;
 struct perf_sample VAR_3 = { .ip = 0, };
 struct perf_synth_intel_pwrx VAR_4;

 if (FUNC_3(VAR_1))
  return 0;

 FUNC_2(VAR_1, VAR_0, VAR_2, &VAR_3);

 VAR_3.id = VAR_0->pt->pwrx_id;
 VAR_3.stream_id = VAR_0->pt->pwrx_id;

 VAR_4.reserved = 0;
 VAR_4.payload = FUNC_0(VAR_0->state->pwrx_payload);

 VAR_3.raw_size = FUNC_5(VAR_4);
 VAR_3.raw_data = FUNC_4(&VAR_4);

 return FUNC_1(VAR_1, VAR_0, VAR_2, &VAR_3,
         VAR_1->pwr_events_sample_type);
}
