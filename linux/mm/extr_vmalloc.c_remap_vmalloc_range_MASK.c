
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct vm_area_struct*,scalar_t__,void*,scalar_t__) ;

int FUNC_1(struct vm_area_struct *VAR_1, void *VAR_2,
      unsigned long VAR_3)
{
 return FUNC_0(VAR_1, VAR_1->vm_start,
        VAR_2 + (VAR_3 << VAR_0),
        VAR_1->vm_end - VAR_1->vm_start);
}
