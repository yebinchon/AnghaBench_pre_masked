
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trace_seq {int dummy; } ;
struct trace_iterator {int cpu; struct trace_array* tr; struct fgraph_data* private; } ;
struct trace_array {int dummy; } ;
struct ftrace_graph_ent {size_t depth; scalar_t__ func; } ;
struct ftrace_graph_ent_entry {struct ftrace_graph_ent graph_ent; } ;
struct fgraph_data {int cpu_data; } ;
struct fgraph_cpu_data {size_t depth; scalar_t__* enter_funcs; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct fgraph_cpu_data* FUNC_1 (int ,int) ;
 int FUNC_2 (struct trace_array*,int ,struct trace_seq*,int) ;
 scalar_t__ FUNC_3 (struct trace_seq*) ;
 int FUNC_4 (struct trace_seq*,char*,void*) ;
 int FUNC_5 (struct trace_seq*,char) ;

__attribute__((used)) static enum print_line_t
FUNC_6(struct trace_iterator *VAR_5,
    struct ftrace_graph_ent_entry *VAR_6,
    struct trace_seq *VAR_7, int VAR_8, u32 VAR_9)
{
 struct ftrace_graph_ent *VAR_10 = &VAR_6->graph_ent;
 struct fgraph_data *VAR_11 = VAR_5->private;
 struct trace_array *VAR_12 = VAR_5->tr;
 int VAR_13;

 if (VAR_11) {
  struct fgraph_cpu_data *VAR_14;
  int VAR_15 = VAR_5->cpu;

  VAR_14 = FUNC_1(VAR_11->cpu_data, VAR_15);
  VAR_14->depth = VAR_10->depth;


  if (VAR_10->depth < VAR_1 &&
      !FUNC_0(VAR_10->depth < 0))
   VAR_14->enter_funcs[VAR_10->depth] = VAR_10->func;
 }


 FUNC_2(VAR_12, 0, VAR_7, VAR_9 | VAR_0);


 for (VAR_13 = 0; VAR_13 < VAR_10->depth * VAR_2; VAR_13++)
  FUNC_5(VAR_7, ' ');

 FUNC_4(VAR_7, "%ps() {\n", (void *)VAR_10->func);

 if (FUNC_3(VAR_7))
  return VAR_4;





 return VAR_3;
}
