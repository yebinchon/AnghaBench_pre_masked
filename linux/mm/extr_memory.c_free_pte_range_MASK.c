
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_gather {int mm; } ;
typedef int pmd_t ;
typedef int pgtable_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mmu_gather*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct mmu_gather *VAR_0, pmd_t *VAR_1,
      unsigned long VAR_2)
{
 pgtable_t VAR_3 = FUNC_2(*VAR_1);
 FUNC_1(VAR_1);
 FUNC_3(VAR_0, VAR_3, VAR_2);
 FUNC_0(VAR_0->mm);
}
