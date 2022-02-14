
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {unsigned long address; int * pte; struct vm_area_struct* vma; int orig_pte; int pgoff; int * pmd; int flags; } ;
struct vm_area_struct {int dummy; } ;
struct mm_struct {int mmap_sem; } ;
typedef int pmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vm_fault*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct mm_struct*,unsigned long,struct vm_area_struct**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vm_area_struct*,unsigned long) ;
 int * FUNC_5 (struct mm_struct*,unsigned long) ;
 void* FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mm_struct*,int,int,int) ;

__attribute__((used)) static bool FUNC_9(struct mm_struct *VAR_5,
     struct vm_area_struct *VAR_6,
     unsigned long VAR_7, pmd_t *VAR_8,
     int VAR_9)
{
 int VAR_10 = 0;
 vm_fault_t VAR_11 = 0;
 struct vm_fault VAR_12 = {
  .vma = VAR_6,
  .address = VAR_7,
  .flags = VAR_0,
  .pmd = VAR_8,
  .pgoff = FUNC_4(VAR_6, VAR_7),
 };


 if (VAR_9 < VAR_1/2) {
  FUNC_8(VAR_5, VAR_10, VAR_9, 0);
  return 0;
 }
 VAR_12.pte = FUNC_6(VAR_8, VAR_7);
 for (; VAR_12.address < VAR_7 + VAR_1*VAR_2;
   VAR_12.pte++, VAR_12.address += VAR_2) {
  VAR_12.orig_pte = *VAR_12.pte;
  if (!FUNC_3(VAR_12.orig_pte))
   continue;
  VAR_10++;
  VAR_11 = FUNC_0(&VAR_12);


  if (VAR_11 & VAR_4) {
   FUNC_1(&VAR_5->mmap_sem);
   if (FUNC_2(VAR_5, VAR_7, &VAR_12.vma)) {

    FUNC_8(VAR_5, VAR_10, VAR_9, 0);
    return 0;
   }

   if (FUNC_5(VAR_5, VAR_7) != VAR_8) {
    FUNC_8(VAR_5, VAR_10, VAR_9, 0);
    return 0;
   }
  }
  if (VAR_11 & VAR_3) {
   FUNC_8(VAR_5, VAR_10, VAR_9, 0);
   return 0;
  }

  VAR_12.pte = FUNC_6(VAR_8, VAR_12.address);
 }
 VAR_12.pte--;
 FUNC_7(VAR_12.pte);
 FUNC_8(VAR_5, VAR_10, VAR_9, 1);
 return 1;
}
