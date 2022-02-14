
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vgic_irq {int intid; int active_source; int hwintid; scalar_t__ config; int pending_latch; int source; int line_level; int priority; scalar_t__ active; scalar_t__ hw; scalar_t__ group; } ;
struct TYPE_4__ {int* vgic_lr; } ;
struct TYPE_5__ {TYPE_1__ vgic_v2; } ;
struct TYPE_6__ {TYPE_2__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int,char*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct vgic_irq*) ;
 scalar_t__ FUNC_3 (struct vgic_irq*) ;
 scalar_t__ FUNC_4 (struct vgic_irq*) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct kvm_vcpu *VAR_9, struct vgic_irq *VAR_10, int VAR_11)
{
 u32 VAR_12 = VAR_10->intid;
 bool VAR_13 = 1;

 if (VAR_10->active) {
  VAR_12 |= VAR_0;
  if (FUNC_5(VAR_10->intid))
   VAR_12 |= VAR_10->active_source << VAR_5;
  if (FUNC_4(VAR_10)) {
   VAR_13 = 0;
   VAR_12 |= VAR_1;
  }
 }

 if (VAR_10->group)
  VAR_12 |= VAR_2;

 if (VAR_10->hw) {
  VAR_12 |= VAR_3;
  VAR_12 |= VAR_10->hwintid << VAR_5;





  if (VAR_10->active)
   VAR_13 = 0;
 } else {
  if (VAR_10->config == VAR_8) {
   VAR_12 |= VAR_1;





   if (VAR_10->active)
    VAR_13 = 0;
  }
 }

 if (VAR_13 && FUNC_2(VAR_10)) {
  VAR_12 |= VAR_4;

  if (VAR_10->config == VAR_7)
   VAR_10->pending_latch = 0;

  if (FUNC_5(VAR_10->intid)) {
   u32 VAR_14 = FUNC_1(VAR_10->source);

   if (FUNC_0(!VAR_14, "No SGI source for INTID %d\n",
        VAR_10->intid))
    return;

   VAR_12 |= (VAR_14 - 1) << VAR_5;
   VAR_10->source &= ~(1 << (VAR_14 - 1));
   if (VAR_10->source) {
    VAR_10->pending_latch = 1;
    VAR_12 |= VAR_1;
   }
  }
 }







 if (FUNC_3(VAR_10) && (VAR_12 & VAR_4))
  VAR_10->line_level = 0;


 VAR_12 |= (VAR_10->priority >> 3) << VAR_6;

 VAR_9->arch.vgic_cpu.vgic_v2.vgic_lr[VAR_11] = VAR_12;
}
