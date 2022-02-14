
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_ftrace {int nograph_funcs; int graph_funcs; int notrace; int filters; } ;


 int FUNC_0 (char*,int *) ;

__attribute__((used)) static int FUNC_1(struct perf_ftrace *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0("set_ftrace_filter", &VAR_0->filters);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_0("set_ftrace_notrace", &VAR_0->notrace);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_0("set_graph_function", &VAR_0->graph_funcs);
 if (VAR_1 < 0)
  return VAR_1;


 FUNC_0("set_graph_notrace", &VAR_0->nograph_funcs);

 return VAR_1;
}
