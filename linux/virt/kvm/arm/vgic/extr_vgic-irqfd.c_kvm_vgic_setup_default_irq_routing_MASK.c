
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vgic_dist {int nr_spis; } ;
struct TYPE_4__ {int pin; scalar_t__ irqchip; } ;
struct TYPE_5__ {TYPE_1__ irqchip; } ;
struct kvm_irq_routing_entry {int gsi; TYPE_2__ u; int type; } ;
struct TYPE_6__ {struct vgic_dist vgic; } ;
struct kvm {TYPE_3__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct kvm_irq_routing_entry* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct kvm_irq_routing_entry*) ;
 int FUNC_2 (struct kvm*,struct kvm_irq_routing_entry*,int,int ) ;

int FUNC_3(struct kvm *VAR_3)
{
 struct kvm_irq_routing_entry *VAR_4;
 struct vgic_dist *VAR_5 = &VAR_3->arch.vgic;
 u32 VAR_6 = VAR_5->nr_spis;
 int VAR_7, VAR_8;

 VAR_4 = FUNC_0(VAR_6, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_4[VAR_7].gsi = VAR_7;
  VAR_4[VAR_7].type = VAR_2;
  VAR_4[VAR_7].u.irqchip.irqchip = 0;
  VAR_4[VAR_7].u.irqchip.pin = VAR_7;
 }
 VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_6, 0);
 FUNC_1(VAR_4);
 return VAR_8;
}
