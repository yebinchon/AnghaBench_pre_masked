
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vgic_irq {int pending_latch; int irq_lock; } ;
struct kvm_vcpu {int kvm; } ;
typedef int gpa_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int,unsigned long*) ;
 struct vgic_irq* FUNC_4 (int ,struct kvm_vcpu*,scalar_t__) ;
 int FUNC_5 (int ,struct vgic_irq*) ;
 int FUNC_6 (int ,struct vgic_irq*,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu *VAR_0,
      gpa_t VAR_1, unsigned int VAR_2,
      unsigned long VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_1, 1);
 int VAR_5;
 unsigned long VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2 * 8; VAR_5++) {
  struct vgic_irq *VAR_7 = FUNC_4(VAR_0->kvm, VAR_0, VAR_4 + VAR_5);

  FUNC_1(&VAR_7->irq_lock, VAR_6);
  if (FUNC_3(VAR_5, &VAR_3)) {





   VAR_7->pending_latch = 1;
   FUNC_6(VAR_0->kvm, VAR_7, VAR_6);
  } else {
   VAR_7->pending_latch = 0;
   FUNC_2(&VAR_7->irq_lock, VAR_6);
  }

  FUNC_5(VAR_0->kvm, VAR_7);
 }

 return 0;
}
