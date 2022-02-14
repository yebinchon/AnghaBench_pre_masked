
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_gather {int fullmm; int freed_tables; int mm; } ;


 int FUNC_0 (struct mmu_gather*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct mmu_gather*) ;
 int FUNC_4 (struct mmu_gather*) ;

void FUNC_5(struct mmu_gather *VAR_0,
  unsigned long VAR_1, unsigned long VAR_2)
{
 if (FUNC_2(VAR_0->mm)) {
  VAR_0->fullmm = 1;
  FUNC_0(VAR_0);
  VAR_0->freed_tables = 1;
 }

 FUNC_4(VAR_0);


 FUNC_3(VAR_0);

 FUNC_1(VAR_0->mm);
}
