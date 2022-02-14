
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mmu_gather {int dummy; } ;
struct mm_struct {int dummy; } ;


 long VAR_0 ;
 int FUNC_0 (struct vm_area_struct*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct mmu_gather*,struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_3 (struct mmu_gather*,unsigned long,unsigned long) ;
 int FUNC_4 (struct mmu_gather*,struct mm_struct*,unsigned long,unsigned long) ;

__attribute__((used)) static long FUNC_5(struct vm_area_struct *VAR_1,
   struct vm_area_struct **VAR_2,
   unsigned long VAR_3, unsigned long VAR_4)
{
 struct mm_struct *VAR_5 = VAR_1->vm_mm;
 struct mmu_gather VAR_6;

 *VAR_2 = VAR_1;
 if (!FUNC_0(VAR_1))
  return -VAR_0;

 FUNC_1();
 FUNC_4(&VAR_6, VAR_5, VAR_3, VAR_4);
 FUNC_2(&VAR_6, VAR_1, VAR_3, VAR_4);
 FUNC_3(&VAR_6, VAR_3, VAR_4);

 return 0;
}
