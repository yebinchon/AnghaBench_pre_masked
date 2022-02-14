
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct perf_sample {int stream_id; int id; int ip; } ;
struct intel_pt_queue {struct intel_pt* pt; union perf_event* event_buf; } ;
struct intel_pt {int transactions_sample_type; int transactions_id; } ;


 int FUNC_0 (struct intel_pt*,struct intel_pt_queue*,union perf_event*,struct perf_sample*,int ) ;
 int FUNC_1 (struct intel_pt*,struct intel_pt_queue*,union perf_event*,struct perf_sample*) ;
 scalar_t__ FUNC_2 (struct intel_pt*) ;

__attribute__((used)) static int FUNC_3(struct intel_pt_queue *VAR_0)
{
 struct intel_pt *VAR_1 = VAR_0->pt;
 union perf_event *VAR_2 = VAR_0->event_buf;
 struct perf_sample VAR_3 = { .ip = 0, };

 if (FUNC_2(VAR_1))
  return 0;

 FUNC_1(VAR_1, VAR_0, VAR_2, &VAR_3);

 VAR_3.id = VAR_0->pt->transactions_id;
 VAR_3.stream_id = VAR_0->pt->transactions_id;

 return FUNC_0(VAR_1, VAR_0, VAR_2, &VAR_3,
         VAR_1->transactions_sample_type);
}
