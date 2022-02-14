
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timer_map {scalar_t__ emul_ptimer; TYPE_1__* direct_ptimer; TYPE_1__* direct_vtimer; } ;
struct kvm_vcpu {int dummy; } ;
struct arch_timer_cpu {int enabled; } ;
struct TYPE_3__ {int cntvoff; } ;


 int FUNC_0 (struct kvm_vcpu*,struct timer_map*) ;
 int VAR_0 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int) ;
 struct arch_timer_cpu* FUNC_9 (struct kvm_vcpu*) ;

void FUNC_10(struct kvm_vcpu *VAR_1)
{
 struct arch_timer_cpu *VAR_2 = FUNC_9(VAR_1);
 struct timer_map VAR_3;

 if (FUNC_8(!VAR_2->enabled))
  return;

 FUNC_0(VAR_1, &VAR_3);

 if (FUNC_5(&VAR_0)) {
  FUNC_2(VAR_3.direct_vtimer);
  if (VAR_3.direct_ptimer)
   FUNC_2(VAR_3.direct_ptimer);
 } else {
  FUNC_3(VAR_1);
 }

 FUNC_4(VAR_3.direct_vtimer->cntvoff);

 FUNC_1(VAR_1);

 FUNC_7(VAR_3.direct_vtimer);
 if (VAR_3.direct_ptimer)
  FUNC_7(VAR_3.direct_ptimer);

 if (VAR_3.emul_ptimer)
  FUNC_6(VAR_3.emul_ptimer);
}
