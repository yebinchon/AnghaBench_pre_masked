
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct socket {TYPE_1__* ops; } ;
struct file {struct socket* private_data; } ;
struct TYPE_2__ {int (* mmap ) (struct file*,struct socket*,struct vm_area_struct*) ;} ;


 int FUNC_0 (struct file*,struct socket*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, struct vm_area_struct *VAR_1)
{
 struct socket *VAR_2 = VAR_0->private_data;

 return VAR_2->ops->mmap(VAR_0, VAR_2, VAR_1);
}
