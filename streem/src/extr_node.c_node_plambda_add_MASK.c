
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * next; } ;
typedef TYPE_1__ node_plambda ;
typedef int node ;



node*
FUNC_0(node* VAR_0, node* VAR_1)
{
  node_plambda* VAR_2 = (node_plambda*)VAR_0;
  while (VAR_2->next) {
    VAR_2 = (node_plambda*)VAR_2->next;
  }
  VAR_2->next = VAR_1;
  return VAR_0;
}
