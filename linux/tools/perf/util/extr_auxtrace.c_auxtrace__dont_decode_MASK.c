
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_session {TYPE_1__* itrace_synth_opts; } ;
struct TYPE_2__ {scalar_t__ dont_decode; } ;



__attribute__((used)) static bool FUNC_0(struct perf_session *VAR_0)
{
 return !VAR_0->itrace_synth_opts ||
        VAR_0->itrace_synth_opts->dont_decode;
}
