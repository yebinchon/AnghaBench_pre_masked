
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ap_list_lock; int ap_list_head; } ;
struct TYPE_3__ {TYPE_2__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_1__ arch; int kvm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct kvm_vcpu*) ;

void FUNC_11(struct kvm_vcpu *VAR_0)
{
 FUNC_1(FUNC_10(VAR_0));
 if (FUNC_4(&VAR_0->arch.vgic_cpu.ap_list_head) &&
     !FUNC_9(VAR_0->kvm))
  return;

 FUNC_0(!FUNC_3());

 if (!FUNC_4(&VAR_0->arch.vgic_cpu.ap_list_head)) {
  FUNC_5(&VAR_0->arch.vgic_cpu.ap_list_lock);
  FUNC_7(VAR_0);
  FUNC_6(&VAR_0->arch.vgic_cpu.ap_list_lock);
 }

 if (FUNC_2())
  FUNC_8(VAR_0);
}
