
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_mmu_memory_cache {int dummy; } ;
struct kvm {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int phys_addr_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (struct kvm_mmu_memory_cache*) ;
 int * FUNC_2 (struct kvm*,struct kvm_mmu_memory_cache*,int ) ;
 int * FUNC_3 (struct kvm*,int *,int ) ;
 scalar_t__ FUNC_4 (struct kvm*,int ) ;
 scalar_t__ FUNC_5 (struct kvm*,int ) ;
 int FUNC_6 (struct kvm*,int *,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static pmd_t *FUNC_8(struct kvm *VAR_0, struct kvm_mmu_memory_cache *VAR_1,
        phys_addr_t VAR_2)
{
 pud_t *VAR_3;
 pmd_t *VAR_4;

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (!VAR_3 || FUNC_4(VAR_0, *VAR_3))
  return ((void*)0);

 if (FUNC_5(VAR_0, *VAR_3)) {
  if (!VAR_1)
   return ((void*)0);
  VAR_4 = FUNC_1(VAR_1);
  FUNC_6(VAR_0, VAR_3, VAR_4);
  FUNC_0(FUNC_7(VAR_3));
 }

 return FUNC_3(VAR_0, VAR_3, VAR_2);
}
