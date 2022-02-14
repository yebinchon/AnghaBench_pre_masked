
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; int vm_end; struct vm_area_struct* vm_next; } ;
struct mm_struct {int dummy; } ;


 unsigned long VAR_0 ;
 struct vm_area_struct* FUNC_0 (struct mm_struct*,unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 unsigned long FUNC_2 (unsigned long,int ) ;

__attribute__((used)) static unsigned long FUNC_3(struct mm_struct *VAR_1,
  unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4 = 0;
 struct vm_area_struct *VAR_5;


 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (!VAR_5)
  return 0;

 VAR_4 = (FUNC_2(VAR_3, VAR_5->vm_end) -
  FUNC_1(VAR_2, VAR_5->vm_start)) >> VAR_0;


 for (VAR_5 = VAR_5->vm_next; VAR_5; VAR_5 = VAR_5->vm_next) {
  unsigned long VAR_6;

  if (VAR_5->vm_start > VAR_3)
   break;

  VAR_6 = FUNC_2(VAR_3, VAR_5->vm_end) - VAR_5->vm_start;
  VAR_4 += VAR_6 >> VAR_0;
 }

 return VAR_4;
}
