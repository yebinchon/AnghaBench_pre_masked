
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int irq; } ;
struct TYPE_6__ {TYPE_1__ its_vpe; } ;
struct TYPE_7__ {TYPE_2__ vgic_v3; } ;
struct TYPE_8__ {TYPE_3__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_4__ arch; int kvm; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(struct kvm_vcpu *VAR_0)
{
 if (FUNC_1(VAR_0->kvm)) {
  int VAR_1 = VAR_0->arch.vgic_cpu.vgic_v3.its_vpe.irq;
  if (VAR_1)
   FUNC_0(VAR_1);
 }
}
