
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct vgic_irq {int host_irq; scalar_t__ hw; int irq_lock; int enabled; int priority; struct kvm_vcpu* target_vcpu; scalar_t__ intid; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {int propbaser; } ;
struct TYPE_4__ {TYPE_1__ vgic; } ;
struct kvm {TYPE_2__ arch; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct kvm*,scalar_t__,int *,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct kvm*,struct vgic_irq*,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct kvm *VAR_1, struct vgic_irq *VAR_2,
        struct kvm_vcpu *VAR_3, bool VAR_4)
{
 u64 VAR_5 = FUNC_0(VAR_1->arch.vgic.propbaser);
 u8 VAR_6;
 int VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_4(VAR_1, VAR_5 + VAR_2->intid - VAR_0,
      &VAR_6, 1);

 if (VAR_7)
  return VAR_7;

 FUNC_5(&VAR_2->irq_lock, VAR_8);

 if (!VAR_3 || VAR_3 == VAR_2->target_vcpu) {
  VAR_2->priority = FUNC_2(VAR_6);
  VAR_2->enabled = FUNC_1(VAR_6);

  if (!VAR_2->hw) {
   FUNC_7(VAR_1, VAR_2, VAR_8);
   return 0;
  }
 }

 FUNC_6(&VAR_2->irq_lock, VAR_8);

 if (VAR_2->hw)
  return FUNC_3(VAR_2->host_irq, VAR_6, VAR_4);

 return 0;
}
