
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_map {int emul_ptimer; int direct_ptimer; int direct_vtimer; } ;
struct kvm_vcpu {int dummy; } ;
struct arch_timer_cpu {int bg_timer; } ;


 int FUNC_0 (struct kvm_vcpu*,struct timer_map*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 struct arch_timer_cpu* FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_0)
{
 struct arch_timer_cpu *VAR_1 = FUNC_4(VAR_0);
 struct timer_map VAR_2;

 FUNC_0(VAR_0, &VAR_2);





 if (!FUNC_2(VAR_2.direct_vtimer) &&
     !FUNC_2(VAR_2.direct_ptimer) &&
     !FUNC_2(VAR_2.emul_ptimer))
  return;





 FUNC_3(&VAR_1->bg_timer, FUNC_1(VAR_0));
}
