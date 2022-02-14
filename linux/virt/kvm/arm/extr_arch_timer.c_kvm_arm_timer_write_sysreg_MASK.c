
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
typedef enum kvm_arch_timers { ____Placeholder_kvm_arch_timers } kvm_arch_timers ;
typedef enum kvm_arch_timer_regs { ____Placeholder_kvm_arch_timer_regs } kvm_arch_timer_regs ;


 int FUNC_0 (struct kvm_vcpu*,int ,int,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct kvm_vcpu*,int) ;

void FUNC_6(struct kvm_vcpu *VAR_0,
    enum kvm_arch_timers VAR_1,
    enum kvm_arch_timer_regs VAR_2,
    u64 VAR_3)
{
 FUNC_3();
 FUNC_2(VAR_0);

 FUNC_0(VAR_0, FUNC_5(VAR_0, VAR_1), VAR_2, VAR_3);

 FUNC_1(VAR_0);
 FUNC_4();
}
