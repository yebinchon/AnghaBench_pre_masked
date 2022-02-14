
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int dummy; } ;
struct seq_file {struct trace_array* private; } ;
struct inode {struct trace_array* i_private; } ;
struct file {struct seq_file* private_data; } ;


 int FUNC_0 (struct file*,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct trace_array*) ;
 int FUNC_2 (struct trace_array*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 struct trace_array *VAR_3 = VAR_1->i_private;
 struct seq_file *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_2, &VAR_0);
 if (VAR_5) {
  FUNC_1(VAR_3);
  return VAR_5;
 }

 VAR_4 = VAR_2->private_data;
 VAR_4->private = VAR_3;

 return 0;
}
