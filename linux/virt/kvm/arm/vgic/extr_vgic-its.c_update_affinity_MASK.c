
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vgic_irq {int host_irq; scalar_t__ hw; int irq_lock; struct kvm_vcpu* target_vcpu; } ;
struct TYPE_4__ {int its_vpe; } ;
struct TYPE_5__ {TYPE_1__ vgic_v3; } ;
struct TYPE_6__ {TYPE_2__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct its_vlpi_map {int * vpe; } ;


 int FUNC_0 (int ,struct its_vlpi_map*) ;
 int FUNC_1 (int ,struct its_vlpi_map*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct vgic_irq *VAR_0, struct kvm_vcpu *VAR_1)
{
 int VAR_2 = 0;
 unsigned long VAR_3;

 FUNC_2(&VAR_0->irq_lock, VAR_3);
 VAR_0->target_vcpu = VAR_1;
 FUNC_3(&VAR_0->irq_lock, VAR_3);

 if (VAR_0->hw) {
  struct its_vlpi_map VAR_4;

  VAR_2 = FUNC_0(VAR_0->host_irq, &VAR_4);
  if (VAR_2)
   return VAR_2;

  VAR_4.vpe = &VAR_1->arch.vgic_cpu.vgic_v3.its_vpe;

  VAR_2 = FUNC_1(VAR_0->host_irq, &VAR_4);
 }

 return VAR_2;
}
