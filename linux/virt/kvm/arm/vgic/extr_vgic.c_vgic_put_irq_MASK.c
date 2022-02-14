
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgic_irq {scalar_t__ intid; } ;
struct vgic_dist {int lpi_list_lock; } ;
struct TYPE_2__ {struct vgic_dist vgic; } ;
struct kvm {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kvm*,struct vgic_irq*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct kvm *VAR_1, struct vgic_irq *VAR_2)
{
 struct vgic_dist *VAR_3 = &VAR_1->arch.vgic;
 unsigned long VAR_4;

 if (VAR_2->intid < VAR_0)
  return;

 FUNC_1(&VAR_3->lpi_list_lock, VAR_4);
 FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_3->lpi_list_lock, VAR_4);
}
