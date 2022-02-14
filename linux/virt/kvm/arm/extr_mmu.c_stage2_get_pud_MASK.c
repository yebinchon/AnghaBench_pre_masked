
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_mmu_memory_cache {int dummy; } ;
struct TYPE_2__ {int * pgd; } ;
struct kvm {TYPE_1__ arch; } ;
typedef int pud_t ;
typedef int phys_addr_t ;
typedef int pgd_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (struct kvm_mmu_memory_cache*) ;
 int FUNC_2 (struct kvm*,int ) ;
 scalar_t__ FUNC_3 (struct kvm*,int ) ;
 int FUNC_4 (struct kvm*,int *,int *) ;
 int * FUNC_5 (struct kvm*,int *,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static pud_t *FUNC_7(struct kvm *VAR_0, struct kvm_mmu_memory_cache *VAR_1,
        phys_addr_t VAR_2)
{
 pgd_t *VAR_3;
 pud_t *VAR_4;

 VAR_3 = VAR_0->arch.pgd + FUNC_2(VAR_0, VAR_2);
 if (FUNC_3(VAR_0, *VAR_3)) {
  if (!VAR_1)
   return ((void*)0);
  VAR_4 = FUNC_1(VAR_1);
  FUNC_4(VAR_0, VAR_3, VAR_4);
  FUNC_0(FUNC_6(VAR_3));
 }

 return FUNC_5(VAR_0, VAR_3, VAR_2);
}
