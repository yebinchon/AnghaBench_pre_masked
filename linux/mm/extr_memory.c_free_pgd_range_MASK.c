
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_gather {int mm; } ;
typedef int pgd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mmu_gather*,int *,unsigned long,unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (struct mmu_gather*,int ) ;

void FUNC_5(struct mmu_gather *VAR_3,
   unsigned long VAR_4, unsigned long VAR_5,
   unsigned long VAR_6, unsigned long VAR_7)
{
 pgd_t *VAR_8;
 unsigned long VAR_9;
 VAR_4 &= VAR_1;
 if (VAR_4 < VAR_6) {
  VAR_4 += VAR_2;
  if (!VAR_4)
   return;
 }
 if (VAR_7) {
  VAR_7 &= VAR_1;
  if (!VAR_7)
   return;
 }
 if (VAR_5 - 1 > VAR_7 - 1)
  VAR_5 -= VAR_2;
 if (VAR_4 > VAR_5 - 1)
  return;




 FUNC_4(VAR_3, VAR_0);
 VAR_8 = FUNC_3(VAR_3->mm, VAR_4);
 do {
  VAR_9 = FUNC_1(VAR_4, VAR_5);
  if (FUNC_2(VAR_8))
   continue;
  FUNC_0(VAR_3, VAR_8, VAR_4, VAR_9, VAR_6, VAR_7);
 } while (VAR_8++, VAR_4 = VAR_9, VAR_4 != VAR_5);
}
