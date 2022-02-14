
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anon_vma {int degree; struct anon_vma* root; struct anon_vma* parent; int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 struct anon_vma* FUNC_1 (int ,int ) ;

__attribute__((used)) static inline struct anon_vma *FUNC_2(void)
{
 struct anon_vma *VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2) {
  FUNC_0(&VAR_2->refcount, 1);
  VAR_2->degree = 1;
  VAR_2->parent = VAR_2;




  VAR_2->root = VAR_2;
 }

 return VAR_2;
}
