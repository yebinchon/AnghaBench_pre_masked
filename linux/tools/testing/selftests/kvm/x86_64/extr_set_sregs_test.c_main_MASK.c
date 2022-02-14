
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vm {int dummy; } ;
struct kvm_sregs {int apic_base; } ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct kvm_vm*,int ,struct kvm_sregs*) ;
 int FUNC_2 (struct kvm_vm*) ;
 int FUNC_3 (int ,int *) ;
 int VAR_1 ;
 int FUNC_4 (struct kvm_vm*,int ,struct kvm_sregs*) ;
 struct kvm_vm* FUNC_5 (int ,int ,int *) ;

int FUNC_6(int VAR_2, char *VAR_3[])
{
 struct kvm_sregs VAR_4;
 struct kvm_vm *VAR_5;
 int VAR_6;


 FUNC_3(VAR_1, ((void*)0));


 VAR_5 = FUNC_5(VAR_0, 0, ((void*)0));

 FUNC_4(VAR_5, VAR_0, &VAR_4);
 VAR_4.apic_base = 1 << 10;
 VAR_6 = FUNC_1(VAR_5, VAR_0, &VAR_4);
 FUNC_0(VAR_6, "Set IA32_APIC_BASE to %llx (invalid)",
      VAR_4.apic_base);
 VAR_4.apic_base = 1 << 11;
 VAR_6 = FUNC_1(VAR_5, VAR_0, &VAR_4);
 FUNC_0(!VAR_6, "Couldn't set IA32_APIC_BASE to %llx (valid)",
      VAR_4.apic_base);

 FUNC_2(VAR_5);

 return 0;
}
