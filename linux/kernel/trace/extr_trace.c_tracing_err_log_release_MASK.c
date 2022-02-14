
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int dummy; } ;
struct inode {struct trace_array* i_private; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct file*) ;
 int FUNC_1 (struct trace_array*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 struct trace_array *VAR_3 = VAR_1->i_private;

 FUNC_1(VAR_3);

 if (VAR_2->f_mode & VAR_0)
  FUNC_0(VAR_1, VAR_2);

 return 0;
}
