
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_device {int dummy; } ;
struct file {struct kvm_device* private_data; int * f_op; } ;


 int VAR_0 ;

struct kvm_device *FUNC_0(struct file *VAR_1)
{
 if (VAR_1->f_op != &VAR_0)
  return ((void*)0);

 return VAR_1->private_data;
}
