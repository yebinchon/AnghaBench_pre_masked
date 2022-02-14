
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgic_dist {int lpi_list_lock; int lpi_translation_cache; int lpi_list_head; } ;
struct TYPE_2__ {struct vgic_dist vgic; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct kvm *VAR_0)
{
 struct vgic_dist *VAR_1 = &VAR_0->arch.vgic;

 FUNC_0(&VAR_1->lpi_list_head);
 FUNC_0(&VAR_1->lpi_translation_cache);
 FUNC_1(&VAR_1->lpi_list_lock);
}
