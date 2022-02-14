
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vgic_irq {int irq_lock; int config; } ;
struct kvm_vcpu {int kvm; } ;
typedef int gpa_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int,unsigned long*) ;
 struct vgic_irq* FUNC_4 (int ,struct kvm_vcpu*,scalar_t__) ;
 int FUNC_5 (int ,struct vgic_irq*) ;

void FUNC_6(struct kvm_vcpu *VAR_3,
       gpa_t VAR_4, unsigned int VAR_5,
       unsigned long VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_4, 2);
 int VAR_8;
 unsigned long VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_5 * 4; VAR_8++) {
  struct vgic_irq *VAR_10;







  if (VAR_7 + VAR_8 < VAR_2)
   continue;

  VAR_10 = FUNC_4(VAR_3->kvm, VAR_3, VAR_7 + VAR_8);
  FUNC_1(&VAR_10->irq_lock, VAR_9);

  if (FUNC_3(VAR_8 * 2 + 1, &VAR_6))
   VAR_10->config = VAR_0;
  else
   VAR_10->config = VAR_1;

  FUNC_2(&VAR_10->irq_lock, VAR_9);
  FUNC_5(VAR_3->kvm, VAR_10);
 }
}
