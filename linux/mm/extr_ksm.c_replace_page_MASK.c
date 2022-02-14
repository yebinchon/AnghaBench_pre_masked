
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_page_prot; struct mm_struct* vm_mm; } ;
struct page {int dummy; } ;
struct mmu_notifier_range {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mm_struct*,int ) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct page*,int ) ;
 int * FUNC_5 (struct mm_struct*,unsigned long) ;
 int FUNC_6 (struct mmu_notifier_range*) ;
 int FUNC_7 (struct mmu_notifier_range*) ;
 int FUNC_8 (struct mmu_notifier_range*,int ,int ,struct vm_area_struct*,struct mm_struct*,unsigned long,scalar_t__) ;
 int FUNC_9 (struct page*,struct vm_area_struct*,unsigned long,int) ;
 unsigned long FUNC_10 (struct page*,struct vm_area_struct*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*,int) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int * FUNC_16 (struct mm_struct*,int *,unsigned long,int **) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_21 (struct page*) ;
 int FUNC_22 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_23 (struct page*) ;

__attribute__((used)) static int FUNC_24(struct vm_area_struct *VAR_4, struct page *VAR_5,
   struct page *VAR_6, pte_t VAR_7)
{
 struct mm_struct *VAR_8 = VAR_4->vm_mm;
 pmd_t *VAR_9;
 pte_t *VAR_10;
 pte_t VAR_11;
 spinlock_t *VAR_12;
 unsigned long VAR_13;
 int VAR_14 = -VAR_0;
 struct mmu_notifier_range VAR_15;

 VAR_13 = FUNC_10(VAR_5, VAR_4);
 if (VAR_13 == -VAR_0)
  goto out;

 VAR_9 = FUNC_5(VAR_8, VAR_13);
 if (!VAR_9)
  goto out;

 FUNC_8(&VAR_15, VAR_1, 0, VAR_4, VAR_8, VAR_13,
    VAR_13 + VAR_3);
 FUNC_7(&VAR_15);

 VAR_10 = FUNC_16(VAR_8, VAR_9, VAR_13, &VAR_12);
 if (!FUNC_18(*VAR_10, VAR_7)) {
  FUNC_19(VAR_10, VAR_12);
  goto out_mn;
 }





 if (!FUNC_3(FUNC_13(VAR_6))) {
  FUNC_2(VAR_6);
  FUNC_9(VAR_6, VAR_4, VAR_13, 0);
  VAR_11 = FUNC_4(VAR_6, VAR_4->vm_page_prot);
 } else {
  VAR_11 = FUNC_15(FUNC_14(FUNC_13(VAR_6),
            VAR_4->vm_page_prot));






  FUNC_0(VAR_8, VAR_2);
 }

 FUNC_1(VAR_4, VAR_13, FUNC_17(*VAR_10));






 FUNC_20(VAR_4, VAR_13, VAR_10);
 FUNC_22(VAR_8, VAR_13, VAR_10, VAR_11);

 FUNC_12(VAR_5, 0);
 if (!FUNC_11(VAR_5))
  FUNC_23(VAR_5);
 FUNC_21(VAR_5);

 FUNC_19(VAR_10, VAR_12);
 VAR_14 = 0;
out_mn:
 FUNC_6(&VAR_15);
out:
 return VAR_14;
}
