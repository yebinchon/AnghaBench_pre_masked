
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_area_struct {int vm_page_prot; } ;


 int FUNC_0 (struct vm_area_struct*,unsigned long,unsigned long,int ) ;

vm_fault_t FUNC_1(struct vm_area_struct *VAR_0, unsigned long VAR_1,
   unsigned long VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_0->vm_page_prot);
}
