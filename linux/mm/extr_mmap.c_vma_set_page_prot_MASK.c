
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_flags; int vm_page_prot; } ;
typedef int pgprot_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,unsigned long) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*,int ) ;

void FUNC_3(struct vm_area_struct *VAR_1)
{
 unsigned long VAR_2 = VAR_1->vm_flags;
 pgprot_t VAR_3;

 VAR_3 = FUNC_1(VAR_1->vm_page_prot, VAR_2);
 if (FUNC_2(VAR_1, VAR_3)) {
  VAR_2 &= ~VAR_0;
  VAR_3 = FUNC_1(VAR_3, VAR_2);
 }

 FUNC_0(VAR_1->vm_page_prot, VAR_3);
}
