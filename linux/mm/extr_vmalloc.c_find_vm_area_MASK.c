
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap_area {struct vm_struct* vm; } ;
struct vm_struct {int dummy; } ;


 struct vmap_area* FUNC_0 (unsigned long) ;

struct vm_struct *FUNC_1(const void *VAR_0)
{
 struct vmap_area *VAR_1;

 VAR_1 = FUNC_0((unsigned long)VAR_0);
 if (!VAR_1)
  return ((void*)0);

 return VAR_1->vm;
}
