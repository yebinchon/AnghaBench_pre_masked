
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int * pgd; } ;
struct kvm {int mmu_lock; TYPE_1__ arch; } ;
typedef scalar_t__ phys_addr_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct kvm*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct kvm*,scalar_t__) ;
 int FUNC_6 (struct kvm*,int ) ;
 int FUNC_7 (struct kvm*,int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct kvm *VAR_1, phys_addr_t VAR_2, u64 VAR_3)
{
 pgd_t *VAR_4;
 phys_addr_t VAR_5 = VAR_2, VAR_6 = VAR_2 + VAR_3;
 phys_addr_t VAR_7;

 FUNC_2(&VAR_1->mmu_lock);
 FUNC_1(VAR_3 & ~VAR_0);

 VAR_4 = VAR_1->arch.pgd + FUNC_5(VAR_1, VAR_5);
 do {





  if (!FUNC_0(VAR_1->arch.pgd))
   break;
  VAR_7 = FUNC_4(VAR_1, VAR_5, VAR_6);
  if (!FUNC_6(VAR_1, *VAR_4))
   FUNC_7(VAR_1, VAR_4, VAR_5, VAR_7);




  if (VAR_7 != VAR_6)
   FUNC_3(&VAR_1->mmu_lock);
 } while (VAR_4++, VAR_5 = VAR_7, VAR_5 != VAR_6);
}
