
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_pgoff; unsigned long vm_end; unsigned long vm_start; int vm_page_prot; } ;
typedef unsigned long phys_addr_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;

int FUNC_1(struct vm_area_struct *VAR_3, phys_addr_t VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8;


 if (VAR_4 + VAR_5 < VAR_4)
  return -VAR_0;





 VAR_5 += VAR_4 & ~VAR_1;
 VAR_7 = VAR_4 >> VAR_2;
 VAR_8 = (VAR_5 + ~VAR_1) >> VAR_2;
 if (VAR_7 + VAR_8 < VAR_7)
  return -VAR_0;


 if (VAR_3->vm_pgoff > VAR_8)
  return -VAR_0;
 VAR_7 += VAR_3->vm_pgoff;
 VAR_8 -= VAR_3->vm_pgoff;


 VAR_6 = VAR_3->vm_end - VAR_3->vm_start;
 if (VAR_6 >> VAR_2 > VAR_8)
  return -VAR_0;


 return FUNC_0(VAR_3, VAR_3->vm_start, VAR_7, VAR_6, VAR_3->vm_page_prot);
}
