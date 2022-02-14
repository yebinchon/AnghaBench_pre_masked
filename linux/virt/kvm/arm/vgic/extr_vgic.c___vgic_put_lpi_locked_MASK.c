
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgic_irq {int lpi_list; int refcount; } ;
struct vgic_dist {int lpi_list_count; } ;
struct TYPE_2__ {struct vgic_dist vgic; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (struct vgic_irq*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

void FUNC_3(struct kvm *VAR_1, struct vgic_irq *VAR_2)
{
 struct vgic_dist *VAR_3 = &VAR_1->arch.vgic;

 if (!FUNC_1(&VAR_2->refcount, VAR_0))
  return;

 FUNC_2(&VAR_2->lpi_list);
 VAR_3->lpi_list_count--;

 FUNC_0(VAR_2);
}
