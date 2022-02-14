
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct vm_area_struct {int dummy; } ;
struct mm_walk {unsigned char* private; int mm; struct vm_area_struct* vma; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long,unsigned long,struct vm_area_struct*,unsigned char*) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned char*,int,int) ;
 unsigned char FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int *,struct vm_area_struct*) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (int ,int *,unsigned long,int **) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(pmd_t *VAR_2, unsigned long VAR_3, unsigned long VAR_4,
   struct mm_walk *VAR_5)
{
 spinlock_t *VAR_6;
 struct vm_area_struct *VAR_7 = VAR_5->vma;
 pte_t *VAR_8;
 unsigned char *VAR_9 = VAR_5->private;
 int VAR_10 = (VAR_4 - VAR_3) >> VAR_0;

 VAR_6 = FUNC_6(VAR_2, VAR_7);
 if (VAR_6) {
  FUNC_3(VAR_9, 1, VAR_10);
  FUNC_13(VAR_6);
  goto out;
 }

 if (FUNC_7(VAR_2)) {
  FUNC_1(VAR_3, VAR_4, VAR_7, VAR_9);
  goto out;
 }

 VAR_8 = FUNC_9(VAR_5->mm, VAR_2, VAR_3, &VAR_6);
 for (; VAR_3 != VAR_4; VAR_8++, VAR_3 += VAR_1) {
  pte_t VAR_11 = *VAR_8;

  if (FUNC_8(VAR_11))
   FUNC_1(VAR_3, VAR_3 + VAR_1,
       VAR_7, VAR_9);
  else if (FUNC_10(VAR_11))
   *VAR_9 = 1;
  else {
   swp_entry_t VAR_12 = FUNC_11(VAR_11);

   if (FUNC_5(VAR_12)) {




    *VAR_9 = 1;
   } else {




    FUNC_0(1);
    *VAR_9 = 1;

   }
  }
  VAR_9++;
 }
 FUNC_12(VAR_8 - 1, VAR_6);
out:
 VAR_5->private += VAR_10;
 FUNC_2();
 return 0;
}
