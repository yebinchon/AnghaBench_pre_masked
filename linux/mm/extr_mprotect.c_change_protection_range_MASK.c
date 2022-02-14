
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
typedef int pgprot_t ;
typedef int pgd_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,int *,unsigned long,unsigned long,int ,int,int) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_4 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_5 (struct mm_struct*) ;
 unsigned long FUNC_6 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (struct mm_struct*,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_9(struct vm_area_struct *VAR_0,
  unsigned long VAR_1, unsigned long VAR_2, pgprot_t VAR_3,
  int VAR_4, int VAR_5)
{
 struct mm_struct *VAR_6 = VAR_0->vm_mm;
 pgd_t *VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9 = VAR_1;
 unsigned long VAR_10 = 0;

 FUNC_0(VAR_1 >= VAR_2);
 VAR_7 = FUNC_8(VAR_6, VAR_1);
 FUNC_3(VAR_0, VAR_1, VAR_2);
 FUNC_5(VAR_6);
 do {
  VAR_8 = FUNC_6(VAR_1, VAR_2);
  if (FUNC_7(VAR_7))
   continue;
  VAR_10 += FUNC_1(VAR_0, VAR_7, VAR_1, VAR_8, VAR_3,
     VAR_4, VAR_5);
 } while (VAR_7++, VAR_1 = VAR_8, VAR_1 != VAR_2);


 if (VAR_10)
  FUNC_4(VAR_0, VAR_9, VAR_2);
 FUNC_2(VAR_6);

 return VAR_10;
}
