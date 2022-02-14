
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vgic_v2_cpu_if {int vgic_apr; int vgic_vmcr; } ;
struct TYPE_4__ {struct vgic_v2_cpu_if vgic_v2; } ;
struct TYPE_5__ {TYPE_1__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_6__ {scalar_t__ vctrl_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

void FUNC_1(struct kvm_vcpu *VAR_3)
{
 struct vgic_v2_cpu_if *VAR_4 = &VAR_3->arch.vgic_cpu.vgic_v2;

 FUNC_0(VAR_4->vgic_vmcr,
         VAR_2.vctrl_base + VAR_1);
 FUNC_0(VAR_4->vgic_apr,
         VAR_2.vctrl_base + VAR_0);
}
