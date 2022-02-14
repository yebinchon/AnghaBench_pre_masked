
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {int page; struct vm_area_struct* vma; } ;
struct vm_area_struct {TYPE_1__* vm_ops; } ;
struct TYPE_2__ {scalar_t__ map_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vm_fault*) ;
 int FUNC_1 (struct vm_fault*) ;
 int VAR_4 ;
 int FUNC_2 (struct vm_fault*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static vm_fault_t FUNC_6(struct vm_fault *VAR_5)
{
 struct vm_area_struct *VAR_6 = VAR_5->vma;
 vm_fault_t VAR_7 = 0;






 if (VAR_6->vm_ops->map_pages && VAR_4 >> VAR_0 > 1) {
  VAR_7 = FUNC_1(VAR_5);
  if (VAR_7)
   return VAR_7;
 }

 VAR_7 = FUNC_0(VAR_5);
 if (FUNC_4(VAR_7 & (VAR_1 | VAR_2 | VAR_3)))
  return VAR_7;

 VAR_7 |= FUNC_2(VAR_5);
 FUNC_5(VAR_5->page);
 if (FUNC_4(VAR_7 & (VAR_1 | VAR_2 | VAR_3)))
  FUNC_3(VAR_5->page);
 return VAR_7;
}
