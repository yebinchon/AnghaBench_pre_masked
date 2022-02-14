
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; struct vm_area_struct* vm_next; struct vm_area_struct* vm_prev; } ;
struct mm_struct {int highest_vm_end; int map_count; int mm_rb; struct vm_area_struct* mmap; } ;


 int FUNC_0 (struct vm_area_struct*) ;
 int FUNC_1 (struct vm_area_struct*) ;
 int FUNC_2 (struct vm_area_struct*,int *) ;
 int FUNC_3 (struct mm_struct*) ;

__attribute__((used)) static void
FUNC_4(struct mm_struct *VAR_0, struct vm_area_struct *VAR_1,
 struct vm_area_struct *VAR_2, unsigned long VAR_3)
{
 struct vm_area_struct **VAR_4;
 struct vm_area_struct *VAR_5 = ((void*)0);

 VAR_4 = (VAR_2 ? &VAR_2->vm_next : &VAR_0->mmap);
 VAR_1->vm_prev = ((void*)0);
 do {
  FUNC_2(VAR_1, &VAR_0->mm_rb);
  VAR_0->map_count--;
  VAR_5 = VAR_1;
  VAR_1 = VAR_1->vm_next;
 } while (VAR_1 && VAR_1->vm_start < VAR_3);
 *VAR_4 = VAR_1;
 if (VAR_1) {
  VAR_1->vm_prev = VAR_2;
  FUNC_1(VAR_1);
 } else
  VAR_0->highest_vm_end = VAR_2 ? FUNC_0(VAR_2) : 0;
 VAR_5->vm_next = ((void*)0);


 FUNC_3(VAR_0);
}
