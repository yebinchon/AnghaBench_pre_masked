
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_synth_intel_pwrx {int deepest_cstate; int last_cstate; int wake_reason; } ;
struct perf_sample {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int,int,int) ;
 scalar_t__ FUNC_1 (struct perf_sample*,struct perf_synth_intel_pwrx) ;
 int FUNC_2 (int,int *) ;
 struct perf_synth_intel_pwrx* FUNC_3 (struct perf_sample*) ;

__attribute__((used)) static int FUNC_4(struct perf_sample *VAR_0, FILE *VAR_1)
{
 struct perf_synth_intel_pwrx *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 if (FUNC_1(VAR_0, *VAR_2))
  return 0;

 VAR_3 = FUNC_0(VAR_1, " deepest cstate: %u last cstate: %u wake reason: %#x ",
       VAR_2->deepest_cstate, VAR_2->last_cstate,
       VAR_2->wake_reason);
 return VAR_3 + FUNC_2(VAR_3, VAR_1);
}
