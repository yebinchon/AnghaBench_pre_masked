
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vm {int dummy; } ;
struct kvm_cpuid2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct kvm_cpuid2*) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 struct kvm_cpuid2* FUNC_4 (struct kvm_vm*) ;
 int FUNC_5 (struct kvm_vm*) ;
 int FUNC_6 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct kvm_cpuid2*,int) ;
 int FUNC_8 (struct kvm_vm*) ;
 int FUNC_9 (struct kvm_vm*,int ) ;
 struct kvm_vm* FUNC_10 (int ,int ,int ) ;

int FUNC_11(int VAR_7, char *VAR_8[])
{
 struct kvm_vm *VAR_9;
 int VAR_10;
 struct kvm_cpuid2 *VAR_11;


 FUNC_6(VAR_6, ((void*)0));

 VAR_10 = FUNC_3(VAR_1);
 if (!VAR_10) {
  FUNC_1(VAR_5,
   "KVM_CAP_HYPERV_CPUID not supported, skip test\n");
  FUNC_0(VAR_0);
 }


 VAR_9 = FUNC_10(VAR_3, 0, VAR_4);

 FUNC_8(VAR_9);

 VAR_11 = FUNC_4(VAR_9);
 if (!VAR_11)
  return 1;

 FUNC_7(VAR_11, 0);

 FUNC_2(VAR_11);

 if (!FUNC_3(VAR_2)) {
  FUNC_1(VAR_5,
   "Enlightened VMCS is unsupported, skip related test\n");
  goto vm_free;
 }

 FUNC_9(VAR_9, VAR_3);

 VAR_11 = FUNC_4(VAR_9);
 if (!VAR_11)
  return 1;

 FUNC_7(VAR_11, 1);

 FUNC_2(VAR_11);

vm_free:
 FUNC_5(VAR_9);

 return 0;
}
