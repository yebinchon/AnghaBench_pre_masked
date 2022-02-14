
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int node_string ;
struct TYPE_3__ {int * args; int ident; int type; } ;
typedef TYPE_1__ node_call ;
typedef int node ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

node*
FUNC_4(node_string VAR_1, node* VAR_2, node* VAR_3, node* VAR_4)
{
  node_call* VAR_5 = FUNC_0(sizeof(node_call));
  VAR_5->type = VAR_0;
  VAR_5->ident = VAR_1;
  if (!VAR_3) VAR_3 = FUNC_1();
  if (VAR_2) {
    FUNC_3(VAR_3, VAR_2);
  }
  if (VAR_4) {
    FUNC_2(VAR_3, VAR_4);
  }
  VAR_5->args = VAR_3;
  return (node*)VAR_5;
}
