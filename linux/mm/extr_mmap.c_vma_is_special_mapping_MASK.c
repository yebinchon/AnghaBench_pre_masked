
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_special_mapping {int dummy; } ;
struct vm_area_struct {int * vm_ops; struct vm_special_mapping const* vm_private_data; } ;


 int VAR_0 ;
 int VAR_1 ;

bool FUNC_0(const struct vm_area_struct *VAR_2,
 const struct vm_special_mapping *VAR_3)
{
 return VAR_2->vm_private_data == VAR_3 &&
  (VAR_2->vm_ops == &VAR_1 ||
   VAR_2->vm_ops == &VAR_0);
}
