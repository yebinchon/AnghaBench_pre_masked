
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int u64 ;
typedef int u32 ;
struct vgic_irq {int line_level; int irq_lock; } ;
struct kvm_vcpu {TYPE_3__* kvm; } ;
struct TYPE_6__ {int nr_spis; } ;
struct TYPE_7__ {TYPE_1__ vgic; } ;
struct TYPE_8__ {TYPE_2__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct vgic_irq* FUNC_2 (TYPE_3__*,struct kvm_vcpu*,int) ;
 int FUNC_3 (TYPE_3__*,struct vgic_irq*) ;
 int FUNC_4 (TYPE_3__*,struct vgic_irq*,unsigned long) ;

void FUNC_5(struct kvm_vcpu *VAR_2, u32 VAR_3,
        const u64 VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_2->kvm->arch.vgic.nr_spis + VAR_0;
 unsigned long VAR_7;

 for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
  struct vgic_irq *VAR_8;
  bool VAR_9;

  if ((VAR_3 + VAR_5) < VAR_1 || (VAR_3 + VAR_5) >= VAR_6)
   continue;

  VAR_8 = FUNC_2(VAR_2->kvm, VAR_2, VAR_3 + VAR_5);






  VAR_9 = !!(VAR_4 & (1U << VAR_5));
  FUNC_0(&VAR_8->irq_lock, VAR_7);
  VAR_8->line_level = VAR_9;
  if (VAR_9)
   FUNC_4(VAR_2->kvm, VAR_8, VAR_7);
  else
   FUNC_1(&VAR_8->irq_lock, VAR_7);

  FUNC_3(VAR_2->kvm, VAR_8);
 }
}
