
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itrace_synth_opts {scalar_t__ last_branch; scalar_t__ thread_stack; scalar_t__ callchain; scalar_t__ returns; scalar_t__ calls; scalar_t__ dont_decode; scalar_t__ errors; scalar_t__ pwr_events; scalar_t__ ptwrites; scalar_t__ transactions; scalar_t__ branches; scalar_t__ instructions; scalar_t__ inject; int set; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static bool FUNC_1(struct itrace_synth_opts *VAR_0)
{
 bool VAR_1 = 0;

 if (!VAR_0 || !VAR_0->set)
  return 1;
 VAR_1 = VAR_0->inject || VAR_0->instructions || VAR_0->branches ||
  VAR_0->transactions || VAR_0->ptwrites ||
  VAR_0->pwr_events || VAR_0->errors ||
  VAR_0->dont_decode || VAR_0->calls || VAR_0->returns ||
  VAR_0->callchain || VAR_0->thread_stack ||
  VAR_0->last_branch;
 if (!VAR_1)
  return 1;
 FUNC_0("Unsupported --itrace options specified\n");
 return 0;
}
