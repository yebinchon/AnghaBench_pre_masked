
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anon_vma {int refcount; struct anon_vma* root; } ;


 int FUNC_0 (struct anon_vma*) ;
 scalar_t__ FUNC_1 (int *) ;

void FUNC_2(struct anon_vma *VAR_0)
{
 struct anon_vma *VAR_1 = VAR_0->root;

 FUNC_0(VAR_0);
 if (VAR_1 != VAR_0 && FUNC_1(&VAR_1->refcount))
  FUNC_0(VAR_1);
}
