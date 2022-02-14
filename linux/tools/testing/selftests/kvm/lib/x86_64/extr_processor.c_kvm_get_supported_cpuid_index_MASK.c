
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct kvm_cpuid_entry2 {scalar_t__ function; scalar_t__ index; } ;
struct kvm_cpuid2 {int nent; struct kvm_cpuid_entry2* entries; } ;


 int FUNC_0 (struct kvm_cpuid_entry2*,char*,scalar_t__,scalar_t__) ;
 struct kvm_cpuid2* FUNC_1 () ;

struct kvm_cpuid_entry2 *
FUNC_2(uint32_t VAR_0, uint32_t VAR_1)
{
 struct kvm_cpuid2 *VAR_2;
 struct kvm_cpuid_entry2 *VAR_3 = ((void*)0);
 int VAR_4;

 VAR_2 = FUNC_1();
 for (VAR_4 = 0; VAR_4 < VAR_2->nent; VAR_4++) {
  if (VAR_2->entries[VAR_4].function == VAR_0 &&
      VAR_2->entries[VAR_4].index == VAR_1) {
   VAR_3 = &VAR_2->entries[VAR_4];
   break;
  }
 }

 FUNC_0(VAR_3, "Guest CPUID entry not found: (EAX=%x, ECX=%x).",
      VAR_0, VAR_1);
 return VAR_3;
}
