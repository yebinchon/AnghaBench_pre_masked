
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgic_cpu {int ap_list_head; } ;
struct TYPE_2__ {struct vgic_cpu vgic_cpu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct kvm_vcpu *VAR_0)
{
 struct vgic_cpu *VAR_1 = &VAR_0->arch.vgic_cpu;

 FUNC_0(&VAR_1->ap_list_head);
}
