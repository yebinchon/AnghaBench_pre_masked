
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct vgic_irq {int active; int irq_lock; int active_source; int intid; scalar_t__ hw; } ;
struct kvm_vcpu {TYPE_3__* kvm; int vcpu_id; } ;
struct TYPE_4__ {scalar_t__ vgic_model; } ;
struct TYPE_5__ {TYPE_1__ vgic; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct kvm_vcpu* FUNC_2 () ;
 int FUNC_3 (struct kvm_vcpu*,struct vgic_irq*,int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,struct vgic_irq*,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_1, struct vgic_irq *VAR_2,
        bool VAR_3)
{
 unsigned long VAR_4;
 struct kvm_vcpu *VAR_5 = FUNC_2();

 FUNC_0(&VAR_2->irq_lock, VAR_4);

 if (VAR_2->hw) {
  FUNC_3(VAR_1, VAR_2, VAR_3, !VAR_5);
 } else {
  u32 VAR_6 = VAR_1->kvm->arch.vgic.vgic_model;
  u8 VAR_7;

  VAR_2->active = VAR_3;
  VAR_7 = (VAR_5) ? VAR_5->vcpu_id : 0;

  if (VAR_6 == VAR_0 &&
      VAR_3 && FUNC_4(VAR_2->intid))
   VAR_2->active_source = VAR_7;
 }

 if (VAR_2->active)
  FUNC_5(VAR_1->kvm, VAR_2, VAR_4);
 else
  FUNC_1(&VAR_2->irq_lock, VAR_4);
}
