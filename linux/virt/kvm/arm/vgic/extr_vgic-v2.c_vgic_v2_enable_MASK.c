
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vgic_hcr; scalar_t__ vgic_vmcr; } ;
struct TYPE_5__ {TYPE_1__ vgic_v2; } ;
struct TYPE_6__ {TYPE_2__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;


 int VAR_0 ;

void FUNC_0(struct kvm_vcpu *VAR_1)
{





 VAR_1->arch.vgic_cpu.vgic_v2.vgic_vmcr = 0;


 VAR_1->arch.vgic_cpu.vgic_v2.vgic_hcr = VAR_0;
}
