
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * body; int * cond; int * pat; int type; } ;
typedef TYPE_1__ node_plambda ;
typedef int node ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

node*
FUNC_1(node* VAR_1, node* VAR_2)
{
  node_plambda* VAR_3 = FUNC_0(sizeof(node_plambda));
  VAR_3->type = VAR_0;
  VAR_3->pat = VAR_1;
  VAR_3->cond = VAR_2;
  VAR_3->body = ((void*)0);
  return (node*)VAR_3;
}
