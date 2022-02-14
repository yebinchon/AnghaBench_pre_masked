
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_page_prot; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pmd_t ;
typedef int pgtable_t ;


 int FUNC_0 (struct page*,int ) ;
 int FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (struct mm_struct*,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mm_struct*,unsigned long,int *,int ) ;

__attribute__((used)) static bool FUNC_6(pgtable_t VAR_0, struct mm_struct *VAR_1,
  struct vm_area_struct *VAR_2, unsigned long VAR_3, pmd_t *VAR_4,
  struct page *VAR_5)
{
 pmd_t VAR_6;
 if (!FUNC_4(*VAR_4))
  return 0;
 VAR_6 = FUNC_0(VAR_5, VAR_2->vm_page_prot);
 VAR_6 = FUNC_3(VAR_6);
 if (VAR_0)
  FUNC_2(VAR_1, VAR_4, VAR_0);
 FUNC_5(VAR_1, VAR_3, VAR_4, VAR_6);
 FUNC_1(VAR_1);
 return 1;
}
