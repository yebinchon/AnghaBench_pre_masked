
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pmd_t ;
typedef int pgtable_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (int *,struct vm_area_struct*) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mm_struct*,int *,int ) ;
 int FUNC_6 (struct mm_struct*,int *) ;
 int * FUNC_7 (struct mm_struct*,int *) ;
 scalar_t__ FUNC_8 (int *,int *,struct vm_area_struct*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct mm_struct*,unsigned long,int *) ;
 int FUNC_13 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;

bool FUNC_16(struct vm_area_struct *VAR_4, unsigned long VAR_5,
    unsigned long VAR_6, unsigned long VAR_7,
    pmd_t *VAR_8, pmd_t *VAR_9)
{
 spinlock_t *VAR_10, *VAR_11;
 pmd_t VAR_12;
 struct mm_struct *VAR_13 = VAR_4->vm_mm;
 bool VAR_14 = 0;

 if ((VAR_5 & ~VAR_0) ||
     (VAR_6 & ~VAR_0) ||
     VAR_7 - VAR_5 < VAR_1)
  return 0;





 if (FUNC_1(!FUNC_9(*VAR_9))) {
  FUNC_0(FUNC_11(*VAR_9));
  return 0;
 }





 VAR_10 = FUNC_2(VAR_8, VAR_4);
 if (VAR_10) {
  VAR_11 = FUNC_7(VAR_13, VAR_9);
  if (VAR_11 != VAR_10)
   FUNC_14(VAR_11, VAR_3);
  VAR_12 = FUNC_12(VAR_13, VAR_5, VAR_8);
  if (FUNC_10(VAR_12))
   VAR_14 = 1;
  FUNC_0(!FUNC_9(*VAR_9));

  if (FUNC_8(VAR_11, VAR_10, VAR_4)) {
   pgtable_t VAR_15;
   VAR_15 = FUNC_6(VAR_13, VAR_8);
   FUNC_5(VAR_13, VAR_9, VAR_15);
  }
  VAR_12 = FUNC_4(VAR_12);
  FUNC_13(VAR_13, VAR_6, VAR_9, VAR_12);
  if (VAR_14)
   FUNC_3(VAR_4, VAR_5, VAR_5 + VAR_2);
  if (VAR_11 != VAR_10)
   FUNC_15(VAR_11);
  FUNC_15(VAR_10);
  return 1;
 }
 return 0;
}
