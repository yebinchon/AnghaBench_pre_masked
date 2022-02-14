
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmu_notifier_range {scalar_t__ event; TYPE_1__* vma; } ;
struct TYPE_2__ {int vm_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

bool
FUNC_0(const struct mmu_notifier_range *VAR_2)
{
 if (!VAR_2->vma || VAR_2->event != VAR_0)
  return 0;

 return VAR_2->vma->vm_flags & VAR_1;
}
