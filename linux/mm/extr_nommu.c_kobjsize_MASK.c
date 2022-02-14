
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned int vm_end; unsigned int vm_start; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int mm; } ;


 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 TYPE_1__* VAR_0 ;
 struct vm_area_struct* FUNC_2 (int ,unsigned long) ;
 unsigned int FUNC_3 (void const*) ;
 unsigned int FUNC_4 (struct page*) ;
 int FUNC_5 (void const*) ;
 struct page* FUNC_6 (void const*) ;

unsigned int FUNC_7(const void *VAR_1)
{
 struct page *VAR_2;





 if (!VAR_1 || !FUNC_5(VAR_1))
  return 0;

 VAR_2 = FUNC_6(VAR_1);





 if (FUNC_1(VAR_2))
  return FUNC_3(VAR_1);







 if (!FUNC_0(VAR_2)) {
  struct vm_area_struct *VAR_3;

  VAR_3 = FUNC_2(VAR_0->mm, (unsigned long)VAR_1);
  if (VAR_3)
   return VAR_3->vm_end - VAR_3->vm_start;
 }





 return FUNC_4(VAR_2);
}
