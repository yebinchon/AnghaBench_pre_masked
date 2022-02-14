
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct perf_sample {scalar_t__ flags; int ip; } ;
struct intel_pt_queue {int dummy; } ;
struct intel_pt {int dummy; } ;


 int FUNC_0 (struct intel_pt*,struct intel_pt_queue*,union perf_event*,struct perf_sample*) ;

__attribute__((used)) static void FUNC_1(struct intel_pt *VAR_0,
       struct intel_pt_queue *VAR_1,
       union perf_event *VAR_2,
       struct perf_sample *VAR_3)
{
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);





 if (!VAR_3->ip)
  VAR_3->flags = 0;
}
