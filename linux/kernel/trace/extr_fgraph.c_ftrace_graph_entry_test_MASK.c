
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_graph_ent {int func; } ;


 int FUNC_0 (struct ftrace_graph_ent*) ;
 int FUNC_1 (int *,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct ftrace_graph_ent *VAR_1)
{
 if (!FUNC_1(&VAR_0, VAR_1->func, ((void*)0)))
  return 0;
 return FUNC_0(VAR_1);
}
