
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_cpuid_entry2 {int dummy; } ;
struct kvm_cpuid2 {int nent; } ;


 int FUNC_0 () ;
 struct kvm_cpuid2* FUNC_1 (size_t) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct kvm_cpuid2 *FUNC_3(void)
{
 struct kvm_cpuid2 *VAR_0;
 int VAR_1 = 100;
 size_t VAR_2;

 VAR_2 = sizeof(*VAR_0);
 VAR_2 += VAR_1 * sizeof(struct kvm_cpuid_entry2);
 VAR_0 = FUNC_1(VAR_2);
 if (!VAR_0) {
  FUNC_2("malloc");
  FUNC_0();
 }

 VAR_0->nent = VAR_1;

 return VAR_0;
}
