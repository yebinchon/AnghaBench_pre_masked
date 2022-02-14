
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct trace_seq {int dummy; } ;
struct trace_iterator {int cpu; struct trace_seq seq; struct trace_entry* ent; struct fgraph_data* private; } ;
struct trace_entry {int type; } ;
struct ftrace_graph_ret_entry {int ret; } ;
struct ftrace_graph_ent_entry {int ret; } ;
struct fgraph_data {int cpu; int cpu_data; struct ftrace_graph_ret_entry ent; scalar_t__ failed; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;
struct TYPE_2__ {int ignore; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (struct trace_seq*,struct trace_entry*,struct trace_iterator*,int ) ;
 int FUNC_2 (struct ftrace_graph_ret_entry*,struct trace_seq*,struct trace_iterator*,int ) ;
 int FUNC_3 (int *,struct trace_seq*,struct trace_entry*,struct trace_iterator*,int ) ;
 int FUNC_4 (struct ftrace_graph_ret_entry*,struct trace_entry*) ;

enum print_line_t
FUNC_5(struct trace_iterator *VAR_3, u32 VAR_4)
{
 struct ftrace_graph_ent_entry *VAR_5;
 struct fgraph_data *VAR_6 = VAR_3->private;
 struct trace_entry *VAR_7 = VAR_3->ent;
 struct trace_seq *VAR_8 = &VAR_3->seq;
 int VAR_9 = VAR_3->cpu;
 int VAR_10;

 if (VAR_6 && FUNC_0(VAR_6->cpu_data, VAR_9)->ignore) {
  FUNC_0(VAR_6->cpu_data, VAR_9)->ignore = 0;
  return VAR_0;
 }





 if (VAR_6 && VAR_6->failed) {
  VAR_5 = &VAR_6->ent;
  VAR_3->cpu = VAR_6->cpu;
  VAR_10 = FUNC_2(VAR_5, VAR_8, VAR_3, VAR_4);
  if (VAR_10 == VAR_0 && VAR_3->cpu != VAR_9) {
   FUNC_0(VAR_6->cpu_data, VAR_3->cpu)->ignore = 1;
   VAR_10 = VAR_1;
  }
  VAR_3->cpu = VAR_9;
  return VAR_10;
 }

 switch (VAR_7->type) {
 case 130: {






  struct ftrace_graph_ent_entry VAR_11;
  FUNC_4(VAR_5, VAR_7);
  VAR_11 = *VAR_5;
  return FUNC_2(&VAR_11, VAR_8, VAR_3, VAR_4);
 }
 case 129: {
  struct ftrace_graph_ret_entry *VAR_12;
  FUNC_4(VAR_12, VAR_7);
  return FUNC_3(&VAR_12->ret, VAR_8, VAR_7, VAR_3, VAR_4);
 }
 case 128:
 case 131:

  return VAR_2;

 default:
  return FUNC_1(VAR_8, VAR_7, VAR_3, VAR_4);
 }

 return VAR_0;
}
