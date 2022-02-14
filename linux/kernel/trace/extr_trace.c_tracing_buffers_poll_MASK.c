
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {int dummy; } ;
struct ftrace_buffer_info {struct trace_iterator iter; } ;
struct file {struct ftrace_buffer_info* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int FUNC_0 (struct trace_iterator*,struct file*,int *) ;

__attribute__((used)) static __poll_t
FUNC_1(struct file *VAR_0, poll_table *VAR_1)
{
 struct ftrace_buffer_info *VAR_2 = VAR_0->private_data;
 struct trace_iterator *VAR_3 = &VAR_2->iter;

 return FUNC_0(VAR_3, VAR_0, VAR_1);
}
