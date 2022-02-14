
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_graph_ret {scalar_t__ rettime; scalar_t__ calltime; } ;


 int VAR_0 ;
 int FUNC_0 (struct ftrace_graph_ret*) ;
 int FUNC_1 (struct ftrace_graph_ret*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_4(struct ftrace_graph_ret *VAR_2)
{
 FUNC_0(VAR_2);

 if (FUNC_3(VAR_0)) {
  FUNC_2(VAR_0);
  return;
 }

 if (VAR_1 &&
     (VAR_2->rettime - VAR_2->calltime < VAR_1))
  return;
 else
  FUNC_1(VAR_2);
}
