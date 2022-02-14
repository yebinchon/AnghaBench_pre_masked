
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct kvm_device {TYPE_1__* ops; } ;
struct file {struct kvm_device* private_data; } ;
struct TYPE_2__ {int (* mmap ) (struct kvm_device*,struct vm_area_struct*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_device*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct kvm_device *VAR_3 = VAR_1->private_data;

 if (VAR_3->ops->mmap)
  return VAR_3->ops->mmap(VAR_3, VAR_2);

 return -VAR_0;
}
