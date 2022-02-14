
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
typedef int pte_t ;


 int FUNC_0 (struct vm_area_struct*,unsigned long) ;
 scalar_t__ FUNC_1 (struct mm_struct*,int ) ;
 int FUNC_2 (struct mm_struct*,unsigned long,int *) ;

pte_t FUNC_3(struct vm_area_struct *VAR_0, unsigned long VAR_1,
         pte_t *VAR_2)
{
 struct mm_struct *VAR_3 = (VAR_0)->vm_mm;
 pte_t VAR_4;
 VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_2);
 if (FUNC_1(VAR_3, VAR_4))
  FUNC_0(VAR_0, VAR_1);
 return VAR_4;
}
