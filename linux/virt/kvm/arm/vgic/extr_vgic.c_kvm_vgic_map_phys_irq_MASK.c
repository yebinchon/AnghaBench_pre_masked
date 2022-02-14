
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vgic_irq {int irq_lock; } ;
struct kvm_vcpu {int kvm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*,struct vgic_irq*,unsigned int,int (*) (int)) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct vgic_irq* FUNC_4 (int ,struct kvm_vcpu*,int ) ;
 int FUNC_5 (int ,struct vgic_irq*) ;

int FUNC_6(struct kvm_vcpu *VAR_0, unsigned int VAR_1,
     u32 VAR_2, bool (*VAR_3)(int VAR_4))
{
 struct vgic_irq *VAR_5 = FUNC_4(VAR_0->kvm, VAR_0, VAR_2);
 unsigned long VAR_6;
 int VAR_7;

 FUNC_0(!VAR_5);

 FUNC_2(&VAR_5->irq_lock, VAR_6);
 VAR_7 = FUNC_1(VAR_0, VAR_5, VAR_1, VAR_3);
 FUNC_3(&VAR_5->irq_lock, VAR_6);
 FUNC_5(VAR_0->kvm, VAR_5);

 return VAR_7;
}
