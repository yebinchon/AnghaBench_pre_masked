
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* end; TYPE_2__* root; scalar_t__ count; } ;
typedef TYPE_1__ avl_tree ;
struct TYPE_5__ {struct TYPE_5__** children; } ;
typedef TYPE_2__ avl_node ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(avl_tree *VAR_0)
{
 VAR_0->end = (avl_node *) FUNC_0(sizeof(avl_node));
 VAR_0->end->children[0] = VAR_0->end->children[1] = VAR_0->end;
 VAR_0->count = 0;
 VAR_0->root = VAR_0->end;
}
