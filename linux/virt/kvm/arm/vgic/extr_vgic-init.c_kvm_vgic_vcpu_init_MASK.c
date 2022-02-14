
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vgic_irq {int intid; int enabled; int config; int refcount; struct kvm_vcpu* target_vcpu; int * vcpu; int irq_lock; int ap_list; } ;
struct vgic_dist {scalar_t__ vgic_model; } ;
struct TYPE_7__ {int base_addr; } ;
struct vgic_cpu {struct vgic_irq* private_irqs; int ap_list_lock; int ap_list_head; TYPE_3__ rd_iodev; } ;
struct TYPE_5__ {struct vgic_cpu vgic_cpu; } ;
struct kvm_vcpu {TYPE_4__* kvm; TYPE_1__ arch; } ;
struct TYPE_6__ {struct vgic_dist vgic; } ;
struct TYPE_8__ {int lock; TYPE_2__ arch; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct kvm_vcpu*) ;

int FUNC_8(struct kvm_vcpu *VAR_5)
{
 struct vgic_cpu *VAR_6 = &VAR_5->arch.vgic_cpu;
 struct vgic_dist *VAR_7 = &VAR_5->kvm->arch.vgic;
 int VAR_8 = 0;
 int VAR_9;

 VAR_6->rd_iodev.base_addr = VAR_1;

 FUNC_0(&VAR_6->ap_list_head);
 FUNC_5(&VAR_6->ap_list_lock);





 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  struct vgic_irq *VAR_10 = &VAR_6->private_irqs[VAR_9];

  FUNC_0(&VAR_10->ap_list);
  FUNC_5(&VAR_10->irq_lock);
  VAR_10->intid = VAR_9;
  VAR_10->vcpu = ((void*)0);
  VAR_10->target_vcpu = VAR_5;
  FUNC_2(&VAR_10->refcount);
  if (FUNC_6(VAR_9)) {

   VAR_10->enabled = 1;
   VAR_10->config = VAR_2;
  } else {

   VAR_10->config = VAR_3;
  }
 }

 if (!FUNC_1(VAR_5->kvm))
  return 0;





 if (VAR_7->vgic_model == VAR_0) {
  FUNC_3(&VAR_5->kvm->lock);
  VAR_8 = FUNC_7(VAR_5);
  FUNC_4(&VAR_5->kvm->lock);
 }
 return VAR_8;
}
