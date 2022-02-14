
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* body; scalar_t__ block; } ;
typedef TYPE_1__ node_lambda ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_2__ node ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static node*
FUNC_0(node* VAR_1)
{
  if (VAR_1 == ((void*)0)) return ((void*)0);
  if (VAR_1->type == VAR_0) {
    node_lambda* VAR_2 = (node_lambda*)VAR_1;
    if (VAR_2->block) {
      return VAR_2->body;
    }
  }
  return VAR_1;
}
