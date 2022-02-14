
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_3__ {int atts; struct TYPE_3__* right; scalar_t__ level; struct TYPE_3__* left; } ;
typedef TYPE_1__ js_Property ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(js_State *VAR_2, js_Property *VAR_3)
{
 if (VAR_3->left->level)
  if (!FUNC_0(VAR_2, VAR_3->left))
   return 0;
 if (!(VAR_3->atts & VAR_1))
  return 0;
 if (!(VAR_3->atts & VAR_0))
  return 0;
 if (VAR_3->right->level)
  if (!FUNC_0(VAR_2, VAR_3->right))
   return 0;
 return 1;
}
