
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct vgic_irq {int intid; int pending_latch; int irq_lock; struct kvm_vcpu* target_vcpu; } ;
struct TYPE_3__ {int pendbaser; } ;
struct TYPE_4__ {TYPE_1__ vgic_cpu; } ;
struct kvm_vcpu {int kvm; TYPE_2__ arch; } ;
struct kvm {int dummy; } ;
typedef scalar_t__ gpa_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kvm*,scalar_t__,int*,int) ;
 int FUNC_2 (struct kvm*,scalar_t__,int*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,struct vgic_irq*,unsigned long) ;

int FUNC_6(struct kvm *VAR_1, struct vgic_irq *VAR_2)
{
 struct kvm_vcpu *VAR_3;
 int VAR_4, VAR_5;
 gpa_t VAR_6, VAR_7;
 bool VAR_8;
 u8 VAR_9;
 int VAR_10;
 unsigned long VAR_11;

retry:
 VAR_3 = VAR_2->target_vcpu;
 if (!VAR_3)
  return 0;

 VAR_6 = FUNC_0(VAR_3->arch.vgic_cpu.pendbaser);

 VAR_4 = VAR_2->intid / VAR_0;
 VAR_5 = VAR_2->intid % VAR_0;
 VAR_7 = VAR_6 + VAR_4;

 VAR_10 = FUNC_1(VAR_1, VAR_7, &VAR_9, 1);
 if (VAR_10)
  return VAR_10;

 VAR_8 = VAR_9 & (1 << VAR_5);

 FUNC_3(&VAR_2->irq_lock, VAR_11);
 if (VAR_2->target_vcpu != VAR_3) {
  FUNC_4(&VAR_2->irq_lock, VAR_11);
  goto retry;
 }
 VAR_2->pending_latch = VAR_8;
 FUNC_5(VAR_3->kvm, VAR_2, VAR_11);

 if (VAR_8) {

  VAR_9 &= ~(1 << VAR_5);
  VAR_10 = FUNC_2(VAR_1, VAR_7, &VAR_9, 1);
  if (VAR_10)
   return VAR_10;
 }
 return 0;
}
