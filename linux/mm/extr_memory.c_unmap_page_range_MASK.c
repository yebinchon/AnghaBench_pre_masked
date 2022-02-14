
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zap_details {int dummy; } ;
struct vm_area_struct {int vm_mm; } ;
struct mmu_gather {int dummy; } ;
typedef int pgd_t ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (struct mmu_gather*,struct vm_area_struct*) ;
 int FUNC_5 (struct mmu_gather*,struct vm_area_struct*) ;
 unsigned long FUNC_6 (struct mmu_gather*,struct vm_area_struct*,int *,unsigned long,unsigned long,struct zap_details*) ;

void FUNC_7(struct mmu_gather *VAR_0,
        struct vm_area_struct *VAR_1,
        unsigned long VAR_2, unsigned long VAR_3,
        struct zap_details *VAR_4)
{
 pgd_t *VAR_5;
 unsigned long VAR_6;

 FUNC_0(VAR_2 >= VAR_3);
 FUNC_5(VAR_0, VAR_1);
 VAR_5 = FUNC_3(VAR_1->vm_mm, VAR_2);
 do {
  VAR_6 = FUNC_1(VAR_2, VAR_3);
  if (FUNC_2(VAR_5))
   continue;
  VAR_6 = FUNC_6(VAR_0, VAR_1, VAR_5, VAR_2, VAR_6, VAR_4);
 } while (VAR_5++, VAR_2 = VAR_6, VAR_2 != VAR_3);
 FUNC_4(VAR_0, VAR_1);
}
