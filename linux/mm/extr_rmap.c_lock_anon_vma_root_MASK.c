
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anon_vma {int rwsem; struct anon_vma* root; } ;


 scalar_t__ FUNC_0 (struct anon_vma*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline struct anon_vma *FUNC_3(struct anon_vma *VAR_0, struct anon_vma *VAR_1)
{
 struct anon_vma *VAR_2 = VAR_1->root;
 if (VAR_2 != VAR_0) {
  if (FUNC_0(VAR_0))
   FUNC_2(&VAR_0->rwsem);
  VAR_0 = VAR_2;
  FUNC_1(&VAR_0->rwsem);
 }
 return VAR_0;
}
