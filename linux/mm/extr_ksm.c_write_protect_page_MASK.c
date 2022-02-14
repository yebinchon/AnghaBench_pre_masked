
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct page_vma_mapped_walk {int address; int * pte; struct vm_area_struct* vma; struct page* page; } ;
struct page {int dummy; } ;
struct mmu_notifier_range {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pte_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (int,char*) ;
 int FUNC_4 (struct vm_area_struct*,int,int ) ;
 scalar_t__ FUNC_5 (struct mm_struct*) ;
 int FUNC_6 (struct mmu_notifier_range*) ;
 int FUNC_7 (struct mmu_notifier_range*) ;
 int FUNC_8 (struct mmu_notifier_range*,int ,int ,struct vm_area_struct*,struct mm_struct*,int,scalar_t__) ;
 int FUNC_9 (struct page*,struct vm_area_struct*) ;
 scalar_t__ FUNC_10 (struct page*) ;
 scalar_t__ FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page_vma_mapped_walk*) ;
 int FUNC_14 (struct page_vma_mapped_walk*) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct vm_area_struct*,int,int *) ;
 int FUNC_23 (struct page*) ;
 int FUNC_24 (struct mm_struct*,int,int *,int ) ;
 int FUNC_25 (struct mm_struct*,int,int *,int ) ;

__attribute__((used)) static int FUNC_26(struct vm_area_struct *VAR_3, struct page *VAR_4,
         pte_t *VAR_5)
{
 struct mm_struct *VAR_6 = VAR_3->vm_mm;
 struct page_vma_mapped_walk VAR_7 = {
  .page = VAR_4,
  .vma = VAR_3,
 };
 int VAR_8;
 int VAR_9 = -VAR_0;
 struct mmu_notifier_range VAR_10;

 VAR_7.address = FUNC_9(VAR_4, VAR_3);
 if (VAR_7.address == -VAR_0)
  goto out;

 FUNC_0(FUNC_2(VAR_4));

 FUNC_8(&VAR_10, VAR_1, 0, VAR_3, VAR_6,
    VAR_7.address,
    VAR_7.address + VAR_2);
 FUNC_7(&VAR_10);

 if (!FUNC_13(&VAR_7))
  goto out_mn;
 if (FUNC_3(!VAR_7.pte, "Unexpected PMD mapping?"))
  goto out_unlock;

 if (FUNC_20(*VAR_7.pte) || FUNC_16(*VAR_7.pte) ||
     (FUNC_18(*VAR_7.pte) && FUNC_19(*VAR_7.pte)) ||
      FUNC_5(VAR_6)) {
  pte_t VAR_11;

  VAR_8 = FUNC_1(VAR_4);
  FUNC_4(VAR_3, VAR_7.address, FUNC_12(VAR_4));
  VAR_11 = FUNC_22(VAR_3, VAR_7.address, VAR_7.pte);




  if (FUNC_11(VAR_4) + 1 + VAR_8 != FUNC_10(VAR_4)) {
   FUNC_24(VAR_6, VAR_7.address, VAR_7.pte, VAR_11);
   goto out_unlock;
  }
  if (FUNC_16(VAR_11))
   FUNC_23(VAR_4);

  if (FUNC_18(VAR_11))
   VAR_11 = FUNC_17(FUNC_15(VAR_11));
  else
   VAR_11 = FUNC_17(FUNC_21(VAR_11));
  FUNC_25(VAR_6, VAR_7.address, VAR_7.pte, VAR_11);
 }
 *VAR_5 = *VAR_7.pte;
 VAR_9 = 0;

out_unlock:
 FUNC_14(&VAR_7);
out_mn:
 FUNC_6(&VAR_10);
out:
 return VAR_9;
}
