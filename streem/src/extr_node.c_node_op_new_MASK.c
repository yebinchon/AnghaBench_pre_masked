
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * rhs; int op; int * lhs; int type; } ;
typedef TYPE_1__ node_op ;
typedef int node ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*) ;

node*
FUNC_3(const char* VAR_1, node* VAR_2, node* VAR_3)
{
  node_op* VAR_4 = FUNC_0(sizeof(node_op));
  VAR_4->type = VAR_0;
  VAR_4->lhs = VAR_2;
  VAR_4->op = FUNC_1(VAR_1, FUNC_2(VAR_1));
  VAR_4->rhs = VAR_3;
  return (node*)VAR_4;
}
