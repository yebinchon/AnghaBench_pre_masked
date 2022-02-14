
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgic_cpu {int ap_list_head; int ap_list_lock; } ;
struct TYPE_2__ {struct vgic_cpu vgic_cpu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1)
{
 struct vgic_cpu *VAR_2 = &VAR_1->arch.vgic_cpu;

 FUNC_1(&VAR_2->ap_list_lock);

 FUNC_0(((void*)0), &VAR_2->ap_list_head, VAR_0);
}
