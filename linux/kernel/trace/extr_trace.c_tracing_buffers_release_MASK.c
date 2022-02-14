
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct trace_iterator {TYPE_1__* trace_buffer; TYPE_3__* tr; } ;
struct inode {int dummy; } ;
struct ftrace_buffer_info {scalar_t__ spare; int spare_cpu; struct trace_iterator iter; } ;
struct file {struct ftrace_buffer_info* private_data; } ;
struct TYPE_6__ {TYPE_2__* current_trace; } ;
struct TYPE_5__ {int ref; } ;
struct TYPE_4__ {int buffer; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct ftrace_buffer_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1, struct file *VAR_2)
{
 struct ftrace_buffer_info *VAR_3 = VAR_2->private_data;
 struct trace_iterator *VAR_4 = &VAR_3->iter;

 FUNC_2(&VAR_0);

 VAR_4->tr->current_trace->ref--;

 FUNC_0(VAR_4->tr);

 if (VAR_3->spare)
  FUNC_4(VAR_4->trace_buffer->buffer,
        VAR_3->spare_cpu, VAR_3->spare);
 FUNC_1(VAR_3);

 FUNC_3(&VAR_0);

 return 0;
}
