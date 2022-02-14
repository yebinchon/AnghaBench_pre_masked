
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_iterator {int mutex; int started; TYPE_2__* trace; } ;
struct trace_array {TYPE_1__* current_trace; } ;
struct inode {struct trace_array* i_private; } ;
struct file {struct trace_iterator* private_data; } ;
struct TYPE_4__ {int (* pipe_close ) (struct trace_iterator*) ;} ;
struct TYPE_3__ {int ref; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct trace_iterator*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct trace_iterator*) ;
 int FUNC_6 (struct trace_array*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, struct file *VAR_2)
{
 struct trace_iterator *VAR_3 = VAR_2->private_data;
 struct trace_array *VAR_4 = VAR_1->i_private;

 FUNC_3(&VAR_0);

 VAR_4->current_trace->ref--;

 if (VAR_3->trace->pipe_close)
  VAR_3->trace->pipe_close(VAR_3);

 FUNC_4(&VAR_0);

 FUNC_0(VAR_3->started);
 FUNC_2(&VAR_3->mutex);
 FUNC_1(VAR_3);

 FUNC_6(VAR_4);

 return 0;
}
