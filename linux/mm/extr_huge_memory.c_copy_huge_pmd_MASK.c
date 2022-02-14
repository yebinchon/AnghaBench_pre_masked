
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pmd_t ;
typedef int * pgtable_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct page*) ;
 int FUNC_3 (struct mm_struct*,int ,int ) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 struct page* FUNC_10 (struct mm_struct*) ;
 int FUNC_11 (struct mm_struct*) ;
 int FUNC_12 (struct page*,int) ;
 int FUNC_13 (struct mm_struct*,int *,int *) ;
 int * FUNC_14 (struct mm_struct*,int *) ;
 int * FUNC_15 (struct mm_struct*,int *) ;
 int FUNC_16 (int ) ;
 struct page* FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (struct mm_struct*,unsigned long,int *) ;
 int * FUNC_24 (struct mm_struct*) ;
 int FUNC_25 (struct mm_struct*,int *) ;
 int FUNC_26 (int *,struct mm_struct*,struct vm_area_struct*,unsigned long,int *,struct page*) ;
 int FUNC_27 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_28 (int *,int ) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int ) ;
 scalar_t__ FUNC_31 (int) ;
 int FUNC_32 (struct vm_area_struct*) ;

int FUNC_33(struct mm_struct *VAR_5, struct mm_struct *VAR_6,
    pmd_t *VAR_7, pmd_t *VAR_8, unsigned long VAR_9,
    struct vm_area_struct *VAR_10)
{
 spinlock_t *VAR_11, *VAR_12;
 struct page *VAR_13;
 pmd_t VAR_14;
 pgtable_t VAR_15 = ((void*)0);
 int VAR_16 = -VAR_1;


 if (!FUNC_32(VAR_10))
  return 0;

 VAR_15 = FUNC_24(VAR_5);
 if (FUNC_31(!VAR_15))
  goto out;

 VAR_11 = FUNC_14(VAR_5, VAR_7);
 VAR_12 = FUNC_15(VAR_6, VAR_8);
 FUNC_28(VAR_12, VAR_4);

 VAR_16 = -VAR_0;
 VAR_14 = *VAR_8;
 if (FUNC_31(!FUNC_21(VAR_14))) {
  FUNC_25(VAR_5, VAR_15);
  goto out_unlock;
 }





 if (FUNC_5(VAR_14)) {
  struct page *VAR_17;





  VAR_17 = FUNC_10(VAR_5);
  FUNC_26(VAR_15, VAR_5, VAR_10, VAR_9, VAR_7,
    VAR_17);
  VAR_16 = 0;
  goto out_unlock;
 }

 VAR_13 = FUNC_17(VAR_14);
 FUNC_2(!FUNC_0(VAR_13), VAR_13);
 FUNC_4(VAR_13);
 FUNC_12(VAR_13, 1);
 FUNC_3(VAR_5, VAR_3, VAR_2);
 FUNC_11(VAR_5);
 FUNC_13(VAR_5, VAR_7, VAR_15);

 FUNC_23(VAR_6, VAR_9, VAR_8);
 VAR_14 = FUNC_16(FUNC_22(VAR_14));
 FUNC_27(VAR_5, VAR_9, VAR_7, VAR_14);

 VAR_16 = 0;
out_unlock:
 FUNC_29(VAR_12);
 FUNC_29(VAR_11);
out:
 return VAR_16;
}
