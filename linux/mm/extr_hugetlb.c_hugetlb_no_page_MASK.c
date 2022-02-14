
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
typedef size_t u32 ;
struct vm_fault {unsigned long address; unsigned int flags; struct vm_area_struct* vma; } ;
struct vm_area_struct {int vm_flags; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
struct hstate {int dummy; } ;
struct address_space {int host; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef unsigned long pgoff_t ;
struct TYPE_2__ {int pid; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct page*) ;
 struct page* FUNC_6 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_7 (struct vm_area_struct*) ;
 int FUNC_8 (struct page*,unsigned long,int ) ;
 TYPE_1__* VAR_10 ;
 struct page* FUNC_9 (struct address_space*,unsigned long) ;
 int FUNC_10 (struct vm_fault*,int ) ;
 int FUNC_11 (struct hstate*) ;
 struct hstate* FUNC_12 (struct vm_area_struct*) ;
 int FUNC_13 (struct page*,struct address_space*,unsigned long) ;
 unsigned long FUNC_14 (struct hstate*) ;
 unsigned long FUNC_15 (struct hstate*) ;
 int * FUNC_16 (struct hstate*,struct mm_struct*,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct page*,struct vm_area_struct*,unsigned long) ;
 int FUNC_20 (int ,struct mm_struct*) ;
 int FUNC_21 (struct mm_struct*,struct vm_area_struct*,unsigned long,int *,struct page*,int *) ;
 size_t FUNC_22 (struct hstate*,struct address_space*,unsigned long,unsigned long) ;
 int * VAR_11 ;
 unsigned long FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (struct vm_area_struct*,int ) ;
 int FUNC_25 (struct page*) ;
 int FUNC_26 (struct vm_area_struct*,struct page*,int) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (struct page*,int) ;
 int FUNC_30 (struct hstate*) ;
 int FUNC_31 (char*,int ) ;
 int FUNC_32 (struct page*) ;
 int FUNC_33 (struct hstate*,struct vm_area_struct*,unsigned long,struct page*) ;
 int FUNC_34 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_35 (struct page*) ;
 int FUNC_36 (int *) ;
 scalar_t__ FUNC_37 (int ) ;
 int FUNC_38 (struct page*) ;
 scalar_t__ FUNC_39 (struct vm_area_struct*) ;
 int FUNC_40 (struct hstate*,struct vm_area_struct*,unsigned long) ;
 scalar_t__ FUNC_41 (struct hstate*,struct vm_area_struct*,unsigned long) ;
 int FUNC_42 (int ) ;

__attribute__((used)) static vm_fault_t FUNC_43(struct mm_struct *VAR_12,
   struct vm_area_struct *VAR_13,
   struct address_space *VAR_14, pgoff_t VAR_15,
   unsigned long VAR_16, pte_t *VAR_17, unsigned int VAR_18)
{
 struct hstate *VAR_19 = FUNC_12(VAR_13);
 vm_fault_t VAR_20 = VAR_5;
 int VAR_21 = 0;
 unsigned long VAR_22;
 struct page *VAR_23;
 pte_t VAR_24;
 spinlock_t *VAR_25;
 unsigned long VAR_26 = VAR_16 & FUNC_14(VAR_19);
 bool VAR_27 = 0;






 if (FUNC_24(VAR_13, VAR_2)) {
  FUNC_31("PID %d killed due to inadequate hugepage pool\n",
      VAR_10->pid);
  return VAR_20;
 }





retry:
 VAR_23 = FUNC_9(VAR_14, VAR_15);
 if (!VAR_23) {
  VAR_22 = FUNC_23(VAR_14->host) >> FUNC_15(VAR_19);
  if (VAR_15 >= VAR_22)
   goto out;




  if (FUNC_39(VAR_13)) {
   u32 VAR_28;
   struct vm_fault VAR_29 = {
    .vma = VAR_13,
    .address = VAR_26,
    .flags = VAR_18,







   };






   VAR_28 = FUNC_22(VAR_19, VAR_14, VAR_15, VAR_26);
   FUNC_28(&VAR_11[VAR_28]);
   VAR_20 = FUNC_10(&VAR_29, VAR_8);
   FUNC_27(&VAR_11[VAR_28]);
   goto out;
  }

  VAR_23 = FUNC_6(VAR_13, VAR_26, 0);
  if (FUNC_1(VAR_23)) {
   VAR_25 = FUNC_16(VAR_19, VAR_12, VAR_17);
   if (!FUNC_17(FUNC_18(VAR_17))) {
    VAR_20 = 0;
    FUNC_36(VAR_25);
    goto out;
   }
   FUNC_36(VAR_25);
   VAR_20 = FUNC_42(FUNC_2(VAR_23));
   goto out;
  }
  FUNC_8(VAR_23, VAR_16, FUNC_30(VAR_19));
  FUNC_5(VAR_23);
  VAR_27 = 1;

  if (VAR_13->vm_flags & VAR_6) {
   int VAR_30 = FUNC_13(VAR_23, VAR_14, VAR_15);
   if (VAR_30) {
    FUNC_32(VAR_23);
    if (VAR_30 == -VAR_0)
     goto retry;
    goto out;
   }
  } else {
   FUNC_25(VAR_23);
   if (FUNC_37(FUNC_7(VAR_13))) {
    VAR_20 = VAR_4;
    goto backout_unlocked;
   }
   VAR_21 = 1;
  }
 } else {





  if (FUNC_37(FUNC_3(VAR_23))) {
   VAR_20 = VAR_3 |
    FUNC_4(FUNC_11(VAR_19));
   goto backout_unlocked;
  }
 }







 if ((VAR_18 & VAR_1) && !(VAR_13->vm_flags & VAR_7)) {
  if (FUNC_41(VAR_19, VAR_13, VAR_26) < 0) {
   VAR_20 = VAR_4;
   goto backout_unlocked;
  }

  FUNC_40(VAR_19, VAR_13, VAR_26);
 }

 VAR_25 = FUNC_16(VAR_19, VAR_12, VAR_17);
 VAR_22 = FUNC_23(VAR_14->host) >> FUNC_15(VAR_19);
 if (VAR_15 >= VAR_22)
  goto backout;

 VAR_20 = 0;
 if (!FUNC_17(FUNC_18(VAR_17)))
  goto backout;

 if (VAR_21) {
  FUNC_0(VAR_23);
  FUNC_19(VAR_23, VAR_13, VAR_26);
 } else
  FUNC_29(VAR_23, 1);
 VAR_24 = FUNC_26(VAR_13, VAR_23, ((VAR_13->vm_flags & VAR_9)
    && (VAR_13->vm_flags & VAR_7)));
 FUNC_34(VAR_12, VAR_26, VAR_17, VAR_24);

 FUNC_20(FUNC_30(VAR_19), VAR_12);
 if ((VAR_18 & VAR_1) && !(VAR_13->vm_flags & VAR_7)) {

  VAR_20 = FUNC_21(VAR_12, VAR_13, VAR_16, VAR_17, VAR_23, VAR_25);
 }

 FUNC_36(VAR_25);






 if (VAR_27)
  FUNC_35(VAR_23);

 FUNC_38(VAR_23);
out:
 return VAR_20;

backout:
 FUNC_36(VAR_25);
backout_unlocked:
 FUNC_38(VAR_23);
 FUNC_33(VAR_19, VAR_13, VAR_26, VAR_23);
 FUNC_32(VAR_23);
 goto out;
}
