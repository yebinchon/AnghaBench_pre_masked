
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gic_kvm_info {int type; scalar_t__ maint_irq; } ;
struct TYPE_2__ {scalar_t__ maint_irq; int gicv3_cpuif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 struct gic_kvm_info* FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 TYPE_1__ VAR_3 ;
 int FUNC_6 (scalar_t__,int ,char*,int ) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (struct gic_kvm_info const*) ;
 int FUNC_9 (struct gic_kvm_info const*) ;

int FUNC_10(void)
{
 const struct gic_kvm_info *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2();
 if (!VAR_7)
  return -VAR_1;

 if (!VAR_7->maint_irq) {
  FUNC_3("No vgic maintenance irq\n");
  return -VAR_2;
 }

 switch (VAR_7->type) {
 case 129:
  VAR_8 = FUNC_8(VAR_7);
  break;
 case 128:
  VAR_8 = FUNC_9(VAR_7);
  if (!VAR_8) {
   FUNC_7(&VAR_3.gicv3_cpuif);
   FUNC_5("GIC system register CPU interface enabled\n");
  }
  break;
 default:
  VAR_8 = -VAR_1;
 }

 if (VAR_8)
  return VAR_8;

 VAR_3.maint_irq = VAR_7->maint_irq;
 VAR_8 = FUNC_6(VAR_3.maint_irq,
     VAR_6,
     "vgic", FUNC_4());
 if (VAR_8) {
  FUNC_3("Cannot register interrupt %d\n",
   VAR_3.maint_irq);
  return VAR_8;
 }

 VAR_8 = FUNC_0(VAR_0,
    "kvm/arm/vgic:starting",
    VAR_5, VAR_4);
 if (VAR_8) {
  FUNC_3("Cannot register vgic CPU notifier\n");
  goto out_free_irq;
 }

 FUNC_5("vgic interrupt IRQ%d\n", VAR_3.maint_irq);
 return 0;

out_free_irq:
 FUNC_1(VAR_3.maint_irq,
   FUNC_4());
 return VAR_8;
}
