
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_page_prot; struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct vm_area_struct*) ;
 int FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_5 (int ,int ,unsigned long,unsigned long) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (struct mm_struct*,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (int *,unsigned long) ;
 int * FUNC_10 (struct mm_struct*,int *,unsigned long,int **) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (struct mm_struct*,unsigned long,int *) ;
 int FUNC_15 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct vm_area_struct*) ;

__attribute__((used)) static void FUNC_19(struct vm_area_struct *VAR_2, pmd_t *VAR_3,
  unsigned long VAR_4, unsigned long VAR_5,
  struct vm_area_struct *VAR_6, pmd_t *VAR_7,
  unsigned long VAR_8, bool VAR_9)
{
 struct mm_struct *VAR_10 = VAR_2->vm_mm;
 pte_t *VAR_11, *VAR_12, VAR_13;
 spinlock_t *VAR_14, *VAR_15;
 bool VAR_16 = 0;
 unsigned long VAR_17 = VAR_5 - VAR_4;
 if (VAR_9)
  FUNC_18(VAR_2);





 VAR_11 = FUNC_10(VAR_10, VAR_3, VAR_4, &VAR_14);
 VAR_12 = FUNC_9(VAR_7, VAR_8);
 VAR_15 = FUNC_7(VAR_10, VAR_7);
 if (VAR_15 != VAR_14)
  FUNC_16(VAR_15, VAR_1);
 FUNC_3(VAR_2->vm_mm);
 FUNC_0();

 for (; VAR_4 < VAR_5; VAR_11++, VAR_4 += VAR_0,
       VAR_12++, VAR_8 += VAR_0) {
  if (FUNC_8(*VAR_11))
   continue;

  VAR_13 = FUNC_14(VAR_10, VAR_4, VAR_11);
  if (FUNC_11(VAR_13))
   VAR_16 = 1;
  VAR_13 = FUNC_5(VAR_13, VAR_6->vm_page_prot, VAR_4, VAR_8);
  VAR_13 = FUNC_6(VAR_13);
  FUNC_15(VAR_10, VAR_8, VAR_12, VAR_13);
 }

 FUNC_1();
 if (VAR_16)
  FUNC_4(VAR_2, VAR_5 - VAR_17, VAR_5);
 if (VAR_15 != VAR_14)
  FUNC_17(VAR_15);
 FUNC_12(VAR_12 - 1);
 FUNC_13(VAR_11 - 1, VAR_14);
 if (VAR_9)
  FUNC_2(VAR_2);
}
