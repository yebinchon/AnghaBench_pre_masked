
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rb_root; } ;
struct hist_entry {int init_have_children; int has_children; TYPE_1__ hroot_out; int sorted_chain; scalar_t__ leaf; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hist_entry *VAR_0)
{
 if (VAR_0->init_have_children)
  return;

 if (VAR_0->leaf) {
  VAR_0->has_children = !FUNC_0(&VAR_0->sorted_chain);
  FUNC_1(&VAR_0->sorted_chain);
 } else {
  VAR_0->has_children = !FUNC_0(&VAR_0->hroot_out.rb_root);
 }

 VAR_0->init_have_children = 1;
}
