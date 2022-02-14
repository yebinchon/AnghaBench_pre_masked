
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union perf_event {int dummy; } perf_event ;
typedef int u64 ;
struct perf_sample {int dummy; } ;
struct intel_pt_queue {int dummy; } ;
struct TYPE_2__ {scalar_t__ last_branch; } ;
struct intel_pt {TYPE_1__ synth_opts; } ;


 int FUNC_0 (struct intel_pt*,union perf_event*,struct perf_sample*,int ) ;
 int FUNC_1 (struct intel_pt_queue*) ;

__attribute__((used)) static inline int FUNC_2(struct intel_pt *VAR_0,
            struct intel_pt_queue *VAR_1,
            union perf_event *VAR_2,
            struct perf_sample *VAR_3,
            u64 VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4);

 if (VAR_0->synth_opts.last_branch)
  FUNC_1(VAR_1);

 return VAR_5;
}
