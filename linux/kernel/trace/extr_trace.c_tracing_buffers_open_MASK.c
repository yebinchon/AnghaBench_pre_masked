
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_array {TYPE_2__* current_trace; int trace_buffer; } ;
struct inode {struct trace_array* i_private; } ;
struct TYPE_3__ {int * trace_buffer; TYPE_2__* trace; int cpu_file; struct trace_array* tr; } ;
struct ftrace_buffer_info {unsigned int read; int * spare; TYPE_1__ iter; } ;
struct file {struct ftrace_buffer_info* private_data; } ;
struct TYPE_4__ {int ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ftrace_buffer_info* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*,struct file*) ;
 int FUNC_4 (struct trace_array*) ;
 int VAR_2 ;
 int FUNC_5 (struct trace_array*) ;
 int FUNC_6 (struct inode*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3, struct file *VAR_4)
{
 struct trace_array *VAR_5 = VAR_3->i_private;
 struct ftrace_buffer_info *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  FUNC_4(VAR_5);
  return -VAR_0;
 }

 FUNC_1(&VAR_2);

 VAR_6->iter.tr = VAR_5;
 VAR_6->iter.cpu_file = FUNC_6(VAR_3);
 VAR_6->iter.trace = VAR_5->current_trace;
 VAR_6->iter.trace_buffer = &VAR_5->trace_buffer;
 VAR_6->spare = ((void*)0);

 VAR_6->read = (unsigned int)-1;

 VAR_4->private_data = VAR_6;

 VAR_5->current_trace->ref++;

 FUNC_2(&VAR_2);

 VAR_7 = FUNC_3(VAR_3, VAR_4);
 if (VAR_7 < 0)
  FUNC_4(VAR_5);

 return VAR_7;
}
