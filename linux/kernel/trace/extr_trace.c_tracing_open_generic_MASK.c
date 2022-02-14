
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_private; } ;
struct file {int private_data; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(((void*)0));
 if (VAR_2)
  return VAR_2;

 VAR_1->private_data = VAR_0->i_private;
 return 0;
}
