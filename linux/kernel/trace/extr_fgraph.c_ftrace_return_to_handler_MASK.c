
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ftrace_graph_ret {int rettime; } ;
struct TYPE_2__ {int curr_ret_stack; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct ftrace_graph_ret*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ftrace_graph_ret*,unsigned long*,unsigned long) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;

unsigned long FUNC_7(unsigned long VAR_2)
{
 struct ftrace_graph_ret VAR_3;
 unsigned long VAR_4;

 FUNC_4(&VAR_3, &VAR_4, VAR_2);
 VAR_3.rettime = FUNC_5();
 FUNC_2(&VAR_3);





 FUNC_1();
 VAR_0->curr_ret_stack--;

 if (FUNC_6(!VAR_4)) {
  FUNC_3();
  FUNC_0(1);

  VAR_4 = (unsigned long)VAR_1;
 }

 return VAR_4;
}
