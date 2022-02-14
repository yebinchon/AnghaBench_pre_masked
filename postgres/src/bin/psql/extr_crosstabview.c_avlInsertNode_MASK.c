
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pivot_field ;
struct TYPE_7__ {int count; TYPE_2__* end; } ;
typedef TYPE_1__ avl_tree ;
struct TYPE_8__ {int height; struct TYPE_8__** children; int field; } ;
typedef TYPE_2__ avl_node ;


 int FUNC_0 (TYPE_1__*,TYPE_2__**) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void
FUNC_3(avl_tree *VAR_0, avl_node **VAR_1, pivot_field VAR_2)
{
 avl_node *VAR_3 = *VAR_1;

 if (VAR_3 == VAR_0->end)
 {
  avl_node *VAR_4 = (avl_node *)
  FUNC_1(sizeof(avl_node));

  VAR_4->height = 1;
  VAR_4->field = VAR_2;
  VAR_4->children[0] = VAR_4->children[1] = VAR_0->end;
  VAR_0->count++;
  *VAR_1 = VAR_4;
 }
 else
 {
  int VAR_5 = FUNC_2(&VAR_2, &VAR_3->field);

  if (VAR_5 != 0)
  {
   FUNC_3(VAR_0,
        VAR_5 > 0 ? &VAR_3->children[1] : &VAR_3->children[0],
        VAR_2);
   FUNC_0(VAR_0, VAR_1);
  }
 }
}
