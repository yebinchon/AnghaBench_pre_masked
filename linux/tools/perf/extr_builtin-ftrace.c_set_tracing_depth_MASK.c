
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_ftrace {int graph_depth; } ;
typedef int buf ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,char*,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(struct perf_ftrace *VAR_0)
{
 char VAR_1[16];

 if (VAR_0->graph_depth == 0)
  return 0;

 if (VAR_0->graph_depth < 0) {
  FUNC_0("invalid graph depth: %d\n", VAR_0->graph_depth);
  return -1;
 }

 FUNC_1(VAR_1, sizeof(VAR_1), "%d", VAR_0->graph_depth);

 if (FUNC_2("max_graph_depth", VAR_1) < 0)
  return -1;

 return 0;
}
