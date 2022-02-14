
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_mm; } ;
typedef int pgd_t ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct vm_area_struct*,int *,unsigned long,unsigned long,unsigned int,int,unsigned long*) ;

__attribute__((used)) static int FUNC_4(struct vm_area_struct *VAR_0, unsigned int VAR_1,
       bool VAR_2, unsigned long *VAR_3)
{
 pgd_t *VAR_4;
 unsigned long VAR_5, VAR_6, VAR_7;
 int VAR_8;

 VAR_5 = VAR_0->vm_start;
 VAR_6 = VAR_0->vm_end;

 VAR_4 = FUNC_2(VAR_0->vm_mm, VAR_5);
 do {
  VAR_7 = FUNC_0(VAR_5, VAR_6);
  if (FUNC_1(VAR_4))
   continue;
  VAR_8 = FUNC_3(VAR_0, VAR_4, VAR_5, VAR_7, VAR_1,
          VAR_2, VAR_3);
  if (VAR_8)
   return VAR_8;
 } while (VAR_4++, VAR_5 = VAR_7, VAR_5 != VAR_6);
 return 0;
}
