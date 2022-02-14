
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
typedef int pte_t ;


 int FUNC_0 (struct vm_area_struct*,unsigned long) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,unsigned long,int *,int ) ;

int FUNC_3(struct vm_area_struct *VAR_0,
     unsigned long VAR_1, pte_t *VAR_2,
     pte_t VAR_3, int VAR_4)
{
 int VAR_5 = !FUNC_1(*VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_2(VAR_0->vm_mm, VAR_1, VAR_2, VAR_3);
  FUNC_0(VAR_0, VAR_1);
 }
 return VAR_5;
}
