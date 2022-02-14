
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucall {int cmd; } ;
struct kvm_vm {int dummy; } ;
struct kvm_sregs {int cr4; } ;
struct kvm_run {int exit_reason; } ;
struct kvm_cpuid_entry2 {int ecx; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct kvm_vm*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kvm_vm*,int ,struct ucall*) ;
 int VAR_4 ;
 int FUNC_4 () ;
 struct kvm_cpuid_entry2* FUNC_5 (int) ;
 int FUNC_6 (struct kvm_vm*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int *) ;
 int VAR_5 ;
 int FUNC_9 (struct kvm_vm*,int ,int ) ;
 int FUNC_10 (struct kvm_vm*,int ,struct kvm_sregs*) ;
 int FUNC_11 (struct kvm_vm*,int ,struct kvm_sregs*) ;
 struct kvm_run* FUNC_12 (struct kvm_vm*,int ) ;
 struct kvm_vm* FUNC_13 (int ,int ,int ) ;

int FUNC_14(int VAR_6, char *VAR_7[])
{
 struct kvm_run *VAR_8;
 struct kvm_vm *VAR_9;
 struct kvm_sregs VAR_10;
 struct kvm_cpuid_entry2 *VAR_11;
 struct ucall VAR_12;
 int VAR_13;

 VAR_11 = FUNC_5(1);
 if (!(VAR_11->ecx & VAR_3)) {
  FUNC_7("XSAVE feature not supported, skipping test\n");
  return 0;
 }


 FUNC_8(VAR_5, ((void*)0));


 VAR_9 = FUNC_13(VAR_1, 0, VAR_4);
 FUNC_9(VAR_9, VAR_1, FUNC_4());
 VAR_8 = FUNC_12(VAR_9, VAR_1);

 while (1) {
  VAR_13 = FUNC_1(VAR_9, VAR_1);

  FUNC_0(VAR_13 == 0, "vcpu_run failed: %d\n", VAR_13);
  FUNC_0(VAR_8->exit_reason == VAR_0,
       "Unexpected exit reason: %u (%s),\n",
       VAR_8->exit_reason,
       FUNC_2(VAR_8->exit_reason));

  switch (FUNC_3(VAR_9, VAR_1, &VAR_12)) {
  case 128:

   FUNC_10(VAR_9, VAR_1, &VAR_10);
   VAR_10.cr4 &= ~VAR_2;
   FUNC_11(VAR_9, VAR_1, &VAR_10);
   break;
  case 130:
   FUNC_0(0, "Guest CR4 bit (OSXSAVE) unsynchronized with CPUID bit.");
   break;
  case 129:
   goto done;
  default:
   FUNC_0(0, "Unknown ucall 0x%x.", VAR_12.cmd);
  }
 }

 FUNC_6(VAR_9);

done:
 return 0;
}
