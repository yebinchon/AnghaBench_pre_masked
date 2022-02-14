
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_map {TYPE_1__* emul_ptimer; scalar_t__ direct_ptimer; scalar_t__ direct_vtimer; } ;
struct kvm_vcpu {int dummy; } ;
struct arch_timer_cpu {int enabled; } ;
struct TYPE_2__ {int hrtimer; } ;


 int FUNC_0 (struct kvm_vcpu*,struct timer_map*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 struct arch_timer_cpu* FUNC_8 (struct kvm_vcpu*) ;

void FUNC_9(struct kvm_vcpu *VAR_0)
{
 struct arch_timer_cpu *VAR_1 = FUNC_8(VAR_0);
 struct timer_map VAR_2;

 if (FUNC_7(!VAR_1->enabled))
  return;

 FUNC_0(VAR_0, &VAR_2);

 FUNC_6(VAR_2.direct_vtimer);
 if (VAR_2.direct_ptimer)
  FUNC_6(VAR_2.direct_ptimer);
 if (VAR_2.emul_ptimer)
  FUNC_4(&VAR_2.emul_ptimer->hrtimer);

 if (FUNC_5(FUNC_1(VAR_0)))
  FUNC_2(VAR_0);
 FUNC_3(0);
}
