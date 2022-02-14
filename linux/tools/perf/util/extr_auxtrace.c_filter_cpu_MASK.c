
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_session {TYPE_1__* itrace_synth_opts; } ;
struct TYPE_2__ {unsigned long* cpu_bitmap; } ;


 int FUNC_0 (int,unsigned long*) ;

__attribute__((used)) static bool FUNC_1(struct perf_session *VAR_0, int VAR_1)
{
 unsigned long *VAR_2 = VAR_0->itrace_synth_opts->cpu_bitmap;

 return VAR_2 && VAR_1 != -1 && !FUNC_0(VAR_1, VAR_2);
}
