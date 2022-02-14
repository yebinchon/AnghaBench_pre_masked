
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_iterator {TYPE_1__* trace; int mutex; int cpu_file; int * trace_buffer; struct trace_array* tr; int iter_flags; int started; int seq; } ;
struct trace_array {int trace_flags; size_t clock_id; TYPE_1__* current_trace; int trace_buffer; } ;
struct inode {struct trace_array* i_private; } ;
struct file {struct trace_iterator* private_data; } ;
struct TYPE_4__ {scalar_t__ in_ns; } ;
struct TYPE_3__ {int ref; int (* pipe_open ) (struct trace_iterator*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct trace_array*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct trace_iterator*) ;
 struct trace_iterator* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct inode*,struct file*) ;
 int FUNC_9 (struct trace_iterator*) ;
 TYPE_2__* VAR_5 ;
 int FUNC_10 (int *) ;
 int VAR_6 ;
 int FUNC_11 (struct trace_array*) ;
 int FUNC_12 (struct inode*) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_7, struct file *VAR_8)
{
 struct trace_array *VAR_9 = VAR_7->i_private;
 struct trace_iterator *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_11(VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_6(&VAR_6);


 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_1);
 if (!VAR_10) {
  VAR_11 = -VAR_0;
  FUNC_0(VAR_9);
  goto out;
 }

 FUNC_10(&VAR_10->seq);
 VAR_10->trace = VAR_9->current_trace;

 if (!FUNC_1(&VAR_10->started, VAR_1)) {
  VAR_11 = -VAR_0;
  goto fail;
 }


 FUNC_2(VAR_10->started);

 if (VAR_9->trace_flags & VAR_4)
  VAR_10->iter_flags |= VAR_2;


 if (VAR_5[VAR_9->clock_id].in_ns)
  VAR_10->iter_flags |= VAR_3;

 VAR_10->tr = VAR_9;
 VAR_10->trace_buffer = &VAR_9->trace_buffer;
 VAR_10->cpu_file = FUNC_12(VAR_7);
 FUNC_5(&VAR_10->mutex);
 VAR_8->private_data = VAR_10;

 if (VAR_10->trace->pipe_open)
  VAR_10->trace->pipe_open(VAR_10);

 FUNC_8(VAR_7, VAR_8);

 VAR_9->current_trace->ref++;
out:
 FUNC_7(&VAR_6);
 return VAR_11;

fail:
 FUNC_3(VAR_10);
 FUNC_0(VAR_9);
 FUNC_7(&VAR_6);
 return VAR_11;
}
