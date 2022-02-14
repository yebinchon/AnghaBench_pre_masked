
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_iterator {int cpu_file; TYPE_1__* trace_buffer; struct trace_array* tr; } ;
struct trace_array {int trace_flags; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {int buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct file*,int *) ;
 scalar_t__ FUNC_1 (struct trace_iterator*,int ) ;

__attribute__((used)) static __poll_t
FUNC_2(struct trace_iterator *VAR_3, struct file *VAR_4, poll_table *VAR_5)
{
 struct trace_array *VAR_6 = VAR_3->tr;


 if (FUNC_1(VAR_3, VAR_3->cpu_file))
  return VAR_0 | VAR_1;

 if (VAR_6->trace_flags & VAR_2)



  return VAR_0 | VAR_1;
 else
  return FUNC_0(VAR_3->trace_buffer->buffer, VAR_3->cpu_file,
          VAR_4, VAR_5);
}
