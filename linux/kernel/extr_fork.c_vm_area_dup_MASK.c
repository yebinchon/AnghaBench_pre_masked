
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int anon_vma_chain; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct vm_area_struct* FUNC_1 (int ,int ) ;
 int VAR_1 ;

struct vm_area_struct *FUNC_2(struct vm_area_struct *VAR_2)
{
 struct vm_area_struct *VAR_3 = FUNC_1(VAR_1, VAR_0);

 if (VAR_3) {
  *VAR_3 = *VAR_2;
  FUNC_0(&VAR_3->anon_vma_chain);
 }
 return VAR_3;
}
