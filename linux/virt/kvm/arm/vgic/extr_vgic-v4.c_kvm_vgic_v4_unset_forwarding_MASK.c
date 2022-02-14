
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgic_its {int its_lock; } ;
struct vgic_irq {int hw; int host_irq; } ;
struct TYPE_2__ {int data; int devid; } ;
struct kvm_kernel_irq_routing_entry {TYPE_1__ msi; } ;
struct kvm {int dummy; } ;


 scalar_t__ FUNC_0 (struct vgic_its*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct vgic_its* FUNC_5 (struct kvm*,struct kvm_kernel_irq_routing_entry*) ;
 int FUNC_6 (struct kvm*,struct vgic_its*,int ,int ,struct vgic_irq**) ;
 int FUNC_7 (struct kvm*) ;

int FUNC_8(struct kvm *VAR_0, int VAR_1,
     struct kvm_kernel_irq_routing_entry *VAR_2)
{
 struct vgic_its *VAR_3;
 struct vgic_irq *VAR_4;
 int VAR_5;

 if (!FUNC_7(VAR_0))
  return 0;





 VAR_3 = FUNC_5(VAR_0, VAR_2);
 if (FUNC_0(VAR_3))
  return 0;

 FUNC_3(&VAR_3->its_lock);

 VAR_5 = FUNC_6(VAR_0, VAR_3, VAR_2->msi.devid,
       VAR_2->msi.data, &VAR_4);
 if (VAR_5)
  goto out;

 FUNC_1(!(VAR_4->hw && VAR_4->host_irq == VAR_1));
 if (VAR_4->hw) {
  VAR_4->hw = 0;
  VAR_5 = FUNC_2(VAR_1);
 }

out:
 FUNC_4(&VAR_3->its_lock);
 return VAR_5;
}
