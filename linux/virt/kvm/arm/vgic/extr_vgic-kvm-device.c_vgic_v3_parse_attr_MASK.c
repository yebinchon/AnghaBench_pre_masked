
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_reg_attr {int addr; int vcpu; } ;
struct kvm_device_attr {scalar_t__ group; unsigned long attr; } ;
struct kvm_device {int kvm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,unsigned long) ;

int FUNC_3(struct kvm_device *VAR_5, struct kvm_device_attr *VAR_6,
         struct vgic_reg_attr *VAR_7)
{
 unsigned long VAR_8, VAR_9;





 if (VAR_6->group != VAR_1) {
  VAR_8 = (VAR_6->attr & VAR_3) >>
         VAR_4;

  VAR_9 = FUNC_0(VAR_8);
  VAR_7->vcpu = FUNC_2(VAR_5->kvm, VAR_9);
 } else {
  VAR_7->vcpu = FUNC_1(VAR_5->kvm, 0);
 }

 if (!VAR_7->vcpu)
  return -VAR_0;

 VAR_7->addr = VAR_6->attr & VAR_2;

 return 0;
}
