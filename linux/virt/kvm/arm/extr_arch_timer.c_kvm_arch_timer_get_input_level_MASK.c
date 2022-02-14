
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int irq; } ;
struct arch_timer_context {TYPE_1__ irq; } ;


 int FUNC_0 () ;
 struct kvm_vcpu* FUNC_1 () ;
 int FUNC_2 (struct arch_timer_context*) ;
 struct arch_timer_context* FUNC_3 (struct kvm_vcpu*) ;
 struct arch_timer_context* FUNC_4 (struct kvm_vcpu*) ;

bool FUNC_5(int VAR_0)
{
 struct kvm_vcpu *VAR_1 = FUNC_1();
 struct arch_timer_context *VAR_2;

 if (VAR_0 == FUNC_4(VAR_1)->irq.irq)
  VAR_2 = FUNC_4(VAR_1);
 else if (VAR_0 == FUNC_3(VAR_1)->irq.irq)
  VAR_2 = FUNC_3(VAR_1);
 else
  FUNC_0();

 return FUNC_2(VAR_2);
}
