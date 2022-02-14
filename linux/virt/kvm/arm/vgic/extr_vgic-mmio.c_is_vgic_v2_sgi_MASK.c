
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vgic_irq {int intid; } ;
struct kvm_vcpu {TYPE_3__* kvm; } ;
struct TYPE_4__ {scalar_t__ vgic_model; } ;
struct TYPE_5__ {TYPE_1__ vgic; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct kvm_vcpu *VAR_1, struct vgic_irq *VAR_2)
{
 return (FUNC_0(VAR_2->intid) &&
  VAR_1->kvm->arch.vgic.vgic_model == VAR_0);
}
