
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* end; TYPE_2__* root; } ;
typedef TYPE_1__ avl_tree ;
struct TYPE_7__ {struct TYPE_7__** children; } ;
typedef TYPE_2__ avl_node ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(avl_tree *VAR_0, avl_node *VAR_1)
{
 if (VAR_1->children[0] != VAR_0->end)
 {
  FUNC_1(VAR_0, VAR_1->children[0]);
  FUNC_0(VAR_1->children[0]);
 }
 if (VAR_1->children[1] != VAR_0->end)
 {
  FUNC_1(VAR_0, VAR_1->children[1]);
  FUNC_0(VAR_1->children[1]);
 }
 if (VAR_1 == VAR_0->root)
 {

  if (VAR_1 != VAR_0->end)
   FUNC_0(VAR_1);

  FUNC_0(VAR_0->end);
 }
}
