
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vgic_its {int enabled; } ;
struct vgic_irq {int dummy; } ;
struct TYPE_4__ {int lpis_enabled; } ;
struct TYPE_5__ {TYPE_1__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct kvm {int dummy; } ;
struct its_ite {struct vgic_irq* irq; TYPE_3__* collection; } ;
struct TYPE_6__ {int target_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct its_ite* FUNC_0 (struct vgic_its*,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 struct kvm_vcpu* FUNC_2 (struct kvm*,int ) ;
 int FUNC_3 (struct kvm*,struct vgic_its*,int ,int ,struct vgic_irq*) ;

int FUNC_4(struct kvm *VAR_2, struct vgic_its *VAR_3,
    u32 VAR_4, u32 VAR_5, struct vgic_irq **VAR_6)
{
 struct kvm_vcpu *VAR_7;
 struct its_ite *VAR_8;

 if (!VAR_3->enabled)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5);
 if (!VAR_8 || !FUNC_1(VAR_8->collection))
  return VAR_1;

 VAR_7 = FUNC_2(VAR_2, VAR_8->collection->target_addr);
 if (!VAR_7)
  return VAR_1;

 if (!VAR_7->arch.vgic_cpu.lpis_enabled)
  return -VAR_0;

 FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_8->irq);

 *VAR_6 = VAR_8->irq;
 return 0;
}
