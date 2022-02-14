
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_page_prot; struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgtable_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mm_struct*,int *) ;
 int FUNC_4 (struct mm_struct*,int *,int ) ;
 int FUNC_5 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(struct vm_area_struct *VAR_2,
  unsigned long VAR_3, pmd_t *VAR_4)
{
 struct mm_struct *VAR_5 = VAR_2->vm_mm;
 pgtable_t VAR_6;
 pmd_t VAR_7;
 int VAR_8;
 FUNC_5(VAR_2, VAR_3, VAR_4);

 VAR_6 = FUNC_3(VAR_5, VAR_4);
 FUNC_4(VAR_5, &VAR_7, VAR_6);

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++, VAR_3 += VAR_1) {
  pte_t *VAR_9, VAR_10;
  VAR_10 = FUNC_2(FUNC_1(VAR_3), VAR_2->vm_page_prot);
  VAR_10 = FUNC_6(VAR_10);
  VAR_9 = FUNC_8(&VAR_7, VAR_3);
  FUNC_0(!FUNC_7(*VAR_9));
  FUNC_10(VAR_5, VAR_3, VAR_9, VAR_10);
  FUNC_9(VAR_9);
 }
 FUNC_11();
 FUNC_4(VAR_5, VAR_4, VAR_6);
}
