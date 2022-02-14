
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ initial_skip; } ;
struct intel_pt {TYPE_1__ synth_opts; int num_events; } ;



__attribute__((used)) static inline bool FUNC_0(struct intel_pt *VAR_0)
{
 return VAR_0->synth_opts.initial_skip &&
        VAR_0->num_events++ < VAR_0->synth_opts.initial_skip;
}
