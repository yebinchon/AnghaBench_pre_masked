
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct kvm_vcpu {int dummy; } ;
struct arch_timer_context {scalar_t__ cntvoff; scalar_t__ cnt_cval; } ;
typedef enum kvm_arch_timer_regs { ____Placeholder_kvm_arch_timer_regs } kvm_arch_timer_regs ;


 int FUNC_0 () ;




 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct arch_timer_context*) ;

__attribute__((used)) static u64 FUNC_3(struct kvm_vcpu *VAR_0,
         struct arch_timer_context *VAR_1,
         enum kvm_arch_timer_regs VAR_2)
{
 u64 VAR_3;

 switch (VAR_2) {
 case 128:
  VAR_3 = VAR_1->cnt_cval - FUNC_1() + VAR_1->cntvoff;
  break;

 case 130:
  VAR_3 = FUNC_2(VAR_1);
  break;

 case 129:
  VAR_3 = VAR_1->cnt_cval;
  break;

 case 131:
  VAR_3 = FUNC_1() - VAR_1->cntvoff;
  break;

 default:
  FUNC_0();
 }

 return VAR_3;
}
