
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_cpuid_entry2 {int ecx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 struct kvm_cpuid_entry2* FUNC_2 (int) ;
 int VAR_2 ;

void FUNC_3(void)
{
 struct kvm_cpuid_entry2 *VAR_3 = FUNC_2(1);

 if (!(VAR_3->ecx & VAR_0)) {
  FUNC_1(VAR_2, "nested VMX not enabled, skipping test\n");
  FUNC_0(VAR_1);
 }
}
