
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {TYPE_1__* kvm; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int phys_addr_t ;
typedef int kvm_pfn_t ;
struct TYPE_2__ {int mmu_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int ,int **,int **,int **) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct kvm_vcpu *VAR_0, phys_addr_t VAR_1)
{
 pud_t *VAR_2;
 pmd_t *VAR_3;
 pte_t *VAR_4;
 kvm_pfn_t VAR_5;
 bool VAR_6 = 0;

 FUNC_10(VAR_1);

 FUNC_7(&VAR_0->kvm->mmu_lock);

 if (!FUNC_9(VAR_0->kvm, VAR_1, &VAR_2, &VAR_3, &VAR_4))
  goto out;

 if (VAR_2) {
  *VAR_2 = FUNC_1(*VAR_2);
  VAR_5 = FUNC_0(*VAR_2);
  VAR_6 = 1;
 } else if (VAR_3) {
  *VAR_3 = FUNC_3(*VAR_3);
  VAR_5 = FUNC_4(*VAR_3);
  VAR_6 = 1;
 } else {
  *VAR_4 = FUNC_5(*VAR_4);
  VAR_5 = FUNC_6(*VAR_4);
  VAR_6 = 1;
 }

out:
 FUNC_8(&VAR_0->kvm->mmu_lock);
 if (VAR_6)
  FUNC_2(VAR_5);
}
