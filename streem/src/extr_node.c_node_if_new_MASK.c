
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* opt_else; void* then; int * cond; int type; } ;
typedef TYPE_1__ node_if ;
typedef int node ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;

node*
FUNC_2(node* VAR_1, node* VAR_2, node* VAR_3)
{
  node_if* VAR_4 = FUNC_1(sizeof(node_if));
  VAR_4->type = VAR_0;
  VAR_4->cond = VAR_1;
  VAR_4->then = FUNC_0(VAR_2);
  VAR_4->opt_else = FUNC_0(VAR_3);
  return (node*)VAR_4;
}
