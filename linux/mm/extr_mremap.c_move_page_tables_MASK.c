
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
struct mmu_notifier_range {int dummy; } ;
typedef int pmd_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int * FUNC_0 (int ,struct vm_area_struct*,unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 (struct vm_area_struct*) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int * FUNC_4 (int ,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct mmu_notifier_range*) ;
 int FUNC_7 (struct mmu_notifier_range*) ;
 int FUNC_8 (struct mmu_notifier_range*,int ,int ,struct vm_area_struct*,int ,unsigned long,unsigned long) ;
 int FUNC_9 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int *,int *) ;
 int FUNC_10 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int *,int *) ;
 int FUNC_11 (struct vm_area_struct*,int *,unsigned long,unsigned long,struct vm_area_struct*,int *,unsigned long,int) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 int FUNC_15 (struct vm_area_struct*,int *,unsigned long) ;
 int FUNC_16 (struct vm_area_struct*) ;

unsigned long FUNC_17(struct vm_area_struct *VAR_4,
  unsigned long VAR_5, struct vm_area_struct *VAR_6,
  unsigned long VAR_7, unsigned long VAR_8,
  bool VAR_9)
{
 unsigned long VAR_10, VAR_11, VAR_12;
 struct mmu_notifier_range VAR_13;
 pmd_t *VAR_14, *VAR_15;

 VAR_12 = VAR_5 + VAR_8;
 FUNC_3(VAR_4, VAR_5, VAR_12);

 FUNC_8(&VAR_13, VAR_1, 0, VAR_4, VAR_4->vm_mm,
    VAR_5, VAR_12);
 FUNC_7(&VAR_13);

 for (; VAR_5 < VAR_12; VAR_5 += VAR_10, VAR_7 += VAR_10) {
  FUNC_1();
  VAR_11 = (VAR_5 + VAR_3) & VAR_2;

  VAR_10 = VAR_11 - VAR_5;
  if (VAR_10 > VAR_12 - VAR_5)
   VAR_10 = VAR_12 - VAR_5;
  VAR_14 = FUNC_4(VAR_4->vm_mm, VAR_5);
  if (!VAR_14)
   continue;
  VAR_15 = FUNC_0(VAR_4->vm_mm, VAR_4, VAR_7);
  if (!VAR_15)
   break;
  if (FUNC_5(*VAR_14) || FUNC_12(*VAR_14)) {
   if (VAR_10 == VAR_0) {
    bool VAR_16;

    if (VAR_9)
     FUNC_16(VAR_4);
    VAR_16 = FUNC_9(VAR_4, VAR_5, VAR_7,
          VAR_12, VAR_14, VAR_15);
    if (VAR_9)
     FUNC_2(VAR_4);
    if (VAR_16)
     continue;
   }
   FUNC_15(VAR_4, VAR_14, VAR_5);
   if (FUNC_13(VAR_14))
    continue;
  } else if (VAR_10 == VAR_3) {
  }

  if (FUNC_14(VAR_6->vm_mm, VAR_15))
   break;
  VAR_11 = (VAR_7 + VAR_3) & VAR_2;
  if (VAR_10 > VAR_11 - VAR_7)
   VAR_10 = VAR_11 - VAR_7;
  FUNC_11(VAR_4, VAR_14, VAR_5, VAR_5 + VAR_10, VAR_6,
     VAR_15, VAR_7, VAR_9);
 }

 FUNC_6(&VAR_13);

 return VAR_8 + VAR_5 - VAR_12;
}
