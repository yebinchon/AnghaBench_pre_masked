
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgic_cpu {scalar_t__ used_lrs; int ap_list_head; } ;
struct TYPE_2__ {struct vgic_cpu vgic_cpu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;

void FUNC_7(struct kvm_vcpu *VAR_0)
{
 struct vgic_cpu *VAR_1 = &VAR_0->arch.vgic_cpu;

 FUNC_0(FUNC_6(VAR_0));


 if (FUNC_2(&VAR_0->arch.vgic_cpu.ap_list_head))
  return;

 if (FUNC_1())
  FUNC_5(VAR_0);

 if (VAR_1->used_lrs)
  FUNC_3(VAR_0);
 FUNC_4(VAR_0);
}
