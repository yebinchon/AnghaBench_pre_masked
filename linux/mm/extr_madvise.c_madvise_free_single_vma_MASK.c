
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; struct mm_struct* vm_mm; } ;
struct mmu_notifier_range {scalar_t__ start; scalar_t__ end; } ;
struct mmu_gather {int dummy; } ;
struct mm_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned long) ;
 scalar_t__ FUNC_2 (scalar_t__,unsigned long) ;
 int FUNC_3 (struct mmu_notifier_range*) ;
 int FUNC_4 (struct mmu_notifier_range*) ;
 int FUNC_5 (struct mmu_notifier_range*,int ,int ,struct vm_area_struct*,struct mm_struct*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct mmu_gather*,struct vm_area_struct*) ;
 int FUNC_7 (struct mmu_gather*,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct mmu_gather*,struct mm_struct*,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct mmu_gather*,struct vm_area_struct*) ;
 int FUNC_10 (struct mm_struct*) ;
 int FUNC_11 (struct vm_area_struct*) ;
 int FUNC_12 (struct mm_struct*,scalar_t__,scalar_t__,int *,struct mmu_gather*) ;

__attribute__((used)) static int FUNC_13(struct vm_area_struct *VAR_3,
   unsigned long VAR_4, unsigned long VAR_5)
{
 struct mm_struct *VAR_6 = VAR_3->vm_mm;
 struct mmu_notifier_range VAR_7;
 struct mmu_gather VAR_8;


 if (!FUNC_11(VAR_3))
  return -VAR_0;

 VAR_7.start = FUNC_1(VAR_3->vm_start, VAR_4);
 if (VAR_7.start >= VAR_3->vm_end)
  return -VAR_0;
 VAR_7.end = FUNC_2(VAR_3->vm_end, VAR_5);
 if (VAR_7.end <= VAR_3->vm_start)
  return -VAR_0;
 FUNC_5(&VAR_7, VAR_1, 0, VAR_3, VAR_6,
    VAR_7.start, VAR_7.end);

 FUNC_0();
 FUNC_8(&VAR_8, VAR_6, VAR_7.start, VAR_7.end);
 FUNC_10(VAR_6);

 FUNC_4(&VAR_7);
 FUNC_9(&VAR_8, VAR_3);
 FUNC_12(VAR_3->vm_mm, VAR_7.start, VAR_7.end,
   &VAR_2, &VAR_8);
 FUNC_6(&VAR_8, VAR_3);
 FUNC_3(&VAR_7);
 FUNC_7(&VAR_8, VAR_7.start, VAR_7.end);

 return 0;
}
