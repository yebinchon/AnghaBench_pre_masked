
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_mm; } ;
struct TYPE_3__ {struct vm_area_struct** vmas; } ;
struct TYPE_4__ {TYPE_1__ vmacache; } ;


 size_t FUNC_0 (unsigned long) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(unsigned long VAR_1, struct vm_area_struct *VAR_2)
{
 if (FUNC_1(VAR_2->vm_mm))
  VAR_0->vmacache.vmas[FUNC_0(VAR_1)] = VAR_2;
}
