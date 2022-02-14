
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_page_prot; int anon_vma; } ;
struct page {int dummy; } ;
struct mmu_notifier_range {int dummy; } ;
struct mm_struct {int mmap_sem; } ;
struct mem_cgroup {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgtable_t ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (unsigned long) ;
 int VAR_10 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int *,struct page*,struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_4 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_5 (struct mm_struct*,struct vm_area_struct*,unsigned long,int *,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct mem_cgroup*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct mm_struct*,unsigned long,struct vm_area_struct**) ;
 struct page* FUNC_13 (struct page**,int,int) ;
 int VAR_11 ;
 int FUNC_14 (struct page*,struct vm_area_struct*) ;
 int FUNC_15 (int ,struct vm_area_struct*) ;
 int FUNC_16 (struct page*,struct mem_cgroup*,int) ;
 int FUNC_17 (struct page*,struct mem_cgroup*,int,int) ;
 int FUNC_18 (struct page*,struct mm_struct*,int,struct mem_cgroup**,int) ;
 int FUNC_19 (struct page*,int ) ;
 int * FUNC_20 (struct mm_struct*,unsigned long) ;
 int FUNC_21 (struct mm_struct*) ;
 int FUNC_22 (struct mmu_notifier_range*) ;
 int FUNC_23 (struct mmu_notifier_range*) ;
 int FUNC_24 (struct mmu_notifier_range*,int ,int ,int *,struct mm_struct*,unsigned long,scalar_t__) ;
 int FUNC_25 (struct page*,struct vm_area_struct*,unsigned long,int) ;
 int FUNC_26 (struct mm_struct*,int *,int ) ;
 int * FUNC_27 (struct mm_struct*,int *) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (struct mm_struct*,int *,int ) ;
 int FUNC_32 (struct vm_area_struct*,unsigned long,int *) ;
 int * FUNC_33 (struct mm_struct*,int *) ;
 int * FUNC_34 (int *,unsigned long) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_37 () ;
 int FUNC_38 (int *) ;
 int FUNC_39 (int *) ;
 int FUNC_40 (struct mm_struct*,int,int) ;
 scalar_t__ FUNC_41 (int) ;
 int FUNC_42 (int *) ;
 int FUNC_43 (int *) ;
 int FUNC_44 (struct vm_area_struct*,unsigned long,int *) ;

__attribute__((used)) static void FUNC_45(struct mm_struct *VAR_12,
       unsigned long VAR_13,
       struct page **VAR_14,
       int VAR_15, int VAR_16)
{
 pmd_t *VAR_17, VAR_18;
 pte_t *VAR_19;
 pgtable_t VAR_20;
 struct page *VAR_21;
 spinlock_t *VAR_22, *VAR_23;
 int VAR_24 = 0, VAR_25 = 0;
 struct mem_cgroup *VAR_26;
 struct vm_area_struct *VAR_27;
 struct mmu_notifier_range VAR_28;
 gfp_t VAR_29;

 FUNC_1(VAR_13 & ~VAR_0);


 VAR_29 = FUNC_6() | VAR_10;







 FUNC_42(&VAR_12->mmap_sem);
 VAR_21 = FUNC_13(VAR_14, VAR_29, VAR_15);
 if (!VAR_21) {
  VAR_25 = VAR_3;
  goto out_nolock;
 }

 if (FUNC_41(FUNC_18(VAR_21, VAR_12, VAR_29, &VAR_26, 1))) {
  VAR_25 = VAR_5;
  goto out_nolock;
 }

 FUNC_10(&VAR_12->mmap_sem);
 VAR_25 = FUNC_12(VAR_12, VAR_13, &VAR_27);
 if (VAR_25) {
  FUNC_16(VAR_21, VAR_26, 1);
  FUNC_42(&VAR_12->mmap_sem);
  goto out_nolock;
 }

 VAR_17 = FUNC_20(VAR_12, VAR_13);
 if (!VAR_17) {
  VAR_25 = VAR_7;
  FUNC_16(VAR_21, VAR_26, 1);
  FUNC_42(&VAR_12->mmap_sem);
  goto out_nolock;
 }






 if (!FUNC_5(VAR_12, VAR_27, VAR_13, VAR_17, VAR_16)) {
  FUNC_16(VAR_21, VAR_26, 1);
  FUNC_42(&VAR_12->mmap_sem);
  goto out_nolock;
 }

 FUNC_42(&VAR_12->mmap_sem);





 FUNC_11(&VAR_12->mmap_sem);
 VAR_25 = VAR_4;
 if (!FUNC_21(VAR_12))
  goto out;
 VAR_25 = FUNC_12(VAR_12, VAR_13, &VAR_27);
 if (VAR_25)
  goto out;

 if (FUNC_20(VAR_12, VAR_13) != VAR_17)
  goto out;

 FUNC_7(VAR_27->anon_vma);

 FUNC_24(&VAR_28, VAR_2, 0, ((void*)0), VAR_12,
    VAR_13, VAR_13 + VAR_1);
 FUNC_23(&VAR_28);

 VAR_19 = FUNC_34(VAR_17, VAR_13);
 VAR_23 = FUNC_33(VAR_12, VAR_17);

 VAR_22 = FUNC_27(VAR_12, VAR_17);






 VAR_18 = FUNC_32(VAR_27, VAR_13, VAR_17);
 FUNC_39(VAR_22);
 FUNC_22(&VAR_28);

 FUNC_38(VAR_23);
 VAR_24 = FUNC_4(VAR_27, VAR_13, VAR_19);
 FUNC_39(VAR_23);

 if (FUNC_41(!VAR_24)) {
  FUNC_35(VAR_19);
  FUNC_38(VAR_22);
  FUNC_0(!FUNC_29(*VAR_17));





  FUNC_31(VAR_12, VAR_17, FUNC_30(VAR_18));
  FUNC_39(VAR_22);
  FUNC_8(VAR_27->anon_vma);
  VAR_25 = VAR_6;
  goto out;
 }





 FUNC_8(VAR_27->anon_vma);

 FUNC_3(VAR_19, VAR_21, VAR_27, VAR_13, VAR_23);
 FUNC_35(VAR_19);
 FUNC_2(VAR_21);
 VAR_20 = FUNC_30(VAR_18);

 VAR_18 = FUNC_19(VAR_21, VAR_27->vm_page_prot);
 VAR_18 = FUNC_15(FUNC_28(VAR_18), VAR_27);






 FUNC_37();

 FUNC_38(VAR_22);
 FUNC_0(!FUNC_29(*VAR_17));
 FUNC_25(VAR_21, VAR_27, VAR_13, 1);
 FUNC_17(VAR_21, VAR_26, 0, 1);
 FUNC_9(VAR_26, VAR_9, 1);
 FUNC_14(VAR_21, VAR_27);
 FUNC_26(VAR_12, VAR_17, VAR_20);
 FUNC_36(VAR_12, VAR_13, VAR_17, VAR_18);
 FUNC_44(VAR_27, VAR_13, VAR_17);
 FUNC_39(VAR_22);

 *VAR_14 = ((void*)0);

 VAR_11++;
 VAR_25 = VAR_8;
out_up_write:
 FUNC_43(&VAR_12->mmap_sem);
out_nolock:
 FUNC_40(VAR_12, VAR_24, VAR_25);
 return;
out:
 FUNC_16(VAR_21, VAR_26, 1);
 goto out_up_write;
}
