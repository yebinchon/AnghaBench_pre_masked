
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct arch_timer_context {int dummy; } ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,struct arch_timer_context*,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 struct arch_timer_context* FUNC_3 (struct kvm_vcpu*) ;
 struct arch_timer_context* FUNC_4 (struct kvm_vcpu*) ;

int FUNC_5(struct kvm_vcpu *VAR_2, u64 VAR_3, u64 VAR_4)
{
 struct arch_timer_context *VAR_5;

 switch (VAR_3) {
 case 129:
  VAR_5 = FUNC_4(VAR_2);
  FUNC_0(VAR_2, VAR_5, VAR_0, VAR_4);
  break;
 case 130:
  VAR_5 = FUNC_4(VAR_2);
  FUNC_2(VAR_2, FUNC_1() - VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_4(VAR_2);
  FUNC_0(VAR_2, VAR_5, VAR_1, VAR_4);
  break;
 case 132:
  VAR_5 = FUNC_3(VAR_2);
  FUNC_0(VAR_2, VAR_5, VAR_0, VAR_4);
  break;
 case 131:
  VAR_5 = FUNC_3(VAR_2);
  FUNC_0(VAR_2, VAR_5, VAR_1, VAR_4);
  break;

 default:
  return -1;
 }

 return 0;
}
