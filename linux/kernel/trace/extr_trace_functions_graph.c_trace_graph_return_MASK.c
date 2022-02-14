
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_array_cpu {int disabled; } ;
struct TYPE_2__ {int data; } ;
struct trace_array {TYPE_1__ trace_buffer; } ;
struct ftrace_graph_ret {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct trace_array*,struct ftrace_graph_ret*,unsigned long,int) ;
 int FUNC_1 (int *) ;
 long FUNC_2 (int *) ;
 int FUNC_3 (struct ftrace_graph_ret*) ;
 struct trace_array* VAR_1 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 struct trace_array_cpu* FUNC_7 (int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;

void FUNC_12(struct ftrace_graph_ret *VAR_2)
{
 struct trace_array *VAR_3 = VAR_1;
 struct trace_array_cpu *VAR_4;
 unsigned long VAR_5;
 long VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_3(VAR_2);

 if (FUNC_11(VAR_0)) {
  FUNC_10(VAR_0);
  return;
 }

 FUNC_6(VAR_5);
 VAR_7 = FUNC_9();
 VAR_4 = FUNC_7(VAR_3->trace_buffer.data, VAR_7);
 VAR_6 = FUNC_2(&VAR_4->disabled);
 if (FUNC_4(VAR_6 == 1)) {
  VAR_8 = FUNC_8();
  FUNC_0(VAR_3, VAR_2, VAR_5, VAR_8);
 }
 FUNC_1(&VAR_4->disabled);
 FUNC_5(VAR_5);
}
