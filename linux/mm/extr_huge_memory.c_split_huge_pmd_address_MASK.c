
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
struct page {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 int FUNC_0 (struct vm_area_struct*,int *,unsigned long,int,struct page*) ;
 int * FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;
 int * FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct vm_area_struct *VAR_0, unsigned long VAR_1,
  bool VAR_2, struct page *VAR_3)
{
 pgd_t *VAR_4;
 p4d_t *VAR_5;
 pud_t *VAR_6;
 pmd_t *VAR_7;

 VAR_4 = FUNC_3(VAR_0->vm_mm, VAR_1);
 if (!FUNC_4(*VAR_4))
  return;

 VAR_5 = FUNC_1(VAR_4, VAR_1);
 if (!FUNC_2(*VAR_5))
  return;

 VAR_6 = FUNC_6(VAR_5, VAR_1);
 if (!FUNC_7(*VAR_6))
  return;

 VAR_7 = FUNC_5(VAR_6, VAR_1);

 FUNC_0(VAR_0, VAR_7, VAR_1, VAR_2, VAR_3);
}
