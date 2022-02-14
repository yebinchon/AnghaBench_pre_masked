
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct arch_timer_context {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct arch_timer_context*) ;
 int FUNC_2 (struct kvm_vcpu*,int,struct arch_timer_context*) ;
 int FUNC_3 (struct arch_timer_context*,int) ;
 scalar_t__ FUNC_4 (int *) ;
 struct arch_timer_context* FUNC_5 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_3)
{
 struct arch_timer_context *VAR_4 = FUNC_5(VAR_3);

 if (!FUNC_1(VAR_4)) {
  FUNC_2(VAR_3, 0, VAR_4);
  if (FUNC_4(&VAR_0))
   FUNC_3(VAR_4, 0);
  else
   FUNC_0(VAR_1, VAR_2);
 }
}
