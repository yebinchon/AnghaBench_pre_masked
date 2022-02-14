
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct vgic_irq {scalar_t__ intid; scalar_t__ active_source; scalar_t__ config; int pending_latch; int source; int line_level; scalar_t__ priority; scalar_t__ group; scalar_t__ active; scalar_t__ hwintid; scalar_t__ hw; } ;
struct TYPE_10__ {scalar_t__* vgic_lr; } ;
struct TYPE_11__ {TYPE_4__ vgic_v3; } ;
struct TYPE_12__ {TYPE_5__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_6__ arch; TYPE_3__* kvm; } ;
struct TYPE_7__ {scalar_t__ vgic_model; } ;
struct TYPE_8__ {TYPE_1__ vgic; } ;
struct TYPE_9__ {TYPE_2__ arch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct vgic_irq*) ;
 scalar_t__ FUNC_3 (struct vgic_irq*) ;
 scalar_t__ FUNC_4 (struct vgic_irq*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

void FUNC_6(struct kvm_vcpu *VAR_11, struct vgic_irq *VAR_12, int VAR_13)
{
 u32 VAR_14 = VAR_11->kvm->arch.vgic.vgic_model;
 u64 VAR_15 = VAR_12->intid;
 bool VAR_16 = 1, VAR_17;

 VAR_17 = (FUNC_5(VAR_12->intid) &&
       VAR_14 == VAR_8);

 if (VAR_12->active) {
  VAR_15 |= VAR_1;
  if (VAR_17)
   VAR_15 |= VAR_12->active_source << VAR_0;
  if (FUNC_4(VAR_12)) {
   VAR_16 = 0;
   VAR_15 |= VAR_2;
  }
 }

 if (VAR_12->hw) {
  VAR_15 |= VAR_4;
  VAR_15 |= ((u64)VAR_12->hwintid) << VAR_6;





  if (VAR_12->active)
   VAR_16 = 0;
 } else {
  if (VAR_12->config == VAR_10) {
   VAR_15 |= VAR_2;





   if (VAR_12->active)
    VAR_16 = 0;
  }
 }

 if (VAR_16 && FUNC_2(VAR_12)) {
  VAR_15 |= VAR_5;

  if (VAR_12->config == VAR_9)
   VAR_12->pending_latch = 0;

  if (FUNC_5(VAR_12->intid) &&
      VAR_14 == VAR_8) {
   u32 VAR_18 = FUNC_1(VAR_12->source);

   if (FUNC_0(!VAR_18, "No SGI source for INTID %d\n",
        VAR_12->intid))
    return;

   VAR_15 |= (VAR_18 - 1) << VAR_0;
   VAR_12->source &= ~(1 << (VAR_18 - 1));
   if (VAR_12->source) {
    VAR_12->pending_latch = 1;
    VAR_15 |= VAR_2;
   }
  }
 }







 if (FUNC_3(VAR_12) && (VAR_15 & VAR_5))
  VAR_12->line_level = 0;

 if (VAR_12->group)
  VAR_15 |= VAR_3;

 VAR_15 |= (u64)VAR_12->priority << VAR_7;

 VAR_11->arch.vgic_cpu.vgic_v3.vgic_lr[VAR_13] = VAR_15;
}
