
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__** children; } ;
typedef TYPE_1__ avl_node ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static avl_node *
FUNC_1(avl_node **VAR_0, int VAR_1)
{
 avl_node *VAR_2 = *VAR_0;
 avl_node *VAR_3 = (*VAR_0)->children[VAR_1];

 *VAR_0 = VAR_3;
 VAR_2->children[VAR_1] = VAR_3->children[!VAR_1];
 FUNC_0(VAR_2);
 VAR_3->children[!VAR_1] = VAR_2;

 return VAR_3;
}
