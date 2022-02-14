
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_irq {int irq_lock; } ;
struct kvm_vcpu {int kvm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct vgic_irq*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct vgic_irq* FUNC_4 (int ,struct kvm_vcpu*,unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct vgic_irq*) ;

int FUNC_7(struct kvm_vcpu *VAR_1, unsigned int VAR_2)
{
 struct vgic_irq *VAR_3;
 unsigned long VAR_4;

 if (!FUNC_5(VAR_1->kvm))
  return -VAR_0;

 VAR_3 = FUNC_4(VAR_1->kvm, VAR_1, VAR_2);
 FUNC_0(!VAR_3);

 FUNC_2(&VAR_3->irq_lock, VAR_4);
 FUNC_1(VAR_3);
 FUNC_3(&VAR_3->irq_lock, VAR_4);
 FUNC_6(VAR_1->kvm, VAR_3);

 return 0;
}
