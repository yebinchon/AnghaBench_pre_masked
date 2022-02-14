
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * body; int * args; int type; } ;
typedef TYPE_1__ node_lambda ;
typedef int node ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*,int) ;

node*
FUNC_5(node* VAR_1, node* VAR_2)
{
  node_lambda* VAR_3 = FUNC_0(sizeof(node_lambda));
  VAR_3->type = VAR_0;
  if (VAR_1) {
    FUNC_3(VAR_1, FUNC_4("self", 4));
  }
  else {
    VAR_1 = FUNC_2();
    FUNC_1(VAR_1, FUNC_4("self", 4));
  }
  VAR_3->args = VAR_1;
  VAR_3->body = VAR_2;
  return (node*)VAR_3;
}
