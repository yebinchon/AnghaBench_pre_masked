
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ftrace_graph_ret {scalar_t__ depth; int overrun; int calltime; scalar_t__ func; } ;
struct TYPE_4__ {int curr_ret_stack; int curr_ret_depth; int trace_overrun; TYPE_1__* ret_stack; } ;
struct TYPE_3__ {unsigned long fp; unsigned long ret; int calltime; scalar_t__ func; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,unsigned long,unsigned long,void*,unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 TYPE_2__* VAR_1 ;
 int FUNC_4 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct ftrace_graph_ret *VAR_3, unsigned long *VAR_4,
   unsigned long VAR_5)
{
 int VAR_6;

 VAR_6 = VAR_1->curr_ret_stack;

 if (FUNC_5(VAR_6 < 0 || VAR_6 >= VAR_0)) {
  FUNC_4();
  FUNC_1(1);

  *VAR_4 = (unsigned long)VAR_2;
  return;
 }
 *VAR_4 = VAR_1->ret_stack[VAR_6].ret;
 VAR_3->func = VAR_1->ret_stack[VAR_6].func;
 VAR_3->calltime = VAR_1->ret_stack[VAR_6].calltime;
 VAR_3->overrun = FUNC_2(&VAR_1->trace_overrun);
 VAR_3->depth = VAR_1->curr_ret_depth--;





 FUNC_3();
}
