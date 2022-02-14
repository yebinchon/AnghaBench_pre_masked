
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {unsigned long address; int ptl; int * pmd; int * pte; struct vm_area_struct* vma; } ;
struct vm_area_struct {int vm_mm; int vm_page_prot; } ;
struct page {int dummy; } ;
struct mmu_notifier_range {int dummy; } ;
struct mem_cgroup {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgtable_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct page*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct page*) ;
 struct page* FUNC_4 (int ,struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct page*,struct page*,unsigned long,struct vm_area_struct*) ;
 int FUNC_7 (struct page**) ;
 struct page** FUNC_8 (int,int,int ) ;
 int FUNC_9 (struct page*,struct vm_area_struct*) ;
 int FUNC_10 (int ,struct vm_area_struct*) ;
 int FUNC_11 (struct page*,struct mem_cgroup*,int) ;
 int FUNC_12 (struct page*,struct mem_cgroup*,int,int) ;
 scalar_t__ FUNC_13 (struct page*,int ,int ,struct mem_cgroup**,int) ;
 int FUNC_14 (struct page*,int ) ;
 int FUNC_15 (struct mmu_notifier_range*) ;
 int FUNC_16 (struct mmu_notifier_range*) ;
 int FUNC_17 (struct mmu_notifier_range*) ;
 int FUNC_18 (struct mmu_notifier_range*,int ,int ,struct vm_area_struct*,int ,unsigned long,scalar_t__) ;
 int FUNC_19 (struct page*,struct vm_area_struct*,unsigned long,int) ;
 scalar_t__ FUNC_20 (struct page*) ;
 int FUNC_21 (struct page*,int) ;
 int FUNC_22 (struct page*) ;
 int FUNC_23 (int ,int *) ;
 int FUNC_24 (int ,int *) ;
 int FUNC_25 (int ,int *,int ) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int * FUNC_30 (int *,unsigned long) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (struct page*) ;
 int FUNC_33 (struct page*,unsigned long) ;
 int FUNC_34 (int ,unsigned long,int *,int ) ;
 int FUNC_35 () ;
 int FUNC_36 (int ) ;
 scalar_t__ FUNC_37 (int) ;

__attribute__((used)) static vm_fault_t FUNC_38(struct vm_fault *VAR_9,
   pmd_t VAR_10, struct page *VAR_11)
{
 struct vm_area_struct *VAR_12 = VAR_9->vma;
 unsigned long VAR_13 = VAR_9->address & VAR_2;
 struct mem_cgroup *VAR_14;
 pgtable_t VAR_15;
 pmd_t VAR_16;
 int VAR_17;
 vm_fault_t VAR_18 = 0;
 struct page **VAR_19;
 struct mmu_notifier_range VAR_20;

 VAR_19 = FUNC_8(VAR_3, sizeof(struct page *),
         VAR_1);
 if (FUNC_37(!VAR_19)) {
  VAR_18 |= VAR_7;
  goto out;
 }

 for (VAR_17 = 0; VAR_17 < VAR_3; VAR_17++) {
  VAR_19[VAR_17] = FUNC_4(VAR_0, VAR_12,
            VAR_9->address, FUNC_22(VAR_11));
  if (FUNC_37(!VAR_19[VAR_17] ||
        FUNC_13(VAR_19[VAR_17], VAR_12->vm_mm,
         VAR_1, &VAR_14, 0))) {
   if (VAR_19[VAR_17])
    FUNC_32(VAR_19[VAR_17]);
   while (--VAR_17 >= 0) {
    VAR_14 = (void *)FUNC_20(VAR_19[VAR_17]);
    FUNC_33(VAR_19[VAR_17], 0);
    FUNC_11(VAR_19[VAR_17], VAR_14,
      0);
    FUNC_32(VAR_19[VAR_17]);
   }
   FUNC_7(VAR_19);
   VAR_18 |= VAR_7;
   goto out;
  }
  FUNC_33(VAR_19[VAR_17], (unsigned long)VAR_14);
 }

 for (VAR_17 = 0; VAR_17 < VAR_3; VAR_17++) {
  FUNC_6(VAR_19[VAR_17], VAR_11 + VAR_17,
       VAR_13 + VAR_6 * VAR_17, VAR_12);
  FUNC_3(VAR_19[VAR_17]);
  FUNC_5();
 }

 FUNC_18(&VAR_20, VAR_5, 0, VAR_12, VAR_12->vm_mm,
    VAR_13, VAR_13 + VAR_4);
 FUNC_17(&VAR_20);

 VAR_9->ptl = FUNC_24(VAR_12->vm_mm, VAR_9->pmd);
 if (FUNC_37(!FUNC_26(*VAR_9->pmd, VAR_10)))
  goto out_free_pages;
 FUNC_2(!FUNC_0(VAR_11), VAR_11);
 FUNC_27(VAR_12, VAR_13, VAR_9->pmd);

 VAR_15 = FUNC_23(VAR_12->vm_mm, VAR_9->pmd);
 FUNC_25(VAR_12->vm_mm, &VAR_16, VAR_15);

 for (VAR_17 = 0; VAR_17 < VAR_3; VAR_17++, VAR_13 += VAR_6) {
  pte_t VAR_21;
  VAR_21 = FUNC_14(VAR_19[VAR_17], VAR_12->vm_page_prot);
  VAR_21 = FUNC_10(FUNC_28(VAR_21), VAR_12);
  VAR_14 = (void *)FUNC_20(VAR_19[VAR_17]);
  FUNC_33(VAR_19[VAR_17], 0);
  FUNC_19(VAR_19[VAR_17], VAR_9->vma, VAR_13, 0);
  FUNC_12(VAR_19[VAR_17], VAR_14, 0, 0);
  FUNC_9(VAR_19[VAR_17], VAR_12);
  VAR_9->pte = FUNC_30(&VAR_16, VAR_13);
  FUNC_1(!FUNC_29(*VAR_9->pte));
  FUNC_34(VAR_12->vm_mm, VAR_13, VAR_9->pte, VAR_21);
  FUNC_31(VAR_9->pte);
 }
 FUNC_7(VAR_19);

 FUNC_35();
 FUNC_25(VAR_12->vm_mm, VAR_9->pmd, VAR_15);
 FUNC_21(VAR_11, 1);
 FUNC_36(VAR_9->ptl);





 FUNC_16(&VAR_20);

 VAR_18 |= VAR_8;
 FUNC_32(VAR_11);

out:
 return VAR_18;

out_free_pages:
 FUNC_36(VAR_9->ptl);
 FUNC_15(&VAR_20);
 for (VAR_17 = 0; VAR_17 < VAR_3; VAR_17++) {
  VAR_14 = (void *)FUNC_20(VAR_19[VAR_17]);
  FUNC_33(VAR_19[VAR_17], 0);
  FUNC_11(VAR_19[VAR_17], VAR_14, 0);
  FUNC_32(VAR_19[VAR_17]);
 }
 FUNC_7(VAR_19);
 goto out;
}
