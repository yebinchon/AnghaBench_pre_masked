
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; unsigned long vm_start; unsigned long vm_end; unsigned long vm_pgoff; struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
typedef int pgprot_t ;
typedef int pgd_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;
 unsigned long FUNC_4 (unsigned long,unsigned long) ;
 int * FUNC_5 (struct mm_struct*,unsigned long) ;
 int FUNC_6 (struct mm_struct*,int *,unsigned long,unsigned long,unsigned long,int ) ;
 int FUNC_7 (struct vm_area_struct*,int *,unsigned long,unsigned long,unsigned long) ;
 int FUNC_8 (struct vm_area_struct*,unsigned long,unsigned long) ;

int FUNC_9(struct vm_area_struct *VAR_6, unsigned long VAR_7,
      unsigned long VAR_8, unsigned long VAR_9, pgprot_t VAR_10)
{
 pgd_t *VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13 = VAR_7 + FUNC_1(VAR_9);
 struct mm_struct *VAR_14 = VAR_6->vm_mm;
 unsigned long VAR_15 = VAR_8;
 int VAR_16;
 if (FUNC_3(VAR_6->vm_flags)) {
  if (VAR_7 != VAR_6->vm_start || VAR_13 != VAR_6->vm_end)
   return -VAR_0;
  VAR_6->vm_pgoff = VAR_8;
 }

 VAR_16 = FUNC_7(VAR_6, &VAR_10, VAR_15, VAR_7, FUNC_1(VAR_9));
 if (VAR_16)
  return -VAR_0;

 VAR_6->vm_flags |= VAR_4 | VAR_5 | VAR_3 | VAR_2;

 FUNC_0(VAR_7 >= VAR_13);
 VAR_8 -= VAR_7 >> VAR_1;
 VAR_11 = FUNC_5(VAR_14, VAR_7);
 FUNC_2(VAR_6, VAR_7, VAR_13);
 do {
  VAR_12 = FUNC_4(VAR_7, VAR_13);
  VAR_16 = FUNC_6(VAR_14, VAR_11, VAR_7, VAR_12,
    VAR_8 + (VAR_7 >> VAR_1), VAR_10);
  if (VAR_16)
   break;
 } while (VAR_11++, VAR_7 = VAR_12, VAR_7 != VAR_13);

 if (VAR_16)
  FUNC_8(VAR_6, VAR_15, FUNC_1(VAR_9));

 return VAR_16;
}
