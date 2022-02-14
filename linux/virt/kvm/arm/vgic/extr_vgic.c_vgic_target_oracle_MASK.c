
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vgic_irq {struct kvm_vcpu* target_vcpu; scalar_t__ enabled; scalar_t__ vcpu; scalar_t__ active; int irq_lock; } ;
struct kvm_vcpu {TYPE_3__* kvm; } ;
struct TYPE_4__ {int enabled; } ;
struct TYPE_5__ {TYPE_1__ vgic; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;


 scalar_t__ FUNC_0 (struct vgic_irq*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static struct kvm_vcpu *FUNC_3(struct vgic_irq *VAR_0)
{
 FUNC_1(&VAR_0->irq_lock);


 if (VAR_0->active)
  return VAR_0->vcpu ? : VAR_0->target_vcpu;







 if (VAR_0->enabled && FUNC_0(VAR_0)) {
  if (FUNC_2(VAR_0->target_vcpu &&
        !VAR_0->target_vcpu->kvm->arch.vgic.enabled))
   return ((void*)0);

  return VAR_0->target_vcpu;
 }




 return ((void*)0);
}
