
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
typedef size_t u32 ;
struct vm_area_struct {int vm_flags; TYPE_1__* vm_file; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
struct hstate {int dummy; } ;
struct address_space {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pgoff_t ;
struct TYPE_2__ {struct address_space* f_mapping; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct hstate*) ;
 struct hstate* FUNC_3 (struct vm_area_struct*) ;
 unsigned long FUNC_4 (struct hstate*) ;
 int FUNC_5 (struct hstate*) ;
 int * FUNC_6 (struct mm_struct*,unsigned long,int ) ;
 int * FUNC_7 (struct hstate*,struct mm_struct*,int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (struct mm_struct*,unsigned long,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (struct vm_area_struct*,unsigned long,int *,int ,unsigned int) ;
 int FUNC_14 (struct mm_struct*,struct vm_area_struct*,unsigned long,int *,struct page*,int *) ;
 size_t FUNC_15 (struct hstate*,struct address_space*,int ,unsigned long) ;
 int * VAR_4 ;
 int FUNC_16 (struct mm_struct*,struct vm_area_struct*,struct address_space*,int ,unsigned long,int *,unsigned int) ;
 struct page* FUNC_17 (struct hstate*,struct vm_area_struct*,unsigned long) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct vm_area_struct*,struct mm_struct*,int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int ) ;
 struct page* FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (struct page*) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (struct page*) ;
 scalar_t__ FUNC_30 (int) ;
 int FUNC_31 (struct page*) ;
 int FUNC_32 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_33 (struct hstate*,struct vm_area_struct*,unsigned long) ;
 int FUNC_34 (struct hstate*,struct vm_area_struct*,unsigned long) ;
 scalar_t__ FUNC_35 (struct hstate*,struct vm_area_struct*,unsigned long) ;
 int FUNC_36 (struct page*) ;

vm_fault_t FUNC_37(struct mm_struct *VAR_5, struct vm_area_struct *VAR_6,
   unsigned long VAR_7, unsigned int VAR_8)
{
 pte_t *VAR_9, VAR_10;
 spinlock_t *VAR_11;
 vm_fault_t VAR_12;
 u32 VAR_13;
 pgoff_t VAR_14;
 struct page *VAR_15 = ((void*)0);
 struct page *VAR_16 = ((void*)0);
 struct hstate *VAR_17 = FUNC_3(VAR_6);
 struct address_space *VAR_18;
 int VAR_19 = 0;
 unsigned long VAR_20 = VAR_7 & FUNC_4(VAR_17);

 VAR_9 = FUNC_10(VAR_5, VAR_20, FUNC_5(VAR_17));
 if (VAR_9) {
  VAR_10 = FUNC_12(VAR_9);
  if (FUNC_30(FUNC_19(VAR_10))) {
   FUNC_20(VAR_6, VAR_5, VAR_9);
   return 0;
  } else if (FUNC_30(FUNC_18(VAR_10)))
   return VAR_1 |
    FUNC_0(FUNC_2(VAR_17));
 } else {
  VAR_9 = FUNC_6(VAR_5, VAR_20, FUNC_5(VAR_17));
  if (!VAR_9)
   return VAR_2;
 }

 VAR_18 = VAR_6->vm_file->f_mapping;
 VAR_14 = FUNC_34(VAR_17, VAR_6, VAR_20);






 VAR_13 = FUNC_15(VAR_17, VAR_18, VAR_14, VAR_20);
 FUNC_21(&VAR_4[VAR_13]);

 VAR_10 = FUNC_12(VAR_9);
 if (FUNC_9(VAR_10)) {
  VAR_12 = FUNC_16(VAR_5, VAR_6, VAR_18, VAR_14, VAR_7, VAR_9, VAR_8);
  goto out_mutex;
 }

 VAR_12 = 0;
 if (!FUNC_25(VAR_10))
  goto out_mutex;
 if ((VAR_8 & VAR_0) && !FUNC_11(VAR_10)) {
  if (FUNC_35(VAR_17, VAR_6, VAR_20) < 0) {
   VAR_12 = VAR_2;
   goto out_mutex;
  }

  FUNC_33(VAR_17, VAR_6, VAR_20);

  if (!(VAR_6->vm_flags & VAR_3))
   VAR_16 = FUNC_17(VAR_17,
        VAR_6, VAR_20);
 }

 VAR_11 = FUNC_7(VAR_17, VAR_5, VAR_9);


 if (FUNC_30(!FUNC_26(VAR_10, FUNC_12(VAR_9))))
  goto out_ptl;






 VAR_15 = FUNC_24(VAR_10);
 if (VAR_15 != VAR_16)
  if (!FUNC_29(VAR_15)) {
   VAR_19 = 1;
   goto out_ptl;
  }

 FUNC_1(VAR_15);

 if (VAR_8 & VAR_0) {
  if (!FUNC_11(VAR_10)) {
   VAR_12 = FUNC_14(VAR_5, VAR_6, VAR_7, VAR_9,
       VAR_16, VAR_11);
   goto out_put_page;
  }
  VAR_10 = FUNC_8(VAR_10);
 }
 VAR_10 = FUNC_23(VAR_10);
 if (FUNC_13(VAR_6, VAR_20, VAR_9, VAR_10,
      VAR_8 & VAR_0))
  FUNC_32(VAR_6, VAR_20, VAR_9);
out_put_page:
 if (VAR_15 != VAR_16)
  FUNC_31(VAR_15);
 FUNC_27(VAR_15);
out_ptl:
 FUNC_28(VAR_11);

 if (VAR_16) {
  FUNC_31(VAR_16);
  FUNC_27(VAR_16);
 }
out_mutex:
 FUNC_22(&VAR_4[VAR_13]);







 if (VAR_19)
  FUNC_36(VAR_15);
 return VAR_12;
}
