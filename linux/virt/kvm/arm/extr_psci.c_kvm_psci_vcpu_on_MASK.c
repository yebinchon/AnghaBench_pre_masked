
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct vcpu_reset_state {int reset; int r0; int be; int pc; } ;
struct TYPE_2__ {int power_off; struct vcpu_reset_state reset_state; } ;
struct kvm_vcpu {TYPE_1__ arch; struct kvm* kvm; } ;
struct kvm {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,struct kvm_vcpu*) ;
 struct kvm_vcpu* FUNC_2 (struct kvm*,unsigned long) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,struct kvm*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 unsigned long FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (struct kvm_vcpu*) ;

__attribute__((used)) static unsigned long FUNC_11(struct kvm_vcpu *VAR_6)
{
 struct vcpu_reset_state *VAR_7;
 struct kvm *VAR_8 = VAR_6->kvm;
 struct kvm_vcpu *VAR_9 = ((void*)0);
 unsigned long VAR_10;

 VAR_10 = FUNC_6(VAR_6) & VAR_2;
 if (FUNC_10(VAR_6))
  VAR_10 &= ~((u32) 0);

 VAR_9 = FUNC_2(VAR_8, VAR_10);





 if (!VAR_9)
  return VAR_4;
 if (!VAR_9->arch.power_off) {
  if (FUNC_3(VAR_6, VAR_8) != VAR_0)
   return VAR_3;
  else
   return VAR_4;
 }

 VAR_7 = &VAR_9->arch.reset_state;

 VAR_7->pc = FUNC_7(VAR_6);


 VAR_7->be = FUNC_4(VAR_6);





 VAR_7->r0 = FUNC_8(VAR_6);

 FUNC_0(VAR_7->reset, 1);
 FUNC_1(VAR_1, VAR_9);





 FUNC_9();

 VAR_9->arch.power_off = 0;
 FUNC_5(VAR_9);

 return VAR_5;
}
