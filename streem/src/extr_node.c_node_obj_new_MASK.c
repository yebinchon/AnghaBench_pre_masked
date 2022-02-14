
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int node_string ;
struct TYPE_2__ {int ns; } ;
typedef TYPE_1__ node_array ;
typedef int node ;


 scalar_t__ FUNC_0 () ;

node*
FUNC_1(node* VAR_0, node_string VAR_1)
{
  node_array* VAR_2;

  if (!VAR_0) VAR_2 = (node_array*)FUNC_0();
  else VAR_2 = (node_array*)VAR_0;
  VAR_2->ns = VAR_1;
  return (node*)VAR_2;
}
