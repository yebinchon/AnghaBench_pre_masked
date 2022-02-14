
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct anon_vma* anon_vma; } ;
struct anon_vma_chain {int dummy; } ;
struct anon_vma {int degree; struct anon_vma* parent; int root; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct anon_vma* FUNC_0 () ;
 struct anon_vma_chain* FUNC_1 (int ) ;
 int FUNC_2 (struct vm_area_struct*,struct anon_vma_chain*,struct anon_vma*) ;
 int FUNC_3 (struct vm_area_struct*,struct vm_area_struct*) ;
 int FUNC_4 (struct anon_vma*) ;
 int FUNC_5 (struct anon_vma*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct anon_vma*) ;
 int FUNC_8 (struct vm_area_struct*) ;

int FUNC_9(struct vm_area_struct *VAR_2, struct vm_area_struct *VAR_3)
{
 struct anon_vma_chain *VAR_4;
 struct anon_vma *VAR_5;
 int VAR_6;


 if (!VAR_3->anon_vma)
  return 0;


 VAR_2->anon_vma = ((void*)0);





 VAR_6 = FUNC_3(VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;


 if (VAR_2->anon_vma)
  return 0;


 VAR_5 = FUNC_0();
 if (!VAR_5)
  goto out_error;
 VAR_4 = FUNC_1(VAR_1);
 if (!VAR_4)
  goto out_error_free_anon_vma;





 VAR_5->root = VAR_3->anon_vma->root;
 VAR_5->parent = VAR_3->anon_vma;





 FUNC_6(VAR_5->root);

 VAR_2->anon_vma = VAR_5;
 FUNC_4(VAR_5);
 FUNC_2(VAR_2, VAR_4, VAR_5);
 VAR_5->parent->degree++;
 FUNC_5(VAR_5);

 return 0;

 out_error_free_anon_vma:
 FUNC_7(VAR_5);
 out_error:
 FUNC_8(VAR_2);
 return -VAR_0;
}
