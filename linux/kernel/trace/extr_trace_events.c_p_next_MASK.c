
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_pid_list {int dummy; } ;
struct trace_array {int filtered_pids; } ;
struct seq_file {struct trace_array* private; } ;
typedef int loff_t ;


 struct trace_pid_list* FUNC_0 (int ) ;
 void* FUNC_1 (struct trace_pid_list*,void*,int *) ;

__attribute__((used)) static void *
FUNC_2(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 struct trace_array *VAR_3 = VAR_0->private;
 struct trace_pid_list *VAR_4 = FUNC_0(VAR_3->filtered_pids);

 return FUNC_1(VAR_4, VAR_1, VAR_2);
}
