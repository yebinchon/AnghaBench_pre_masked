
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pivot_field ;
struct TYPE_5__ {TYPE_2__* end; } ;
typedef TYPE_1__ avl_tree ;
struct TYPE_6__ {struct TYPE_6__** children; int field; } ;
typedef TYPE_2__ avl_node ;



__attribute__((used)) static int
FUNC_0(avl_tree *VAR_0, avl_node *VAR_1, pivot_field *VAR_2, int VAR_3)
{
 if (VAR_1 == VAR_0->end)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1->children[0], VAR_2, VAR_3);
 VAR_2[VAR_3] = VAR_1->field;
 return FUNC_0(VAR_0, VAR_1->children[1], VAR_2, VAR_3 + 1);
}
