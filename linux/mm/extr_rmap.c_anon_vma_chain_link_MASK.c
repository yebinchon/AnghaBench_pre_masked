
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int anon_vma_chain; } ;
struct anon_vma_chain {int same_vma; struct anon_vma* anon_vma; struct vm_area_struct* vma; } ;
struct anon_vma {int rb_root; } ;


 int FUNC_0 (struct anon_vma_chain*,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct vm_area_struct *VAR_0,
    struct anon_vma_chain *VAR_1,
    struct anon_vma *VAR_2)
{
 VAR_1->vma = VAR_0;
 VAR_1->anon_vma = VAR_2;
 FUNC_1(&VAR_1->same_vma, &VAR_0->anon_vma_chain);
 FUNC_0(VAR_1, &VAR_2->rb_root);
}
