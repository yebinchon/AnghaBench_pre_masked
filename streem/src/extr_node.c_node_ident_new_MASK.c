
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int node_string ;
struct TYPE_3__ {int name; int type; } ;
typedef TYPE_1__ node_ident ;
typedef int node ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

node*
FUNC_1(node_string VAR_1)
{
  node_ident* VAR_2 = FUNC_0(sizeof(node_ident));

  VAR_2->type = VAR_0;
  VAR_2->name = VAR_1;
  return (node*)VAR_2;
}
