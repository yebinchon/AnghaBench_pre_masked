
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_iterator {int iter_flags; } ;
struct trace_buffer {int dummy; } ;
struct trace_array {int trace_flags; struct trace_buffer max_buffer; TYPE_1__* current_trace; struct trace_buffer trace_buffer; } ;
struct inode {struct trace_array* i_private; } ;
struct file {int f_mode; int f_flags; } ;
struct TYPE_2__ {scalar_t__ print_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct trace_iterator*) ;
 int VAR_2 ;
 int FUNC_1 (struct trace_iterator*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct trace_iterator* FUNC_2 (struct inode*,struct file*,int) ;
 int FUNC_3 (struct trace_array*) ;
 int FUNC_4 (struct trace_array*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct trace_buffer*,int) ;
 int FUNC_7 (struct trace_buffer*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_6, struct file *VAR_7)
{
 struct trace_array *VAR_8 = VAR_6->i_private;
 struct trace_iterator *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_8);
 if (VAR_10)
  return VAR_10;


 if ((VAR_7->f_mode & VAR_1) && (VAR_7->f_flags & VAR_2)) {
  int VAR_11 = FUNC_5(VAR_6);
  struct trace_buffer *VAR_12 = &VAR_8->trace_buffer;






  if (VAR_11 == VAR_3)
   FUNC_7(VAR_12);
  else
   FUNC_6(VAR_12, VAR_11);
 }

 if (VAR_7->f_mode & VAR_0) {
  VAR_9 = FUNC_2(VAR_6, VAR_7, 0);
  if (FUNC_0(VAR_9))
   VAR_10 = FUNC_1(VAR_9);
  else if (VAR_8->trace_flags & VAR_5)
   VAR_9->iter_flags |= VAR_4;
 }

 if (VAR_10 < 0)
  FUNC_3(VAR_8);

 return VAR_10;
}
