
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pgd; } ;
struct kvm {TYPE_1__ arch; int mmu_lock; } ;
typedef scalar_t__ phys_addr_t ;
typedef int pgd_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct kvm*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct kvm*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct kvm*,int ) ;
 int FUNC_5 (struct kvm*,int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct kvm *VAR_0, phys_addr_t VAR_1, phys_addr_t VAR_2)
{
 pgd_t *VAR_3;
 phys_addr_t VAR_4;

 VAR_3 = VAR_0->arch.pgd + FUNC_3(VAR_0, VAR_1);
 do {
  FUNC_1(&VAR_0->mmu_lock);
  if (!FUNC_0(VAR_0->arch.pgd))
   break;
  VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
  if (FUNC_4(VAR_0, *VAR_3))
   FUNC_5(VAR_0, VAR_3, VAR_1, VAR_4);
 } while (VAR_3++, VAR_1 = VAR_4, VAR_1 != VAR_2);
}
