
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* end; } ;
typedef TYPE_1__ avl_tree ;
struct TYPE_10__ {struct TYPE_10__** children; } ;
typedef TYPE_2__ avl_node ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__**,int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(avl_tree *VAR_0, avl_node **VAR_1)
{
 avl_node *VAR_2 = *VAR_1;
 int VAR_3 = FUNC_0(VAR_2) / 2;

 if (VAR_3 != 0)
 {
  int VAR_4 = (1 - VAR_3) / 2;

  if (FUNC_0(VAR_2->children[VAR_4]) == -VAR_3)
   FUNC_1(&VAR_2->children[VAR_4], !VAR_4);
  VAR_2 = FUNC_1(VAR_1, VAR_4);
 }
 if (VAR_2 != VAR_0->end)
  FUNC_2(VAR_2);
}
