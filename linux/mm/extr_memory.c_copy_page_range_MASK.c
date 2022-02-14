
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_flags; int anon_vma; } ;
struct mmu_notifier_range {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mm_struct*,struct mm_struct*,struct vm_area_struct*) ;
 int FUNC_1 (struct mm_struct*,struct mm_struct*,int *,int *,struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*) ;
 int FUNC_4 (struct mmu_notifier_range*) ;
 int FUNC_5 (struct mmu_notifier_range*) ;
 int FUNC_6 (struct mmu_notifier_range*,int ,int ,struct vm_area_struct*,struct mm_struct*,unsigned long,unsigned long) ;
 unsigned long FUNC_7 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (struct mm_struct*,unsigned long) ;
 int FUNC_10 (struct vm_area_struct*) ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(struct mm_struct *VAR_5, struct mm_struct *VAR_6,
  struct vm_area_struct *VAR_7)
{
 pgd_t *VAR_8, *VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11 = VAR_7->vm_start;
 unsigned long VAR_12 = VAR_7->vm_end;
 struct mmu_notifier_range VAR_13;
 bool VAR_14;
 int VAR_15;







 if (!(VAR_7->vm_flags & (VAR_2 | VAR_4 | VAR_3)) &&
   !VAR_7->anon_vma)
  return 0;

 if (FUNC_3(VAR_7))
  return FUNC_0(VAR_5, VAR_6, VAR_7);

 if (FUNC_11(VAR_7->vm_flags & VAR_4)) {




  VAR_15 = FUNC_10(VAR_7);
  if (VAR_15)
   return VAR_15;
 }







 VAR_14 = FUNC_2(VAR_7->vm_flags);

 if (VAR_14) {
  FUNC_6(&VAR_13, VAR_1,
     0, VAR_7, VAR_6, VAR_11, VAR_12);
  FUNC_5(&VAR_13);
 }

 VAR_15 = 0;
 VAR_9 = FUNC_9(VAR_5, VAR_11);
 VAR_8 = FUNC_9(VAR_6, VAR_11);
 do {
  VAR_10 = FUNC_7(VAR_11, VAR_12);
  if (FUNC_8(VAR_8))
   continue;
  if (FUNC_11(FUNC_1(VAR_5, VAR_6, VAR_9, VAR_8,
         VAR_7, VAR_11, VAR_10))) {
   VAR_15 = -VAR_0;
   break;
  }
 } while (VAR_9++, VAR_8++, VAR_11 = VAR_10, VAR_11 != VAR_12);

 if (VAR_14)
  FUNC_4(&VAR_13);
 return VAR_15;
}
