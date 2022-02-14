
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct vgic_v3_cpu_if {scalar_t__* vgic_lr; int vgic_hcr; } ;
struct vgic_irq {int active; scalar_t__ config; int pending_latch; int source; int irq_lock; int line_level; scalar_t__ active_source; } ;
struct vgic_cpu {int used_lrs; struct vgic_v3_cpu_if vgic_v3; } ;
struct TYPE_8__ {struct vgic_cpu vgic_cpu; } ;
struct kvm_vcpu {TYPE_4__* kvm; TYPE_1__ arch; } ;
struct TYPE_9__ {scalar_t__ vgic_model; } ;
struct TYPE_10__ {TYPE_2__ vgic; } ;
struct TYPE_11__ {TYPE_3__ arch; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_4__*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct vgic_irq* FUNC_6 (TYPE_4__*,struct kvm_vcpu*,scalar_t__) ;
 int FUNC_7 (struct vgic_irq*) ;
 scalar_t__ FUNC_8 (struct vgic_irq*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct vgic_irq*,int) ;
 int FUNC_11 (TYPE_4__*,struct vgic_irq*) ;
 scalar_t__ FUNC_12 (TYPE_4__*,scalar_t__) ;

void FUNC_13(struct kvm_vcpu *VAR_12)
{
 struct vgic_cpu *VAR_13 = &VAR_12->arch.vgic_cpu;
 struct vgic_v3_cpu_if *VAR_14 = &VAR_13->vgic_v3;
 u32 VAR_15 = VAR_12->kvm->arch.vgic.vgic_model;
 int VAR_16;

 FUNC_0(!FUNC_1());

 VAR_14->vgic_hcr &= ~VAR_3;

 for (VAR_16 = 0; VAR_16 < VAR_13->used_lrs; VAR_16++) {
  u64 VAR_17 = VAR_14->vgic_lr[VAR_16];
  u32 VAR_18, VAR_19;
  struct vgic_irq *VAR_20;
  bool VAR_21 = 0;

  VAR_19 = VAR_17 & VAR_0;
  VAR_19 >>= VAR_1;

  if (VAR_15 == VAR_8) {
   VAR_18 = VAR_17 & VAR_7;
  } else {
   VAR_18 = VAR_17 & VAR_2;
   VAR_21 = FUNC_9(VAR_18);
  }


  if (FUNC_3(VAR_17) && FUNC_12(VAR_12->kvm, VAR_18))
   FUNC_2(VAR_12->kvm, 0,
          VAR_18 - VAR_11);

  VAR_20 = FUNC_6(VAR_12->kvm, VAR_12, VAR_18);
  if (!VAR_20)
   continue;

  FUNC_4(&VAR_20->irq_lock);


  VAR_20->active = !!(VAR_17 & VAR_4);

  if (VAR_20->active && VAR_21)
   VAR_20->active_source = VAR_19;


  if (VAR_20->config == VAR_9 &&
      (VAR_17 & VAR_5)) {
   VAR_20->pending_latch = 1;

   if (VAR_21)
    VAR_20->source |= (1 << VAR_19);
  }




  if (VAR_20->config == VAR_10 && !(VAR_17 & VAR_6))
   VAR_20->pending_latch = 0;
  if (FUNC_8(VAR_20) && (VAR_17 & VAR_5)) {
   VAR_20->line_level = FUNC_7(VAR_20);

   if (!VAR_20->line_level)
    FUNC_10(VAR_20, 0);
  }

  FUNC_5(&VAR_20->irq_lock);
  FUNC_11(VAR_12->kvm, VAR_20);
 }

 VAR_13->used_lrs = 0;
}
