
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vgic_v2_cpu_if {int* vgic_lr; int vgic_hcr; } ;
struct vgic_irq {int active; int active_source; scalar_t__ config; int pending_latch; int source; int irq_lock; int line_level; } ;
struct vgic_cpu {int used_lrs; struct vgic_v2_cpu_if vgic_v2; } ;
struct TYPE_2__ {struct vgic_cpu vgic_cpu; } ;
struct kvm_vcpu {int kvm; TYPE_1__ arch; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct vgic_irq* FUNC_6 (int ,struct kvm_vcpu*,int) ;
 int FUNC_7 (struct vgic_irq*) ;
 scalar_t__ FUNC_8 (struct vgic_irq*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct vgic_irq*,int) ;
 int FUNC_11 (int ,struct vgic_irq*) ;
 scalar_t__ FUNC_12 (int ,int) ;

void FUNC_13(struct kvm_vcpu *VAR_10)
{
 struct vgic_cpu *VAR_11 = &VAR_10->arch.vgic_cpu;
 struct vgic_v2_cpu_if *VAR_12 = &VAR_11->vgic_v2;
 int VAR_13;

 FUNC_0(!FUNC_1());

 VAR_12->vgic_hcr &= ~VAR_0;

 for (VAR_13 = 0; VAR_13 < VAR_11->used_lrs; VAR_13++) {
  u32 VAR_14 = VAR_12->vgic_lr[VAR_13];
  u32 VAR_15, VAR_16 = VAR_14 & VAR_6;
  struct vgic_irq *VAR_17;


  VAR_15 = VAR_14 & VAR_3;
  VAR_15 >>= VAR_4;
  VAR_15 &= 7;


  if (FUNC_3(VAR_14) && FUNC_12(VAR_10->kvm, VAR_16))
   FUNC_2(VAR_10->kvm, 0,
          VAR_16 - VAR_9);

  VAR_17 = FUNC_6(VAR_10->kvm, VAR_10, VAR_16);

  FUNC_4(&VAR_17->irq_lock);


  VAR_17->active = !!(VAR_14 & VAR_1);

  if (VAR_17->active && FUNC_9(VAR_16))
   VAR_17->active_source = VAR_15;


  if (VAR_17->config == VAR_7 &&
      (VAR_14 & VAR_2)) {
   VAR_17->pending_latch = 1;

   if (FUNC_9(VAR_16))
    VAR_17->source |= (1 << VAR_15);
  }




  if (VAR_17->config == VAR_8 && !(VAR_14 & VAR_5))
   VAR_17->pending_latch = 0;
  if (FUNC_8(VAR_17) && (VAR_14 & VAR_2)) {
   VAR_17->line_level = FUNC_7(VAR_17);

   if (!VAR_17->line_level)
    FUNC_10(VAR_17, 0);
  }

  FUNC_5(&VAR_17->irq_lock);
  FUNC_11(VAR_10->kvm, VAR_17);
 }

 VAR_11->used_lrs = 0;
}
