
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; struct vm_area_struct* vm_next; } ;
struct mmu_gather {int dummy; } ;
struct mm_struct {struct vm_area_struct* mmap; scalar_t__ locked_vm; int mmap_sem; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (struct mmu_gather*,struct vm_area_struct*,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct mm_struct*) ;
 int FUNC_7 (struct mm_struct*) ;
 int FUNC_8 (struct vm_area_struct*) ;
 struct vm_area_struct* FUNC_9 (struct vm_area_struct*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct mmu_gather*,int ,int) ;
 int FUNC_12 (struct mmu_gather*,struct mm_struct*,int ,int) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct mmu_gather*,struct vm_area_struct*,int ,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (unsigned long) ;
 scalar_t__ FUNC_17 (struct vm_area_struct*) ;

void FUNC_18(struct mm_struct *VAR_5)
{
 struct mmu_gather VAR_6;
 struct vm_area_struct *VAR_7;
 unsigned long VAR_8 = 0;


 FUNC_7(VAR_5);

 if (FUNC_13(FUNC_6(VAR_5))) {
  (void)FUNC_0(VAR_5);

  FUNC_10(VAR_1, &VAR_5->flags);
  FUNC_2(&VAR_5->mmap_sem);
  FUNC_15(&VAR_5->mmap_sem);
 }

 if (VAR_5->locked_vm) {
  VAR_7 = VAR_5->mmap;
  while (VAR_7) {
   if (VAR_7->vm_flags & VAR_4)
    FUNC_8(VAR_7);
   VAR_7 = VAR_7->vm_next;
  }
 }

 FUNC_1(VAR_5);

 VAR_7 = VAR_5->mmap;
 if (!VAR_7)
  return;

 FUNC_5();
 FUNC_3(VAR_5);
 FUNC_12(&VAR_6, VAR_5, 0, -1);


 FUNC_14(&VAR_6, VAR_7, 0, -1);
 FUNC_4(&VAR_6, VAR_7, VAR_0, VAR_2);
 FUNC_11(&VAR_6, 0, -1);





 while (VAR_7) {
  if (VAR_7->vm_flags & VAR_3)
   VAR_8 += FUNC_17(VAR_7);
  VAR_7 = FUNC_9(VAR_7);
 }
 FUNC_16(VAR_8);
}
