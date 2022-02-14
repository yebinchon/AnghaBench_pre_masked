
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_policy; struct vm_area_struct* vm_next; } ;
struct mm_struct {int mmap_sem; struct vm_area_struct* mmap; } ;
typedef int nodemask_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mm_struct *VAR_0, nodemask_t *VAR_1)
{
 struct vm_area_struct *VAR_2;

 FUNC_0(&VAR_0->mmap_sem);
 for (VAR_2 = VAR_0->mmap; VAR_2; VAR_2 = VAR_2->vm_next)
  FUNC_1(VAR_2->vm_policy, VAR_1);
 FUNC_2(&VAR_0->mmap_sem);
}
