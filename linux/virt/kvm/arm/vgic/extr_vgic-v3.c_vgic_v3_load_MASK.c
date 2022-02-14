
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vgic_v3_cpu_if {struct kvm_vcpu* vgic_vmcr; int vgic_sre; } ;
struct TYPE_3__ {struct vgic_v3_cpu_if vgic_v3; } ;
struct TYPE_4__ {TYPE_1__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(struct kvm_vcpu *VAR_2)
{
 struct vgic_v3_cpu_if *VAR_3 = &VAR_2->arch.vgic_cpu.vgic_v3;






 if (FUNC_3(VAR_3->vgic_sre))
  FUNC_2(VAR_1, VAR_3->vgic_vmcr);

 FUNC_2(VAR_0, VAR_2);

 if (FUNC_1())
  FUNC_0(VAR_2);
}
