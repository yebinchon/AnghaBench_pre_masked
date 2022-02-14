
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int misc; } ;
struct TYPE_6__ {TYPE_2__ header; } ;
union perf_event {TYPE_3__ sample; } ;
struct perf_sample {int period; int cpumode; int flags; int addr; int ip; int time; } ;
struct intel_pt_queue {int flags; TYPE_1__* state; int timestamp; } ;
struct intel_pt {int tc; int timeless_decoding; } ;
struct TYPE_4__ {int to_ip; int from_ip; } ;


 int FUNC_0 (struct intel_pt*,int ) ;
 int FUNC_1 (struct intel_pt_queue*,union perf_event*,struct perf_sample*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct intel_pt *VAR_0,
       struct intel_pt_queue *VAR_1,
       union perf_event *VAR_2,
       struct perf_sample *VAR_3)
{
 FUNC_1(VAR_1, VAR_2, VAR_3);

 if (!VAR_0->timeless_decoding)
  VAR_3->time = FUNC_2(VAR_1->timestamp, &VAR_0->tc);

 VAR_3->ip = VAR_1->state->from_ip;
 VAR_3->cpumode = FUNC_0(VAR_0, VAR_3->ip);
 VAR_3->addr = VAR_1->state->to_ip;
 VAR_3->period = 1;
 VAR_3->flags = VAR_1->flags;

 VAR_2->sample.header.misc = VAR_3->cpumode;
}
