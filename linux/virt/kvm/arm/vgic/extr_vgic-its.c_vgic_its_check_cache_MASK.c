
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vgic_irq {int dummy; } ;
struct vgic_dist {int lpi_list_lock; } ;
struct TYPE_2__ {struct vgic_dist vgic; } ;
struct kvm {TYPE_1__ arch; } ;
typedef int phys_addr_t ;


 struct vgic_irq* FUNC_0 (struct vgic_dist*,int ,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static struct vgic_irq *FUNC_3(struct kvm *VAR_0, phys_addr_t VAR_1,
          u32 VAR_2, u32 VAR_3)
{
 struct vgic_dist *VAR_4 = &VAR_0->arch.vgic;
 struct vgic_irq *VAR_5;
 unsigned long VAR_6;

 FUNC_1(&VAR_4->lpi_list_lock, VAR_6);
 VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_4->lpi_list_lock, VAR_6);

 return VAR_5;
}
