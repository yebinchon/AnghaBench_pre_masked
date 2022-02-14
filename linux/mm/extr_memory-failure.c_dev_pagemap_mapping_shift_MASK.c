
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
struct page {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int * FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int * FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ) ;
 unsigned long FUNC_13 (struct page*,struct vm_area_struct*) ;

__attribute__((used)) static unsigned long FUNC_14(struct page *VAR_3,
  struct vm_area_struct *VAR_4)
{
 unsigned long VAR_5 = FUNC_13(VAR_3, VAR_4);
 pgd_t *VAR_6;
 p4d_t *VAR_7;
 pud_t *VAR_8;
 pmd_t *VAR_9;
 pte_t *VAR_10;

 VAR_6 = FUNC_2(VAR_4->vm_mm, VAR_5);
 if (!FUNC_3(*VAR_6))
  return 0;
 VAR_7 = FUNC_0(VAR_6, VAR_5);
 if (!FUNC_1(*VAR_7))
  return 0;
 VAR_8 = FUNC_11(VAR_7, VAR_5);
 if (!FUNC_12(*VAR_8))
  return 0;
 if (FUNC_10(*VAR_8))
  return VAR_2;
 VAR_9 = FUNC_5(VAR_8, VAR_5);
 if (!FUNC_6(*VAR_9))
  return 0;
 if (FUNC_4(*VAR_9))
  return VAR_1;
 VAR_10 = FUNC_8(VAR_9, VAR_5);
 if (!FUNC_9(*VAR_10))
  return 0;
 if (FUNC_7(*VAR_10))
  return VAR_0;
 return 0;
}
