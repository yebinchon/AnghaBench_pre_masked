
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_device {TYPE_2__* ops; TYPE_1__* kvm; } ;
struct file {struct kvm_device* private_data; } ;
struct TYPE_6__ {scalar_t__ mm; } ;
struct TYPE_5__ {long (* ioctl ) (struct kvm_device*,unsigned int,unsigned long) ;int has_attr; int get_attr; int set_attr; } ;
struct TYPE_4__ {scalar_t__ mm; } ;


 long VAR_0 ;
 long VAR_1 ;



 TYPE_3__* VAR_2 ;
 long FUNC_0 (struct kvm_device*,int ,unsigned long) ;
 long FUNC_1 (struct kvm_device*,unsigned int,unsigned long) ;

__attribute__((used)) static long FUNC_2(struct file *VAR_3, unsigned int VAR_4,
        unsigned long VAR_5)
{
 struct kvm_device *VAR_6 = VAR_3->private_data;

 if (VAR_6->kvm->mm != VAR_2->mm)
  return -VAR_0;

 switch (VAR_4) {
 case 128:
  return FUNC_0(VAR_6, VAR_6->ops->set_attr, VAR_5);
 case 130:
  return FUNC_0(VAR_6, VAR_6->ops->get_attr, VAR_5);
 case 129:
  return FUNC_0(VAR_6, VAR_6->ops->has_attr, VAR_5);
 default:
  if (VAR_6->ops->ioctl)
   return VAR_6->ops->ioctl(VAR_6, VAR_4, VAR_5);

  return -VAR_1;
 }
}
