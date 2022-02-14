
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap_area {struct vm_struct* vm; } ;
struct vm_struct {int dummy; } ;


 struct vmap_area* FUNC_0 (unsigned long) ;
 int FUNC_1 (struct vmap_area*) ;
 int FUNC_2 (struct vm_struct*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

struct vm_struct *FUNC_6(const void *VAR_1)
{
 struct vmap_area *VAR_2;

 FUNC_3();

 FUNC_4(&VAR_0);
 VAR_2 = FUNC_0((unsigned long)VAR_1);
 if (VAR_2 && VAR_2->vm) {
  struct vm_struct *VAR_3 = VAR_2->vm;

  VAR_2->vm = ((void*)0);
  FUNC_5(&VAR_0);

  FUNC_2(VAR_3);
  FUNC_1(VAR_2);

  return VAR_3;
 }

 FUNC_5(&VAR_0);
 return ((void*)0);
}
