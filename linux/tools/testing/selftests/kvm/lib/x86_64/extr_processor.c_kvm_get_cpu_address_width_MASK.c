
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_cpuid_entry2 {int edx; int eax; } ;


 int FUNC_0 () ;
 struct kvm_cpuid_entry2* FUNC_1 (int) ;

void FUNC_2(unsigned int *VAR_0, unsigned int *VAR_1)
{
 struct kvm_cpuid_entry2 *VAR_2;
 bool VAR_3;


 if (FUNC_0() < 0x80000008) {
  VAR_3 = FUNC_1(1)->edx & (1 << 6);
  *VAR_0 = VAR_3 ? 36 : 32;
  *VAR_1 = 32;
 } else {
  VAR_2 = FUNC_1(0x80000008);
  *VAR_0 = VAR_2->eax & 0xff;
  *VAR_1 = (VAR_2->eax >> 8) & 0xff;
 }
}
