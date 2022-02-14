
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgic_translation_cache_entry {int entry; } ;
struct vgic_dist {int lpi_translation_cache; } ;
struct TYPE_2__ {struct vgic_dist vgic; } ;
struct kvm {int online_vcpus; TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 unsigned int FUNC_2 (int *) ;
 struct vgic_translation_cache_entry* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct kvm *VAR_2)
{
 struct vgic_dist *VAR_3 = &VAR_2->arch.vgic;
 unsigned int VAR_4;
 int VAR_5;

 if (!FUNC_5(&VAR_3->lpi_translation_cache))
  return;

 VAR_4 = FUNC_2(&VAR_2->online_vcpus) * VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  struct vgic_translation_cache_entry *VAR_6;


  VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0);
  if (FUNC_1(!VAR_6))
   break;

  FUNC_0(&VAR_6->entry);
  FUNC_4(&VAR_6->entry, &VAR_3->lpi_translation_cache);
 }
}
