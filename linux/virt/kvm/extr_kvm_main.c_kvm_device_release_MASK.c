
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_device {TYPE_1__* ops; int vm_node; struct kvm* kvm; } ;
struct kvm {int lock; } ;
struct inode {int dummy; } ;
struct file {struct kvm_device* private_data; } ;
struct TYPE_2__ {int (* release ) (struct kvm_device*) ;} ;


 int FUNC_0 (struct kvm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kvm_device*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, struct file *VAR_1)
{
 struct kvm_device *VAR_2 = VAR_1->private_data;
 struct kvm *VAR_3 = VAR_2->kvm;

 if (VAR_2->ops->release) {
  FUNC_2(&VAR_3->lock);
  FUNC_1(&VAR_2->vm_node);
  VAR_2->ops->release(VAR_2);
  FUNC_3(&VAR_3->lock);
 }

 FUNC_0(VAR_3);
 return 0;
}
