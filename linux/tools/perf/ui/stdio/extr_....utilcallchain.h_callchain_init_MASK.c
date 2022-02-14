
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rb_root_in; scalar_t__ children_hit; scalar_t__ hit; int * parent; int parent_val; int val; } ;
struct callchain_root {scalar_t__ max_depth; TYPE_1__ node; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(struct callchain_root *VAR_1)
{
 FUNC_0(&VAR_1->node.val);
 FUNC_0(&VAR_1->node.parent_val);

 VAR_1->node.parent = ((void*)0);
 VAR_1->node.hit = 0;
 VAR_1->node.children_hit = 0;
 VAR_1->node.rb_root_in = VAR_0;
 VAR_1->max_depth = 0;
}
