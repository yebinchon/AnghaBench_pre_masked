
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vm {int dummy; } ;
struct kvm_cpuid_entry2 {int dummy; } ;
struct kvm_cpuid2 {int nent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct kvm_cpuid2* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct kvm_vm*,int ,int ,struct kvm_cpuid2*) ;

struct kvm_cpuid2 *FUNC_4(struct kvm_vm *VAR_2)
{
 int VAR_3 = 20;
 static struct kvm_cpuid2 *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4) + VAR_3 * sizeof(struct kvm_cpuid_entry2));

 if (!VAR_4) {
  FUNC_2("malloc");
  FUNC_0();
 }

 VAR_4->nent = VAR_3;

 FUNC_3(VAR_2, VAR_1, VAR_0, VAR_4);

 return VAR_4;
}
