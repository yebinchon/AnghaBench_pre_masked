
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgic_reg_attr {int addr; int vcpu; } ;
struct kvm_device_attr {int attr; } ;
struct kvm_device {TYPE_1__* kvm; } ;
struct TYPE_2__ {int online_vcpus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int) ;

int FUNC_2(struct kvm_device *VAR_4, struct kvm_device_attr *VAR_5,
         struct vgic_reg_attr *VAR_6)
{
 int VAR_7;

 VAR_7 = (VAR_5->attr & VAR_1) >>
   VAR_2;

 if (VAR_7 >= FUNC_0(&VAR_4->kvm->online_vcpus))
  return -VAR_0;

 VAR_6->vcpu = FUNC_1(VAR_4->kvm, VAR_7);
 VAR_6->addr = VAR_5->attr & VAR_3;

 return 0;
}
