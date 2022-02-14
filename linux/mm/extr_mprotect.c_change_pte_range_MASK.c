
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int swp_entry_t ;
struct vm_area_struct {int vm_flags; TYPE_1__* vm_mm; } ;
struct page {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgprot_t ;
struct TYPE_4__ {int mm_users; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct page*) ;
 scalar_t__ FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int ) ;
 int * FUNC_21 (TYPE_1__*,int *,unsigned long,int **) ;
 scalar_t__ FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int *,int *) ;
 scalar_t__ FUNC_29 (int ) ;
 int FUNC_30 (struct vm_area_struct*,unsigned long,int *,int ,int ) ;
 int FUNC_31 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_32 (TYPE_1__*,unsigned long,int *,int ) ;
 int FUNC_33 (int ) ;
 struct page* FUNC_34 (struct vm_area_struct*,unsigned long,int ) ;

__attribute__((used)) static unsigned long FUNC_35(struct vm_area_struct *VAR_5, pmd_t *VAR_6,
  unsigned long VAR_7, unsigned long VAR_8, pgprot_t VAR_9,
  int VAR_10, int VAR_11)
{
 pte_t *VAR_12, VAR_13;
 spinlock_t *VAR_14;
 unsigned long VAR_15 = 0;
 int VAR_16 = VAR_1;







 if (FUNC_16(VAR_6))
  return 0;






 VAR_12 = FUNC_21(VAR_5->vm_mm, VAR_6, VAR_7, &VAR_14);


 if (VAR_11 && !(VAR_5->vm_flags & VAR_3) &&
     FUNC_5(&VAR_5->vm_mm->mm_users) == 1)
  VAR_16 = FUNC_12();

 FUNC_6(VAR_5->vm_mm);
 FUNC_3();
 do {
  VAR_13 = *VAR_12;
  if (FUNC_22(VAR_13)) {
   pte_t VAR_17;
   bool VAR_18 = VAR_11 && FUNC_29(VAR_13);





   if (VAR_11) {
    struct page *VAR_19;

    VAR_19 = FUNC_34(VAR_5, VAR_7, VAR_13);
    if (!VAR_19 || FUNC_2(VAR_19))
     continue;


    if (FUNC_7(VAR_5->vm_flags) &&
        FUNC_14(VAR_19) != 1)
     continue;






    if (FUNC_13(VAR_19) && FUNC_1(VAR_19))
     continue;


    if (FUNC_23(VAR_13))
     continue;





    if (VAR_16 == FUNC_15(VAR_19))
     continue;
   }

   VAR_13 = FUNC_31(VAR_5, VAR_7, VAR_12);
   VAR_17 = FUNC_20(VAR_13, VAR_9);
   if (VAR_18)
    VAR_17 = FUNC_18(VAR_17);


   if (VAR_10 && FUNC_17(VAR_17) &&
     (FUNC_24(VAR_17) ||
      !(VAR_5->vm_flags & VAR_4))) {
    VAR_17 = FUNC_19(VAR_17);
   }
   FUNC_30(VAR_5, VAR_7, VAR_12, VAR_13, VAR_17);
   VAR_15++;
  } else if (FUNC_0(VAR_0)) {
   swp_entry_t VAR_20 = FUNC_27(VAR_13);

   if (FUNC_9(VAR_20)) {
    pte_t VAR_21;




    FUNC_11(&VAR_20);
    VAR_21 = FUNC_33(VAR_20);
    if (FUNC_26(VAR_13))
     VAR_21 = FUNC_25(VAR_21);
    FUNC_32(VAR_5->vm_mm, VAR_7, VAR_12, VAR_21);

    VAR_15++;
   }

   if (FUNC_8(VAR_20)) {
    pte_t VAR_22;





    FUNC_10(&VAR_20);
    VAR_22 = FUNC_33(VAR_20);
    FUNC_32(VAR_5->vm_mm, VAR_7, VAR_12, VAR_22);

    VAR_15++;
   }
  }
 } while (VAR_12++, VAR_7 += VAR_2, VAR_7 != VAR_8);
 FUNC_4();
 FUNC_28(VAR_12 - 1, VAR_14);

 return VAR_15;
}
