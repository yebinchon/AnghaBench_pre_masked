
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vm {int dummy; } ;
struct kvm_cpuid2 {int nent; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (struct kvm_vm*,int ,int ,struct kvm_cpuid2*) ;
 scalar_t__ VAR_3 ;

void FUNC_2(struct kvm_vm *VAR_4)
{
 static struct kvm_cpuid2 VAR_5 = {.nent = 0};
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_2, VAR_1, &VAR_5);

 FUNC_0(VAR_6 == -1 && VAR_3 == VAR_0,
      "KVM_GET_SUPPORTED_HV_CPUID didn't fail with -E2BIG when"
      " it should have: %d %d", VAR_6, VAR_3);
}
