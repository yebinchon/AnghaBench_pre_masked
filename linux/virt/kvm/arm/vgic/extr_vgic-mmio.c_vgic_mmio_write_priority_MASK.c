
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vgic_irq {unsigned long priority; int irq_lock; } ;
struct kvm_vcpu {int kvm; } ;
typedef int gpa_t ;


 unsigned long FUNC_0 (int,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct vgic_irq* FUNC_4 (int ,struct kvm_vcpu*,scalar_t__) ;
 int FUNC_5 (int ,struct vgic_irq*) ;

void FUNC_6(struct kvm_vcpu *VAR_1,
         gpa_t VAR_2, unsigned int VAR_3,
         unsigned long VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_2, 8);
 int VAR_6;
 unsigned long VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  struct vgic_irq *VAR_8 = FUNC_4(VAR_1->kvm, VAR_1, VAR_5 + VAR_6);

  FUNC_2(&VAR_8->irq_lock, VAR_7);

  VAR_8->priority = (VAR_4 >> (VAR_6 * 8)) & FUNC_0(7, 8 - VAR_0);
  FUNC_3(&VAR_8->irq_lock, VAR_7);

  FUNC_5(VAR_1->kvm, VAR_8);
 }
}
