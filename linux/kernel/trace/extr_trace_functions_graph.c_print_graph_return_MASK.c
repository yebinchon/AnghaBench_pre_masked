
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trace_seq {int dummy; } ;
struct trace_iterator {int cpu; struct trace_array* tr; struct fgraph_data* private; } ;
struct trace_entry {int pid; } ;
struct trace_array {int dummy; } ;
struct ftrace_graph_ret {unsigned long long rettime; unsigned long long calltime; int depth; scalar_t__ func; void* overrun; } ;
struct fgraph_data {int cpu_data; } ;
struct fgraph_cpu_data {int depth; scalar_t__* enter_funcs; } ;
typedef int pid_t ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct trace_iterator*,int,int) ;
 struct fgraph_cpu_data* FUNC_2 (int ,int) ;
 int FUNC_3 (struct trace_array*,unsigned long long,struct trace_seq*,int) ;
 int FUNC_4 (struct trace_iterator*,scalar_t__,int ,int,int ,int) ;
 int FUNC_5 (struct trace_iterator*,struct trace_seq*,int ,int ,int) ;
 int FUNC_6 (struct trace_seq*) ;
 int FUNC_7 (struct trace_seq*,char*,void*) ;
 int FUNC_8 (struct trace_seq*,char) ;
 int FUNC_9 (struct trace_seq*,char*) ;

__attribute__((used)) static enum print_line_t
FUNC_10(struct ftrace_graph_ret *VAR_6, struct trace_seq *VAR_7,
     struct trace_entry *VAR_8, struct trace_iterator *VAR_9,
     u32 VAR_10)
{
 unsigned long long VAR_11 = VAR_6->rettime - VAR_6->calltime;
 struct fgraph_data *VAR_12 = VAR_9->private;
 struct trace_array *VAR_13 = VAR_9->tr;
 pid_t VAR_14 = VAR_8->pid;
 int VAR_15 = VAR_9->cpu;
 int VAR_16 = 1;
 int VAR_17;

 if (FUNC_1(VAR_9, VAR_10, VAR_6->depth))
  return VAR_5;

 if (VAR_12) {
  struct fgraph_cpu_data *VAR_18;
  int VAR_19 = VAR_9->cpu;

  VAR_18 = FUNC_2(VAR_12->cpu_data, VAR_19);






  VAR_18->depth = VAR_6->depth - 1;

  if (VAR_6->depth < VAR_0 &&
      !FUNC_0(VAR_6->depth < 0)) {
   if (VAR_18->enter_funcs[VAR_6->depth] != VAR_6->func)
    VAR_16 = 0;
   VAR_18->enter_funcs[VAR_6->depth] = 0;
  }
 }

 FUNC_5(VAR_9, VAR_7, 0, 0, VAR_10);


 FUNC_3(VAR_13, VAR_11, VAR_7, VAR_10);


 for (VAR_17 = 0; VAR_17 < VAR_6->depth * VAR_1; VAR_17++)
  FUNC_8(VAR_7, ' ');
 if (VAR_16 && !(VAR_10 & VAR_3))
  FUNC_9(VAR_7, "}\n");
 else
  FUNC_7(VAR_7, "} /* %ps */\n", (void *)VAR_6->func);


 if (VAR_10 & VAR_2)
  FUNC_7(VAR_7, " (Overruns: %lu)\n",
     VAR_6->overrun);

 FUNC_4(VAR_9, VAR_6->func, VAR_4,
   VAR_15, VAR_14, VAR_10);

 return FUNC_6(VAR_7);
}
