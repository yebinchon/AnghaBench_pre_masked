
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anon_vma {int rb_root; int refcount; int rwsem; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct anon_vma *VAR_2 = VAR_1;

 FUNC_1(&VAR_2->rwsem);
 FUNC_0(&VAR_2->refcount, 0);
 VAR_2->rb_root = VAR_0;
}
