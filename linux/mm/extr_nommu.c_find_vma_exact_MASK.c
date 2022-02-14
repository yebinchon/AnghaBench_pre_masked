
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; struct vm_area_struct* vm_next; } ;
struct mm_struct {struct vm_area_struct* mmap; } ;


 struct vm_area_struct* FUNC_0 (struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long,struct vm_area_struct*) ;

__attribute__((used)) static struct vm_area_struct *FUNC_2(struct mm_struct *VAR_0,
          unsigned long VAR_1,
          unsigned long VAR_2)
{
 struct vm_area_struct *VAR_3;
 unsigned long VAR_4 = VAR_1 + VAR_2;


 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_4);
 if (VAR_3)
  return VAR_3;



 for (VAR_3 = VAR_0->mmap; VAR_3; VAR_3 = VAR_3->vm_next) {
  if (VAR_3->vm_start < VAR_1)
   continue;
  if (VAR_3->vm_start > VAR_1)
   return ((void*)0);
  if (VAR_3->vm_end == VAR_4) {
   FUNC_1(VAR_1, VAR_3);
   return VAR_3;
  }
 }

 return ((void*)0);
}
