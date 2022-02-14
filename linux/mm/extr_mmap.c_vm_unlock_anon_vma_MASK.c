
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct anon_vma {TYPE_3__* root; } ;
struct TYPE_4__ {int rb_node; } ;
struct TYPE_5__ {TYPE_1__ rb_root; } ;
struct TYPE_6__ {TYPE_2__ rb_root; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (struct anon_vma*) ;
 scalar_t__ FUNC_3 (int ,unsigned long*) ;

__attribute__((used)) static void FUNC_4(struct anon_vma *VAR_0)
{
 if (FUNC_3(0, (unsigned long *) &VAR_0->root->rb_root.rb_root.rb_node)) {
  if (!FUNC_1(0, (unsigned long *)
       &VAR_0->root->rb_root.rb_root.rb_node))
   FUNC_0();
  FUNC_2(VAR_0);
 }
}
