
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {unsigned long val; } ;
typedef TYPE_1__ swp_entry_t ;
struct vm_area_struct {unsigned long vm_flags; } ;
struct page {int dummy; } ;
struct mm_struct {int mmlist; } ;
typedef int pte_t ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 struct page* FUNC_0 (TYPE_1__) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (TYPE_1__) ;
 scalar_t__ FUNC_4 (TYPE_1__) ;
 scalar_t__ FUNC_5 (TYPE_1__) ;
 scalar_t__ FUNC_6 (TYPE_1__) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 struct page* FUNC_12 (TYPE_1__) ;
 size_t FUNC_13 (struct page*) ;
 int VAR_2 ;
 int FUNC_14 (TYPE_1__) ;
 int FUNC_15 (struct page*,int) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 struct page* FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int ) ;
 TYPE_1__ FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (struct mm_struct*,unsigned long,int *) ;
 int FUNC_27 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 scalar_t__ FUNC_30 (TYPE_1__) ;
 int FUNC_31 (TYPE_1__) ;
 scalar_t__ FUNC_32 (int) ;
 struct page* FUNC_33 (struct vm_area_struct*,unsigned long,int ) ;

__attribute__((used)) static inline unsigned long
FUNC_34(struct mm_struct *VAR_3, struct mm_struct *VAR_4,
  pte_t *VAR_5, pte_t *VAR_6, struct vm_area_struct *VAR_7,
  unsigned long VAR_8, int *VAR_9)
{
 unsigned long VAR_10 = VAR_7->vm_flags;
 pte_t VAR_11 = *VAR_6;
 struct page *VAR_12;


 if (FUNC_32(!FUNC_20(VAR_11))) {
  swp_entry_t VAR_13 = FUNC_23(VAR_11);

  if (FUNC_7(!FUNC_14(VAR_13))) {
   if (FUNC_30(VAR_13) < 0)
    return VAR_13.val;


   if (FUNC_32(FUNC_9(&VAR_3->mmlist))) {
    FUNC_28(&VAR_2);
    if (FUNC_9(&VAR_3->mmlist))
     FUNC_8(&VAR_3->mmlist,
       &VAR_4->mmlist);
    FUNC_29(&VAR_2);
   }
   VAR_9[VAR_0]++;
  } else if (FUNC_4(VAR_13)) {
   VAR_12 = FUNC_12(VAR_13);

   VAR_9[FUNC_13(VAR_12)]++;

   if (FUNC_6(VAR_13) &&
     FUNC_2(VAR_10)) {




    FUNC_11(&VAR_13);
    VAR_11 = FUNC_31(VAR_13);
    if (FUNC_22(*VAR_6))
     VAR_11 = FUNC_21(VAR_11);
    FUNC_27(VAR_4, VAR_8, VAR_6, VAR_11);
   }
  } else if (FUNC_3(VAR_13)) {
   VAR_12 = FUNC_0(VAR_13);
   FUNC_1(VAR_12);
   VAR_9[FUNC_13(VAR_12)]++;
   FUNC_15(VAR_12, 0);
   if (FUNC_5(VAR_13) &&
       FUNC_2(VAR_10)) {
    FUNC_10(&VAR_13);
    VAR_11 = FUNC_31(VAR_13);
    FUNC_27(VAR_4, VAR_8, VAR_6, VAR_11);
   }
  }
  goto out_set_pte;
 }





 if (FUNC_2(VAR_10) && FUNC_24(VAR_11)) {
  FUNC_26(VAR_4, VAR_8, VAR_6);
  VAR_11 = FUNC_25(VAR_11);
 }





 if (VAR_10 & VAR_1)
  VAR_11 = FUNC_17(VAR_11);
 VAR_11 = FUNC_18(VAR_11);

 VAR_12 = FUNC_33(VAR_7, VAR_8, VAR_11);
 if (VAR_12) {
  FUNC_1(VAR_12);
  FUNC_15(VAR_12, 0);
  VAR_9[FUNC_13(VAR_12)]++;
 } else if (FUNC_16(VAR_11)) {
  VAR_12 = FUNC_19(VAR_11);
 }

out_set_pte:
 FUNC_27(VAR_3, VAR_8, VAR_5, VAR_11);
 return 0;
}
