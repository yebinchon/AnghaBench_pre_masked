
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct anon_vma {TYPE_1__* root; int refcount; } ;
struct TYPE_2__ {int rwsem; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct anon_vma*) ;
 int FUNC_2 (struct anon_vma*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct anon_vma*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static inline void FUNC_7(struct anon_vma *VAR_1)
{
 FUNC_0(FUNC_3(&VAR_1->refcount));
 FUNC_5();
 if (FUNC_6(&VAR_1->root->rwsem)) {
  FUNC_1(VAR_1);
  FUNC_2(VAR_1);
 }

 FUNC_4(VAR_0, VAR_1);
}
