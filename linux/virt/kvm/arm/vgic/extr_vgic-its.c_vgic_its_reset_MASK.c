
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_its {scalar_t__ enabled; scalar_t__ cwriter; scalar_t__ creadr; scalar_t__ cbaser; int baser_device_table; int baser_coll_table; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm*,struct vgic_its*) ;
 int FUNC_1 (struct kvm*,struct vgic_its*) ;

__attribute__((used)) static void FUNC_2(struct kvm *VAR_1, struct vgic_its *VAR_2)
{

 VAR_2->baser_coll_table &= ~VAR_0;
 VAR_2->baser_device_table &= ~VAR_0;
 VAR_2->cbaser = 0;
 VAR_2->creadr = 0;
 VAR_2->cwriter = 0;
 VAR_2->enabled = 0;
 FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_1, VAR_2);
}
