
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_irq {unsigned long mpidr; int irq_lock; int target_vcpu; } ;
struct kvm_vcpu {int kvm; } ;
typedef int gpa_t ;


 unsigned long FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct vgic_irq* FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,struct vgic_irq*) ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_0,
        gpa_t VAR_1, unsigned int VAR_2,
        unsigned long VAR_3)
{
 int VAR_4 = FUNC_1(VAR_1, 64);
 struct vgic_irq *VAR_5;
 unsigned long VAR_6;


 if (VAR_1 & 4)
  return;

 VAR_5 = FUNC_5(VAR_0->kvm, ((void*)0), VAR_4);

 if (!VAR_5)
  return;

 FUNC_3(&VAR_5->irq_lock, VAR_6);


 VAR_5->mpidr = VAR_3 & FUNC_0(23, 0);
 VAR_5->target_vcpu = FUNC_2(VAR_0->kvm, VAR_5->mpidr);

 FUNC_4(&VAR_5->irq_lock, VAR_6);
 FUNC_6(VAR_0->kvm, VAR_5);
}
