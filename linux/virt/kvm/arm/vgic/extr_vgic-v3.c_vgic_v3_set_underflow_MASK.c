
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vgic_v3_cpu_if {int vgic_hcr; } ;
struct TYPE_3__ {struct vgic_v3_cpu_if vgic_v3; } ;
struct TYPE_4__ {TYPE_1__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int VAR_0 ;

void FUNC_0(struct kvm_vcpu *VAR_1)
{
 struct vgic_v3_cpu_if *VAR_2 = &VAR_1->arch.vgic_cpu.vgic_v3;

 VAR_2->vgic_hcr |= VAR_0;
}
