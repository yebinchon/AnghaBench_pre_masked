
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int block; int lineno; int * fname; TYPE_2__* body; TYPE_2__* args; int type; } ;
typedef TYPE_1__ node_lambda ;
struct TYPE_8__ {int lineno; int * fname; } ;
typedef TYPE_2__ node ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

node*
FUNC_1(node* VAR_1, node* VAR_2, int VAR_3)
{
  node_lambda* VAR_4 = FUNC_0(sizeof(node_lambda));
  VAR_4->type = VAR_0;
  VAR_4->args = VAR_1;
  VAR_4->body = VAR_2;
  VAR_4->block = VAR_3;
  VAR_4->fname = VAR_2 ? VAR_2->fname : ((void*)0);
  VAR_4->lineno = VAR_2 ? VAR_2->lineno : 0;
  return (node*)VAR_4;
}
