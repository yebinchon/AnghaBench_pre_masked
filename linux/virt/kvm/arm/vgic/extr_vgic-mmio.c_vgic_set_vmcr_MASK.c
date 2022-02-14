
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgic_vmcr {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,struct vgic_vmcr*) ;
 int FUNC_1 (struct kvm_vcpu*,struct vgic_vmcr*) ;

void FUNC_2(struct kvm_vcpu *VAR_2, struct vgic_vmcr *VAR_3)
{
 if (VAR_1.type == VAR_0)
  FUNC_0(VAR_2, VAR_3);
 else
  FUNC_1(VAR_2, VAR_3);
}
