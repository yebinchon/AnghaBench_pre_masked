
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgic_irq {int group; int mpidr; int targets; int refcount; struct kvm_vcpu* target_vcpu; int * vcpu; int irq_lock; int ap_list; scalar_t__ intid; } ;
struct vgic_dist {int vgic_model; struct vgic_irq* spis; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {struct vgic_dist vgic; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;


 scalar_t__ VAR_3 ;
 struct vgic_irq* FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (struct vgic_irq*) ;
 int FUNC_3 (int *) ;
 struct kvm_vcpu* FUNC_4 (struct kvm*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct kvm *VAR_4, unsigned int VAR_5)
{
 struct vgic_dist *VAR_6 = &VAR_4->arch.vgic;
 struct kvm_vcpu *VAR_7 = FUNC_4(VAR_4, 0);
 int VAR_8;

 VAR_6->spis = FUNC_1(VAR_5, sizeof(struct vgic_irq), VAR_2);
 if (!VAR_6->spis)
  return -VAR_1;
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  struct vgic_irq *VAR_9 = &VAR_6->spis[VAR_8];

  VAR_9->intid = VAR_8 + VAR_3;
  FUNC_0(&VAR_9->ap_list);
  FUNC_5(&VAR_9->irq_lock);
  VAR_9->vcpu = ((void*)0);
  VAR_9->target_vcpu = VAR_7;
  FUNC_3(&VAR_9->refcount);
  switch (VAR_6->vgic_model) {
  case 129:
   VAR_9->targets = 0;
   VAR_9->group = 0;
   break;
  case 128:
   VAR_9->mpidr = 0;
   VAR_9->group = 1;
   break;
  default:
   FUNC_2(VAR_6->spis);
   return -VAR_0;
  }
 }
 return 0;
}
