
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct arch_timer_cpu {int bg_timer; } ;


 int FUNC_0 (int *) ;
 struct arch_timer_cpu* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_0)
{
 struct arch_timer_cpu *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->bg_timer);
}
