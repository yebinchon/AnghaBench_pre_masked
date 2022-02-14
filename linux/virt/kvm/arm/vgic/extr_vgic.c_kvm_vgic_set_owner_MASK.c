
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_irq {void* owner; int irq_lock; } ;
struct kvm_vcpu {int kvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct vgic_irq* FUNC_3 (int ,struct kvm_vcpu*,unsigned int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned int) ;

int FUNC_6(struct kvm_vcpu *VAR_3, unsigned int VAR_4, void *VAR_5)
{
 struct vgic_irq *VAR_6;
 unsigned long VAR_7;
 int VAR_8 = 0;

 if (!FUNC_4(VAR_3->kvm))
  return -VAR_0;


 if (!FUNC_0(VAR_4) && !FUNC_5(VAR_3->kvm, VAR_4))
  return -VAR_2;

 VAR_6 = FUNC_3(VAR_3->kvm, VAR_3, VAR_4);
 FUNC_1(&VAR_6->irq_lock, VAR_7);
 if (VAR_6->owner && VAR_6->owner != VAR_5)
  VAR_8 = -VAR_1;
 else
  VAR_6->owner = VAR_5;
 FUNC_2(&VAR_6->irq_lock, VAR_7);

 return VAR_8;
}
