
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int dummy; } ;
struct seq_file {struct trace_array* private; } ;
struct inode {struct trace_array* i_private; } ;
struct file {int f_mode; int f_flags; struct seq_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct trace_array*) ;
 int FUNC_1 (struct file*,int *) ;
 int FUNC_2 (struct trace_array*) ;
 int FUNC_3 (struct trace_array*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_4, struct file *VAR_5)
{
 struct trace_array *VAR_6 = VAR_4->i_private;
 int VAR_7 = 0;

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7)
  return VAR_7;


 if ((VAR_5->f_mode & VAR_1) && (VAR_5->f_flags & VAR_2))
  FUNC_0(VAR_6);

 if (VAR_5->f_mode & VAR_0) {
  VAR_7 = FUNC_1(VAR_5, &VAR_3);
  if (!VAR_7) {
   struct seq_file *VAR_8 = VAR_5->private_data;
   VAR_8->private = VAR_6;
  } else {
   FUNC_2(VAR_6);
  }
 }
 return VAR_7;
}
