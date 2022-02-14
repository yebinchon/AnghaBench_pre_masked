
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int dummy; } ;
struct inode {struct trace_array* i_private; } ;
struct file {struct trace_array* private_data; } ;


 int FUNC_0 (struct trace_array*) ;

int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct trace_array *VAR_2 = VAR_0->i_private;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_1->private_data = VAR_0->i_private;

 return 0;
}
