
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vgic_v2_cpu_if {int vgic_apr; } ;
struct TYPE_4__ {struct vgic_v2_cpu_if vgic_v2; } ;
struct TYPE_5__ {TYPE_1__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_6__ {scalar_t__ vctrl_base; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct kvm_vcpu*) ;

void FUNC_2(struct kvm_vcpu *VAR_2)
{
 struct vgic_v2_cpu_if *VAR_3 = &VAR_2->arch.vgic_cpu.vgic_v2;

 FUNC_1(VAR_2);
 VAR_3->vgic_apr = FUNC_0(VAR_1.vctrl_base + VAR_0);
}
