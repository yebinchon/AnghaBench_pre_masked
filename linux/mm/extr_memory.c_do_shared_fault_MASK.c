
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {int page; struct vm_area_struct* vma; } ;
struct vm_area_struct {TYPE_1__* vm_ops; } ;
struct TYPE_2__ {scalar_t__ page_mkwrite; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vm_fault*) ;
 int FUNC_1 (struct vm_fault*) ;
 int FUNC_2 (struct vm_area_struct*,int ) ;
 int FUNC_3 (struct vm_fault*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static vm_fault_t FUNC_7(struct vm_fault *VAR_3)
{
 struct vm_area_struct *VAR_4 = VAR_3->vma;
 vm_fault_t VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_3);
 if (FUNC_5(VAR_5 & (VAR_0 | VAR_1 | VAR_2)))
  return VAR_5;





 if (VAR_4->vm_ops->page_mkwrite) {
  FUNC_6(VAR_3->page);
  VAR_6 = FUNC_1(VAR_3);
  if (FUNC_5(!VAR_6 ||
    (VAR_6 & (VAR_0 | VAR_1)))) {
   FUNC_4(VAR_3->page);
   return VAR_6;
  }
 }

 VAR_5 |= FUNC_3(VAR_3);
 if (FUNC_5(VAR_5 & (VAR_0 | VAR_1 |
     VAR_2))) {
  FUNC_6(VAR_3->page);
  FUNC_4(VAR_3->page);
  return VAR_5;
 }

 FUNC_2(VAR_4, VAR_3->page);
 return VAR_5;
}
