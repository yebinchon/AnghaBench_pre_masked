
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vgic_irq {int active; int pending_latch; int line_level; int irq_lock; int hw; } ;
struct kvm_vcpu {int kvm; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct vgic_irq* FUNC_2 (int ,struct kvm_vcpu*,int ) ;
 int FUNC_3 (int ,struct vgic_irq*) ;

void FUNC_4(struct kvm_vcpu *VAR_0, u32 VAR_1)
{
 struct vgic_irq *VAR_2 = FUNC_2(VAR_0->kvm, VAR_0, VAR_1);
 unsigned long VAR_3;

 if (!VAR_2->hw)
  goto out;

 FUNC_0(&VAR_2->irq_lock, VAR_3);
 VAR_2->active = 0;
 VAR_2->pending_latch = 0;
 VAR_2->line_level = 0;
 FUNC_1(&VAR_2->irq_lock, VAR_3);
out:
 FUNC_3(VAR_0->kvm, VAR_2);
}
