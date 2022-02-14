
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_array_cpu {int disabled; } ;
struct TYPE_2__ {int data; } ;
struct trace_array {TYPE_1__ trace_buffer; } ;
struct ftrace_graph_ent {int func; } ;


 int VAR_0 ;
 int FUNC_0 (struct trace_array*,struct ftrace_graph_ent*,unsigned long,int) ;
 int FUNC_1 (int *) ;
 long FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct ftrace_graph_ent*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct trace_array*) ;
 struct trace_array* VAR_1 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 struct trace_array_cpu* FUNC_10 (int ,int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ VAR_2 ;

int FUNC_15(struct ftrace_graph_ent *VAR_3)
{
 struct trace_array *VAR_4 = VAR_1;
 struct trace_array_cpu *VAR_5;
 unsigned long VAR_6;
 long VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 if (FUNC_14(VAR_0))
  return 0;
 if (FUNC_5(VAR_3->func)) {
  FUNC_13(VAR_0);




  return 1;
 }

 if (!FUNC_6(VAR_4))
  return 0;

 if (FUNC_3(VAR_3))
  return 0;

 if (FUNC_4())
  return 0;





 if (VAR_2)
  return 1;

 FUNC_9(VAR_6);
 VAR_9 = FUNC_12();
 VAR_5 = FUNC_10(VAR_4->trace_buffer.data, VAR_9);
 VAR_7 = FUNC_2(&VAR_5->disabled);
 if (FUNC_7(VAR_7 == 1)) {
  VAR_10 = FUNC_11();
  VAR_8 = FUNC_0(VAR_4, VAR_3, VAR_6, VAR_10);
 } else {
  VAR_8 = 0;
 }

 FUNC_1(&VAR_5->disabled);
 FUNC_8(VAR_6);

 return VAR_8;
}
