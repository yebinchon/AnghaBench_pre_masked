
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_cpuid_entry2 {int function; scalar_t__ index; scalar_t__ flags; unsigned long eax; int * padding; } ;
struct kvm_cpuid2 {int nent; struct kvm_cpuid_entry2* entries; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct kvm_cpuid2 *VAR_0,
     int VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  FUNC_0(VAR_0->nent == 6,
       "KVM_GET_SUPPORTED_HV_CPUID should return 6 entries"
       " when Enlightened VMCS is disabled (returned %d)",
       VAR_0->nent);
 else
  FUNC_0(VAR_0->nent == 7,
       "KVM_GET_SUPPORTED_HV_CPUID should return 7 entries"
       " when Enlightened VMCS is enabled (returned %d)",
       VAR_0->nent);

 for (VAR_2 = 0; VAR_2 < VAR_0->nent; VAR_2++) {
  struct kvm_cpuid_entry2 *VAR_3 = &VAR_0->entries[VAR_2];

  FUNC_0((VAR_3->function >= 0x40000000) &&
       (VAR_3->function <= 0x4000000A),
       "function %lx is our of supported range",
       VAR_3->function);

  FUNC_0(VAR_3->index == 0,
       ".index field should be zero");

  FUNC_0(VAR_3->flags == 0,
       ".flags field should be zero");

  FUNC_0(!VAR_3->padding[0] && !VAR_3->padding[1] &&
       !VAR_3->padding[2], "padding should be zero");

  if (VAR_3->function == 0x40000004) {
   int VAR_4 = !!(VAR_3->eax & (1UL << 18));

   FUNC_0(VAR_4 == !FUNC_1(),
        "NoNonArchitecturalCoreSharing bit"
        " doesn't reflect SMT setting");
  }
 }

}
