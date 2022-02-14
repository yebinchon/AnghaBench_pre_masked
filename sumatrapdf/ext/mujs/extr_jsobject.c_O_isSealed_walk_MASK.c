
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_3__ {int atts; struct TYPE_3__* right; scalar_t__ level; struct TYPE_3__* left; } ;
typedef TYPE_1__ js_Property ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(js_State *VAR_1, js_Property *VAR_2)
{
 if (VAR_2->left->level)
  if (!FUNC_0(VAR_1, VAR_2->left))
   return 0;
 if (!(VAR_2->atts & VAR_0))
  return 0;
 if (VAR_2->right->level)
  if (!FUNC_0(VAR_1, VAR_2->right))
   return 0;
 return 1;
}
