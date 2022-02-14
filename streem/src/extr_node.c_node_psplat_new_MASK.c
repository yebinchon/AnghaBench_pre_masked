
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * tail; int * mid; int * head; int type; } ;
typedef TYPE_1__ node_psplat ;
typedef int node ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

node*
FUNC_1(node* VAR_1, node* VAR_2, node* VAR_3)
{
  node_psplat* VAR_4 = FUNC_0(sizeof(node_psplat));
  VAR_4->type = VAR_0;
  VAR_4->head = VAR_1;
  VAR_4->mid = VAR_2;
  VAR_4->tail = VAR_3;
  return (node*)VAR_4;
}
