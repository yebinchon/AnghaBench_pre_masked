
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int node_string ;
struct TYPE_3__ {int * value; int key; int type; } ;
typedef TYPE_1__ node_pair ;
typedef int node ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

node*
FUNC_1(node_string VAR_1, node* VAR_2)
{
  node_pair* VAR_3 = FUNC_0(sizeof(node_pair));
  VAR_3->type = VAR_0;
  VAR_3->key = VAR_1;
  VAR_3->value = VAR_2;
  return (node*)VAR_3;
}
