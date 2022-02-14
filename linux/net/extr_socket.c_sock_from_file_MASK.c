
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct file {struct socket* private_data; int * f_op; } ;


 int VAR_0 ;
 int VAR_1 ;

struct socket *FUNC_0(struct file *VAR_2, int *VAR_3)
{
 if (VAR_2->f_op == &VAR_1)
  return VAR_2->private_data;

 *VAR_3 = -VAR_0;
 return ((void*)0);
}
