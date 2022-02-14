
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int dummy; } ;
struct seq_operations {int dummy; } ;
struct inode {struct trace_array* i_private; } ;
struct file {int f_mode; int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct trace_array*) ;
 int FUNC_1 (struct inode*,struct file*,struct seq_operations const*) ;
 struct seq_operations VAR_2 ;
 int FUNC_2 (struct trace_array*) ;
 int FUNC_3 (struct trace_array*) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 const struct seq_operations *VAR_5 = &VAR_2;
 struct trace_array *VAR_6 = VAR_3->i_private;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7)
  return VAR_7;

 if ((VAR_4->f_mode & VAR_0) &&
     (VAR_4->f_flags & VAR_1))
  FUNC_0(VAR_6);

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_7 < 0)
  FUNC_2(VAR_6);
 return VAR_7;
}
