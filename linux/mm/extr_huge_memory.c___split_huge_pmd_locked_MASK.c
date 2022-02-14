
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct vm_area_struct {unsigned long vm_start; scalar_t__ vm_end; int vm_page_prot; struct mm_struct* vm_mm; } ;
struct page {int _mapcount; } ;
struct mm_struct {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgtable_t ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,struct page*) ;
 int FUNC_10 (int,struct vm_area_struct*) ;
 int FUNC_11 (struct page*,int ) ;
 void FUNC_12 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_13 (struct mm_struct*,int ,int) ;
 scalar_t__ FUNC_14 () ;
 scalar_t__ FUNC_15 (int,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (struct page*) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (struct page*,int) ;
 int FUNC_25 (int ,struct vm_area_struct*) ;
 int FUNC_26 (struct page*,int ) ;
 int FUNC_27 (struct page*) ;
 int FUNC_28 (struct page*) ;
 int FUNC_29 (struct page*,int) ;
 int FUNC_30 (struct page*,int) ;
 struct page* FUNC_31 (int ) ;
 int FUNC_32 (struct mm_struct*,int *) ;
 int FUNC_33 (int ) ;
 scalar_t__ FUNC_34 (int ) ;
 struct page* FUNC_35 (int ) ;
 int FUNC_36 (struct mm_struct*,int *,int ) ;
 int FUNC_37 (int ) ;
 int FUNC_38 (int ) ;
 int FUNC_39 (int ) ;
 int FUNC_40 (int ) ;
 int FUNC_41 (int ) ;
 int FUNC_42 (int ) ;
 int FUNC_43 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_44 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_45 (int ) ;
 int FUNC_46 (int ) ;
 int FUNC_47 (int ) ;
 int * FUNC_48 (int *,unsigned long) ;
 int FUNC_49 (int ) ;
 int FUNC_50 (int *) ;
 int FUNC_51 (int ) ;
 int FUNC_52 (struct page*) ;
 int FUNC_53 (struct page*) ;
 int FUNC_54 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_55 () ;
 int FUNC_56 (int ) ;
 int FUNC_57 (int ) ;
 scalar_t__ FUNC_58 (int) ;
 int FUNC_59 (struct vm_area_struct*) ;
 scalar_t__ FUNC_60 (struct vm_area_struct*) ;
 int FUNC_61 (struct mm_struct*,int *) ;

__attribute__((used)) static void FUNC_62(struct vm_area_struct *VAR_6, pmd_t *VAR_7,
  unsigned long VAR_8, bool VAR_9)
{
 struct mm_struct *VAR_10 = VAR_6->vm_mm;
 struct page *VAR_11;
 pgtable_t VAR_12;
 pmd_t VAR_13, VAR_14;
 bool VAR_15, VAR_16, VAR_17, VAR_18 = 0;
 unsigned long VAR_19;
 int VAR_20;

 FUNC_8(VAR_8 & ~VAR_0);
 FUNC_10(VAR_6->vm_start > VAR_8, VAR_6);
 FUNC_10(VAR_6->vm_end < VAR_8 + VAR_2, VAR_6);
 FUNC_8(!FUNC_22(*VAR_7) && !FUNC_40(*VAR_7)
    && !FUNC_33(*VAR_7));

 FUNC_20(VAR_5);

 if (!FUNC_59(VAR_6)) {
  VAR_14 = FUNC_43(VAR_6, VAR_8, VAR_7);




  if (FUNC_14())
   FUNC_61(VAR_10, VAR_7);
  if (FUNC_60(VAR_6))
   return;
  VAR_11 = FUNC_35(VAR_14);
  if (!FUNC_1(VAR_11) && FUNC_34(VAR_14))
   FUNC_53(VAR_11);
  if (!FUNC_2(VAR_11) && FUNC_42(VAR_14))
   FUNC_5(VAR_11);
  FUNC_30(VAR_11, 1);
  FUNC_52(VAR_11);
  FUNC_13(VAR_10, FUNC_27(VAR_11), -VAR_1);
  return;
 } else if (FUNC_21(*VAR_7)) {
  return FUNC_12(VAR_6, VAR_8, VAR_7);
 }
 VAR_13 = FUNC_44(VAR_6, VAR_8, VAR_7);

 VAR_18 = FUNC_22(VAR_13);
 if (FUNC_58(VAR_18)) {
  swp_entry_t VAR_21;

  VAR_21 = FUNC_39(VAR_13);
  VAR_11 = FUNC_31(FUNC_57(VAR_21));
  VAR_16 = FUNC_23(VAR_21);
  VAR_15 = 0;
  VAR_17 = FUNC_38(VAR_13);
 } else {
  VAR_11 = FUNC_35(VAR_13);
  if (FUNC_34(VAR_13))
   FUNC_4(VAR_11);
  VAR_16 = FUNC_41(VAR_13);
  VAR_15 = FUNC_42(VAR_13);
  VAR_17 = FUNC_37(VAR_13);
 }
 FUNC_9(!FUNC_28(VAR_11), VAR_11);
 FUNC_29(VAR_11, VAR_1 - 1);





 VAR_12 = FUNC_32(VAR_10, VAR_7);
 FUNC_36(VAR_10, &VAR_14, VAR_12);

 for (VAR_20 = 0, VAR_19 = VAR_8; VAR_20 < VAR_1; VAR_20++, VAR_19 += VAR_4) {
  pte_t VAR_22, *VAR_23;





  if (VAR_9 || VAR_18) {
   swp_entry_t VAR_24;
   VAR_24 = FUNC_24(VAR_11 + VAR_20, VAR_16);
   VAR_22 = FUNC_56(VAR_24);
   if (VAR_17)
    VAR_22 = FUNC_49(VAR_22);
  } else {
   VAR_22 = FUNC_26(VAR_11 + VAR_20, FUNC_3(VAR_6->vm_page_prot));
   VAR_22 = FUNC_25(VAR_22, VAR_6);
   if (!VAR_16)
    VAR_22 = FUNC_51(VAR_22);
   if (!VAR_15)
    VAR_22 = FUNC_45(VAR_22);
   if (VAR_17)
    VAR_22 = FUNC_46(VAR_22);
  }
  VAR_23 = FUNC_48(&VAR_14, VAR_19);
  FUNC_0(!FUNC_47(*VAR_23));
  FUNC_54(VAR_10, VAR_19, VAR_23, VAR_22);
  FUNC_17(&VAR_11[VAR_20]._mapcount);
  FUNC_50(VAR_23);
 }





 if (FUNC_18(VAR_11) > 1 && !FUNC_7(VAR_11)) {
  for (VAR_20 = 0; VAR_20 < VAR_1; VAR_20++)
   FUNC_17(&VAR_11[VAR_20]._mapcount);
 }

 if (FUNC_15(-1, FUNC_19(VAR_11))) {

  FUNC_11(VAR_11, VAR_3);
  if (FUNC_6(VAR_11)) {

   for (VAR_20 = 0; VAR_20 < VAR_1; VAR_20++)
    FUNC_16(&VAR_11[VAR_20]._mapcount);
  }
 }

 FUNC_55();
 FUNC_36(VAR_10, VAR_7, VAR_12);

 if (VAR_9) {
  for (VAR_20 = 0; VAR_20 < VAR_1; VAR_20++) {
   FUNC_30(VAR_11 + VAR_20, 0);
   FUNC_52(VAR_11 + VAR_20);
  }
 }
}
