
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int vm_page_prot; scalar_t__ vm_pgoff; } ;
typedef unsigned long phys_addr_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;

int FUNC_1(struct vm_area_struct *VAR_1, phys_addr_t VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4 = VAR_2 >> VAR_0;
 unsigned long VAR_5 = VAR_1->vm_end - VAR_1->vm_start;

 VAR_4 += VAR_1->vm_pgoff;
 return FUNC_0(VAR_1, VAR_1->vm_start, VAR_4, VAR_5, VAR_1->vm_page_prot);
}
