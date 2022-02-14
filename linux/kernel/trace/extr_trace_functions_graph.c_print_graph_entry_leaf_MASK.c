
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct trace_seq {int dummy; } ;
struct trace_iterator {int cpu; TYPE_1__* ent; struct trace_array* tr; struct fgraph_data* private; } ;
struct trace_array {int dummy; } ;
struct ftrace_graph_ret {unsigned long long rettime; unsigned long long calltime; int func; } ;
struct ftrace_graph_ret_entry {struct ftrace_graph_ret ret; } ;
struct ftrace_graph_ent {int depth; scalar_t__ func; } ;
struct ftrace_graph_ent_entry {struct ftrace_graph_ent graph_ent; } ;
struct fgraph_data {int cpu_data; } ;
struct fgraph_cpu_data {int depth; scalar_t__* enter_funcs; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct fgraph_cpu_data* FUNC_1 (int ,int) ;
 int FUNC_2 (struct trace_array*,unsigned long long,struct trace_seq*,int ) ;
 int FUNC_3 (struct trace_iterator*,int ,int ,int,int ,int ) ;
 int FUNC_4 (struct trace_seq*) ;
 int FUNC_5 (struct trace_seq*,char*,void*) ;
 int FUNC_6 (struct trace_seq*,char) ;

__attribute__((used)) static enum print_line_t
FUNC_7(struct trace_iterator *VAR_3,
  struct ftrace_graph_ent_entry *VAR_4,
  struct ftrace_graph_ret_entry *VAR_5,
  struct trace_seq *VAR_6, u32 VAR_7)
{
 struct fgraph_data *VAR_8 = VAR_3->private;
 struct trace_array *VAR_9 = VAR_3->tr;
 struct ftrace_graph_ret *VAR_10;
 struct ftrace_graph_ent *VAR_11;
 unsigned long long VAR_12;
 int VAR_13 = VAR_3->cpu;
 int VAR_14;

 VAR_10 = &VAR_5->ret;
 VAR_11 = &VAR_4->graph_ent;
 VAR_12 = VAR_10->rettime - VAR_10->calltime;

 if (VAR_8) {
  struct fgraph_cpu_data *VAR_15;

  VAR_15 = FUNC_1(VAR_8->cpu_data, VAR_13);






  VAR_15->depth = VAR_11->depth - 1;


  if (VAR_11->depth < VAR_0 &&
      !FUNC_0(VAR_11->depth < 0))
   VAR_15->enter_funcs[VAR_11->depth] = 0;
 }


 FUNC_2(VAR_9, VAR_12, VAR_6, VAR_7);


 for (VAR_14 = 0; VAR_14 < VAR_11->depth * VAR_1; VAR_14++)
  FUNC_6(VAR_6, ' ');

 FUNC_5(VAR_6, "%ps();\n", (void *)VAR_11->func);

 FUNC_3(VAR_3, VAR_10->func, VAR_2,
   VAR_13, VAR_3->ent->pid, VAR_7);

 return FUNC_4(VAR_6);
}
