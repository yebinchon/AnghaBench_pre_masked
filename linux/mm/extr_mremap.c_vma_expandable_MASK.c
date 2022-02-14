
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_end; scalar_t__ vm_start; TYPE_1__* vm_next; } ;
struct TYPE_2__ {unsigned long vm_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct vm_area_struct *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4 = VAR_2->vm_end + VAR_3;
 if (VAR_4 < VAR_2->vm_end)
  return 0;
 if (VAR_2->vm_next && VAR_2->vm_next->vm_start < VAR_4)
  return 0;
 if (FUNC_0(((void*)0), VAR_2->vm_start, VAR_4 - VAR_2->vm_start,
         0, VAR_0) & ~VAR_1)
  return 0;
 return 1;
}
