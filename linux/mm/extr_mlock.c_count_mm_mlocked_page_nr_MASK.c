
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int vm_flags; struct vm_area_struct* vm_next; } ;
struct mm_struct {struct vm_area_struct* mmap; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct vm_area_struct* FUNC_0 (struct mm_struct*,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(struct mm_struct *VAR_3,
  unsigned long VAR_4, size_t VAR_5)
{
 struct vm_area_struct *VAR_6;
 unsigned long VAR_7 = 0;

 if (VAR_3 == ((void*)0))
  VAR_3 = VAR_2->mm;

 VAR_6 = FUNC_0(VAR_3, VAR_4);
 if (VAR_6 == ((void*)0))
  VAR_6 = VAR_3->mmap;

 for (; VAR_6 ; VAR_6 = VAR_6->vm_next) {
  if (VAR_4 >= VAR_6->vm_end)
   continue;
  if (VAR_4 + VAR_5 <= VAR_6->vm_start)
   break;
  if (VAR_6->vm_flags & VAR_1) {
   if (VAR_4 > VAR_6->vm_start)
    VAR_7 -= (VAR_4 - VAR_6->vm_start);
   if (VAR_4 + VAR_5 < VAR_6->vm_end) {
    VAR_7 += VAR_4 + VAR_5 - VAR_6->vm_start;
    break;
   }
   VAR_7 += VAR_6->vm_end - VAR_6->vm_start;
  }
 }

 return VAR_7 >> VAR_0;
}
