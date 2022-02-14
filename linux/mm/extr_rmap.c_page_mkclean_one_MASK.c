
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; int vm_end; } ;
struct page_vma_mapped_walk {unsigned long address; int * pmd; int * pte; int flags; struct vm_area_struct* vma; struct page* page; } ;
struct page {int dummy; } ;
struct mmu_notifier_range {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct mmu_notifier_range*) ;
 int FUNC_4 (struct mmu_notifier_range*) ;
 int FUNC_5 (struct mmu_notifier_range*,int ,int ,struct vm_area_struct*,int ,unsigned long,int ) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct page_vma_mapped_walk*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_20 (int ,unsigned long,int *,int ) ;
 int FUNC_21 (int ,unsigned long,int *,int ) ;

__attribute__((used)) static bool FUNC_22(struct page *VAR_2, struct vm_area_struct *VAR_3,
       unsigned long VAR_4, void *VAR_5)
{
 struct page_vma_mapped_walk VAR_6 = {
  .page = VAR_2,
  .vma = VAR_3,
  .address = VAR_4,
  .flags = VAR_1,
 };
 struct mmu_notifier_range VAR_7;
 int *VAR_8 = VAR_5;





 FUNC_5(&VAR_7, VAR_0,
    0, VAR_3, VAR_3->vm_mm, VAR_4,
    FUNC_2(VAR_3->vm_end, VAR_4 + FUNC_6(VAR_2)));
 FUNC_4(&VAR_7);

 while (FUNC_8(&VAR_6)) {
  int VAR_9 = 0;

  VAR_4 = VAR_6.address;
  if (VAR_6.pte) {
   pte_t VAR_10;
   pte_t *VAR_11 = VAR_6.pte;

   if (!FUNC_14(*VAR_11) && !FUNC_17(*VAR_11))
    continue;

   FUNC_1(VAR_3, VAR_4, FUNC_16(*VAR_11));
   VAR_10 = FUNC_19(VAR_3, VAR_4, VAR_11);
   VAR_10 = FUNC_18(VAR_10);
   VAR_10 = FUNC_15(VAR_10);
   FUNC_21(VAR_3->vm_mm, VAR_4, VAR_11, VAR_10);
   VAR_9 = 1;
  } else {
   FUNC_0(1);

  }
  if (VAR_9)
   (*VAR_8)++;
 }

 FUNC_3(&VAR_7);

 return 1;
}
