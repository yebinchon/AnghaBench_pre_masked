
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union perf_event {int dummy; } perf_event ;
struct perf_synth_intel_exstop {int ip; scalar_t__ flags; } ;
struct perf_sample {int raw_data; int raw_size; int stream_id; int id; int ip; } ;
struct intel_pt_queue {TYPE_1__* state; struct intel_pt* pt; union perf_event* event_buf; } ;
struct intel_pt {int pwr_events_sample_type; int exstop_id; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_pt*,struct intel_pt_queue*,union perf_event*,struct perf_sample*,int ) ;
 int FUNC_1 (struct intel_pt*,struct intel_pt_queue*,union perf_event*,struct perf_sample*) ;
 scalar_t__ FUNC_2 (struct intel_pt*) ;
 int FUNC_3 (struct perf_synth_intel_exstop*) ;
 int FUNC_4 (struct perf_synth_intel_exstop) ;

__attribute__((used)) static int FUNC_5(struct intel_pt_queue *VAR_1)
{
 struct intel_pt *VAR_2 = VAR_1->pt;
 union perf_event *VAR_3 = VAR_1->event_buf;
 struct perf_sample VAR_4 = { .ip = 0, };
 struct perf_synth_intel_exstop VAR_5;

 if (FUNC_2(VAR_2))
  return 0;

 FUNC_1(VAR_2, VAR_1, VAR_3, &VAR_4);

 VAR_4.id = VAR_1->pt->exstop_id;
 VAR_4.stream_id = VAR_1->pt->exstop_id;

 VAR_5.flags = 0;
 VAR_5.ip = !!(VAR_1->state->flags & VAR_0);

 VAR_4.raw_size = FUNC_4(VAR_5);
 VAR_4.raw_data = FUNC_3(&VAR_5);

 return FUNC_0(VAR_2, VAR_1, VAR_3, &VAR_4,
         VAR_2->pwr_events_sample_type);
}
