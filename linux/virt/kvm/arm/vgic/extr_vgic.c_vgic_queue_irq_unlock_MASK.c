
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vgic_irq {int irq_lock; struct kvm_vcpu* vcpu; int ap_list; } ;
struct TYPE_3__ {int ap_list_lock; int ap_list_head; } ;
struct TYPE_4__ {TYPE_1__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct vgic_irq*) ;
 struct kvm_vcpu* FUNC_10 (struct vgic_irq*) ;

bool FUNC_11(struct kvm *VAR_1, struct vgic_irq *VAR_2,
      unsigned long VAR_3)
{
 struct kvm_vcpu *VAR_4;

 FUNC_3(&VAR_2->irq_lock);

retry:
 VAR_4 = FUNC_10(VAR_2);
 if (VAR_2->vcpu || !VAR_4) {
  FUNC_7(&VAR_2->irq_lock, VAR_3);
  if (VAR_4) {
   FUNC_0(VAR_0, VAR_4);
   FUNC_1(VAR_4);
  }
  return 0;
 }





 FUNC_7(&VAR_2->irq_lock, VAR_3);



 FUNC_5(&VAR_4->arch.vgic_cpu.ap_list_lock, VAR_3);
 FUNC_4(&VAR_2->irq_lock);
 if (FUNC_8(VAR_2->vcpu || VAR_4 != FUNC_10(VAR_2))) {
  FUNC_6(&VAR_2->irq_lock);
  FUNC_7(&VAR_4->arch.vgic_cpu.ap_list_lock,
        VAR_3);

  FUNC_5(&VAR_2->irq_lock, VAR_3);
  goto retry;
 }





 FUNC_9(VAR_2);
 FUNC_2(&VAR_2->ap_list, &VAR_4->arch.vgic_cpu.ap_list_head);
 VAR_2->vcpu = VAR_4;

 FUNC_6(&VAR_2->irq_lock);
 FUNC_7(&VAR_4->arch.vgic_cpu.ap_list_lock, VAR_3);

 FUNC_0(VAR_0, VAR_4);
 FUNC_1(VAR_4);

 return 1;
}
