
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_irq {int irq_lock; scalar_t__ active; scalar_t__ hw; } ;
struct kvm_vcpu {int kvm; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct vgic_irq* FUNC_2 (int ,struct kvm_vcpu*,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct vgic_irq*) ;

bool FUNC_5(struct kvm_vcpu *VAR_0, unsigned int VAR_1)
{
 struct vgic_irq *VAR_2;
 bool VAR_3;
 unsigned long VAR_4;

 if (!FUNC_3(VAR_0->kvm))
  return 0;

 VAR_2 = FUNC_2(VAR_0->kvm, VAR_0, VAR_1);
 FUNC_0(&VAR_2->irq_lock, VAR_4);
 VAR_3 = VAR_2->hw && VAR_2->active;
 FUNC_1(&VAR_2->irq_lock, VAR_4);
 FUNC_4(VAR_0->kvm, VAR_2);

 return VAR_3;
}
