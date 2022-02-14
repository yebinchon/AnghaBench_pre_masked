
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_ops; } ;
struct TYPE_2__ {unsigned long (* pagesize ) (struct vm_area_struct*) ;} ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct vm_area_struct*) ;

unsigned long FUNC_1(struct vm_area_struct *VAR_1)
{
 if (VAR_1->vm_ops && VAR_1->vm_ops->pagesize)
  return VAR_1->vm_ops->pagesize(VAR_1);
 return VAR_0;
}
