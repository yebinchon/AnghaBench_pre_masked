
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int swp_entry_t ;
struct vm_area_struct {TYPE_1__* vm_file; struct mm_struct* vm_mm; } ;
struct mmu_notifier_range {unsigned long start; unsigned long end; } ;
struct mm_struct {int dummy; } ;
struct hstate {unsigned long order; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pgprot_t ;
struct TYPE_2__ {int f_mapping; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct vm_area_struct*,unsigned long*,unsigned long*) ;
 int FUNC_2 (int ,struct vm_area_struct*,int *,int ) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_4 (struct vm_area_struct*,unsigned long,unsigned long) ;
 struct hstate* FUNC_5 (struct vm_area_struct*) ;
 scalar_t__ FUNC_6 (struct hstate*) ;
 scalar_t__ FUNC_7 (struct mm_struct*,unsigned long*,int *) ;
 int * FUNC_8 (struct hstate*,struct mm_struct*,int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (struct mm_struct*,unsigned long,scalar_t__) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct vm_area_struct*,unsigned long,int *,int ,int ) ;
 int FUNC_14 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct mmu_notifier_range*) ;
 int FUNC_22 (struct mmu_notifier_range*) ;
 int FUNC_23 (struct mmu_notifier_range*,int ,int ,struct vm_area_struct*,struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (struct mm_struct*,unsigned long,int *,int ,scalar_t__) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int ) ;
 scalar_t__ FUNC_29 (int ) ;

unsigned long FUNC_30(struct vm_area_struct *VAR_1,
  unsigned long VAR_2, unsigned long VAR_3, pgprot_t VAR_4)
{
 struct mm_struct *VAR_5 = VAR_1->vm_mm;
 unsigned long VAR_6 = VAR_2;
 pte_t *VAR_7;
 pte_t VAR_8;
 struct hstate *VAR_9 = FUNC_5(VAR_1);
 unsigned long VAR_10 = 0;
 bool VAR_11 = 0;
 struct mmu_notifier_range VAR_12;






 FUNC_23(&VAR_12, VAR_0,
    0, VAR_1, VAR_5, VAR_6, VAR_3);
 FUNC_1(VAR_1, &VAR_12.start, &VAR_12.end);

 FUNC_0(VAR_2 >= VAR_3);
 FUNC_3(VAR_1, VAR_12.start, VAR_12.end);

 FUNC_22(&VAR_12);
 FUNC_15(VAR_1->vm_file->f_mapping);
 for (; VAR_2 < VAR_3; VAR_2 += FUNC_6(VAR_9)) {
  spinlock_t *VAR_13;
  VAR_7 = FUNC_11(VAR_5, VAR_2, FUNC_6(VAR_9));
  if (!VAR_7)
   continue;
  VAR_13 = FUNC_8(VAR_9, VAR_5, VAR_7);
  if (FUNC_7(VAR_5, &VAR_2, VAR_7)) {
   VAR_10++;
   FUNC_27(VAR_13);
   VAR_11 = 1;
   continue;
  }
  VAR_8 = FUNC_12(VAR_7);
  if (FUNC_29(FUNC_17(VAR_8))) {
   FUNC_27(VAR_13);
   continue;
  }
  if (FUNC_29(FUNC_18(VAR_8))) {
   swp_entry_t VAR_14 = FUNC_25(VAR_8);

   if (FUNC_19(VAR_14)) {
    pte_t VAR_15;

    FUNC_20(&VAR_14);
    VAR_15 = FUNC_28(VAR_14);
    FUNC_26(VAR_5, VAR_2, VAR_7,
           VAR_15, FUNC_6(VAR_9));
    VAR_10++;
   }
   FUNC_27(VAR_13);
   continue;
  }
  if (!FUNC_10(VAR_8)) {
   pte_t VAR_16;

   VAR_16 = FUNC_14(VAR_1, VAR_2, VAR_7);
   VAR_8 = FUNC_24(FUNC_9(VAR_16, VAR_4));
   VAR_8 = FUNC_2(VAR_8, VAR_1, ((void*)0), 0);
   FUNC_13(VAR_1, VAR_2, VAR_7, VAR_16, VAR_8);
   VAR_10++;
  }
  FUNC_27(VAR_13);
 }







 if (VAR_11)
  FUNC_4(VAR_1, VAR_12.start, VAR_12.end);
 else
  FUNC_4(VAR_1, VAR_6, VAR_3);






 FUNC_16(VAR_1->vm_file->f_mapping);
 FUNC_21(&VAR_12);

 return VAR_10 << VAR_9->order;
}
