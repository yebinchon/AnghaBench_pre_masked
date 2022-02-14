
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union perf_event {int dummy; } perf_event ;
typedef int u64 ;
struct perf_sample {int dummy; } ;
struct TYPE_2__ {int inject; } ;
struct intel_pt {TYPE_1__ synth_opts; } ;


 int FUNC_0 (union perf_event*,struct perf_sample*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct intel_pt *VAR_0,
          union perf_event *VAR_1,
          struct perf_sample *VAR_2, u64 VAR_3)
{
 if (!VAR_0->synth_opts.inject)
  return 0;

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
