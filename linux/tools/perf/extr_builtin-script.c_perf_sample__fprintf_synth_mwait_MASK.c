
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_synth_intel_mwait {int hints; int extensions; } ;
struct perf_sample {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int,int) ;
 scalar_t__ FUNC_1 (struct perf_sample*,struct perf_synth_intel_mwait) ;
 int FUNC_2 (int,int *) ;
 struct perf_synth_intel_mwait* FUNC_3 (struct perf_sample*) ;

__attribute__((used)) static int FUNC_4(struct perf_sample *VAR_0, FILE *VAR_1)
{
 struct perf_synth_intel_mwait *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 if (FUNC_1(VAR_0, *VAR_2))
  return 0;

 VAR_3 = FUNC_0(VAR_1, " hints: %#x extensions: %#x ",
        VAR_2->hints, VAR_2->extensions);
 return VAR_3 + FUNC_2(VAR_3, VAR_1);
}
