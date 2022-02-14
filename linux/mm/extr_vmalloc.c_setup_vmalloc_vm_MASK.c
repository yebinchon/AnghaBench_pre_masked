
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap_area {struct vm_struct* vm; scalar_t__ va_start; scalar_t__ va_end; } ;
struct vm_struct {unsigned long flags; void const* caller; scalar_t__ size; void* addr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct vm_struct *VAR_1, struct vmap_area *VAR_2,
         unsigned long VAR_3, const void *VAR_4)
{
 FUNC_0(&VAR_0);
 VAR_1->flags = VAR_3;
 VAR_1->addr = (void *)VAR_2->va_start;
 VAR_1->size = VAR_2->va_end - VAR_2->va_start;
 VAR_1->caller = VAR_4;
 VAR_2->vm = VAR_1;
 FUNC_1(&VAR_0);
}
