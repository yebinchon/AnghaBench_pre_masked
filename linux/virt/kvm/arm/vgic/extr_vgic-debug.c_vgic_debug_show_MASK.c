
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vgic_state_iter {scalar_t__ dist_id; scalar_t__ vcpu_id; scalar_t__ nr_cpus; int intid; } ;
struct vgic_irq {int irq_lock; } ;
struct seq_file {scalar_t__ private; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {int initialized; } ;
struct TYPE_3__ {TYPE_2__ vgic; } ;
struct kvm {TYPE_1__ arch; } ;


 struct kvm_vcpu* FUNC_0 (struct kvm*,scalar_t__) ;
 int FUNC_1 (struct seq_file*,TYPE_2__*) ;
 int FUNC_2 (struct seq_file*,struct vgic_irq*,struct kvm_vcpu*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct seq_file*,char*,int ) ;
 struct vgic_irq* FUNC_6 (struct kvm*,struct kvm_vcpu*,int ) ;
 int FUNC_7 (struct kvm*,struct vgic_irq*) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_0, void *VAR_1)
{
 struct kvm *VAR_2 = (struct kvm *)VAR_0->private;
 struct vgic_state_iter *VAR_3 = (struct vgic_state_iter *)VAR_1;
 struct vgic_irq *VAR_4;
 struct kvm_vcpu *VAR_5 = ((void*)0);
 unsigned long VAR_6;

 if (VAR_3->dist_id == 0) {
  FUNC_1(VAR_0, &VAR_2->arch.vgic);
  return 0;
 }

 if (!VAR_2->arch.vgic.initialized)
  return 0;

 if (VAR_3->vcpu_id < VAR_3->nr_cpus)
  VAR_5 = FUNC_0(VAR_2, VAR_3->vcpu_id);

 VAR_4 = FUNC_6(VAR_2, VAR_5, VAR_3->intid);
 if (!VAR_4) {
  FUNC_5(VAR_0, "       LPI %4d freed\n", VAR_3->intid);
  return 0;
 }

 FUNC_3(&VAR_4->irq_lock, VAR_6);
 FUNC_2(VAR_0, VAR_4, VAR_5);
 FUNC_4(&VAR_4->irq_lock, VAR_6);

 FUNC_7(VAR_2, VAR_4);
 return 0;
}
