
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int kvm; } ;
struct arch_timer_cpu {int enabled; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 struct arch_timer_cpu* FUNC_3 (struct kvm_vcpu*) ;

void FUNC_4(struct kvm_vcpu *VAR_0)
{
 struct arch_timer_cpu *VAR_1 = FUNC_3(VAR_0);

 if (FUNC_1(!VAR_1->enabled))
  return;

 if (FUNC_1(!FUNC_0(VAR_0->kvm)))
  FUNC_2(VAR_0);
}
