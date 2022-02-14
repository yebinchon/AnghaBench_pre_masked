
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vgic_reg_attr {int addr; struct kvm_vcpu* vcpu; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_device_attr {int group; } ;
struct kvm_device {TYPE_1__* kvm; } ;
typedef int gpa_t ;
struct TYPE_4__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct kvm_vcpu*,int,int ,int *) ;
 int FUNC_6 (struct kvm_vcpu*,int,int ,int *) ;
 int FUNC_7 (struct kvm_device*,struct kvm_device_attr*,struct vgic_reg_attr*) ;

__attribute__((used)) static int FUNC_8(struct kvm_device *VAR_2,
        struct kvm_device_attr *VAR_3,
        u32 *VAR_4, bool VAR_5)
{
 struct vgic_reg_attr VAR_6;
 gpa_t VAR_7;
 struct kvm_vcpu *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_7(VAR_2, VAR_3, &VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_8 = VAR_6.vcpu;
 VAR_7 = VAR_6.addr;

 FUNC_1(&VAR_2->kvm->lock);

 VAR_9 = FUNC_4(VAR_2->kvm);
 if (VAR_9)
  goto out;

 if (!FUNC_0(VAR_2->kvm)) {
  VAR_9 = -VAR_0;
  goto out;
 }

 switch (VAR_3->group) {
 case 129:
  VAR_9 = FUNC_5(VAR_8, VAR_5, VAR_7, VAR_4);
  break;
 case 128:
  VAR_9 = FUNC_6(VAR_8, VAR_5, VAR_7, VAR_4);
  break;
 default:
  VAR_9 = -VAR_1;
  break;
 }

 FUNC_3(VAR_2->kvm);
out:
 FUNC_2(&VAR_2->kvm->lock);
 return VAR_9;
}
