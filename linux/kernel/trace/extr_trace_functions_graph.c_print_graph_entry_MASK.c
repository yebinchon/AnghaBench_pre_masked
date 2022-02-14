
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trace_seq {scalar_t__ full; } ;
struct trace_iterator {int cpu; struct fgraph_data* private; } ;
struct ftrace_graph_ret_entry {int dummy; } ;
struct ftrace_graph_ent {int func; int depth; } ;
struct ftrace_graph_ent_entry {struct ftrace_graph_ent graph_ent; } ;
struct fgraph_data {int failed; int cpu; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct trace_iterator*,int ,int ,int ) ;
 struct ftrace_graph_ret_entry* FUNC_1 (struct trace_iterator*,struct ftrace_graph_ent_entry*) ;
 int FUNC_2 (struct trace_iterator*,struct ftrace_graph_ent_entry*,struct ftrace_graph_ret_entry*,struct trace_seq*,int ) ;
 int FUNC_3 (struct trace_iterator*,struct ftrace_graph_ent_entry*,struct trace_seq*,int,int ) ;
 int FUNC_4 (struct trace_iterator*,struct trace_seq*,int ,int ,int ) ;

__attribute__((used)) static enum print_line_t
FUNC_5(struct ftrace_graph_ent_entry *VAR_2, struct trace_seq *VAR_3,
   struct trace_iterator *VAR_4, u32 VAR_5)
{
 struct fgraph_data *VAR_6 = VAR_4->private;
 struct ftrace_graph_ent *VAR_7 = &VAR_2->graph_ent;
 struct ftrace_graph_ret_entry *VAR_8;
 static enum print_line_t VAR_9;
 int VAR_10 = VAR_4->cpu;

 if (FUNC_0(VAR_4, VAR_5, VAR_7->func, VAR_7->depth))
  return VAR_1;

 FUNC_4(VAR_4, VAR_3, VAR_0, VAR_7->func, VAR_5);

 VAR_8 = FUNC_1(VAR_4, VAR_2);
 if (VAR_8)
  VAR_9 = FUNC_2(VAR_4, VAR_2, VAR_8, VAR_3, VAR_5);
 else
  VAR_9 = FUNC_3(VAR_4, VAR_2, VAR_3, VAR_10, VAR_5);

 if (VAR_6) {




  if (VAR_3->full) {
   VAR_6->failed = 1;
   VAR_6->cpu = VAR_10;
  } else
   VAR_6->failed = 0;
 }

 return VAR_9;
}
