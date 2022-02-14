
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct vm_area_struct* vm_prev; struct vm_area_struct* vm_next; } ;
struct anon_vma {int dummy; } ;


 struct anon_vma* FUNC_0 (struct vm_area_struct*,struct vm_area_struct*,struct vm_area_struct*) ;

struct anon_vma *FUNC_1(struct vm_area_struct *VAR_0)
{
 struct anon_vma *VAR_1;
 struct vm_area_struct *VAR_2;

 VAR_2 = VAR_0->vm_next;
 if (!VAR_2)
  goto try_prev;

 VAR_1 = FUNC_0(VAR_2, VAR_0, VAR_2);
 if (VAR_1)
  return VAR_1;
try_prev:
 VAR_2 = VAR_0->vm_prev;
 if (!VAR_2)
  goto none;

 VAR_1 = FUNC_0(VAR_2, VAR_2, VAR_0);
 if (VAR_1)
  return VAR_1;
none:
 return ((void*)0);
}
