
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_special_mapping {int (* mremap ) (struct vm_special_mapping*,struct vm_area_struct*) ;} ;
struct vm_area_struct {scalar_t__ vm_mm; struct vm_special_mapping* vm_private_data; } ;
struct TYPE_2__ {scalar_t__ mm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct vm_special_mapping*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_2(struct vm_area_struct *VAR_2)
{
 struct vm_special_mapping *VAR_3 = VAR_2->vm_private_data;

 if (FUNC_0(VAR_1->mm != VAR_2->vm_mm))
  return -VAR_0;

 if (VAR_3->mremap)
  return VAR_3->mremap(VAR_3, VAR_2);

 return 0;
}
