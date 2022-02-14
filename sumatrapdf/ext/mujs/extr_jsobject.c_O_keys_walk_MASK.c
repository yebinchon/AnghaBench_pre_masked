
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_3__ {int atts; struct TYPE_3__* right; scalar_t__ level; int name; struct TYPE_3__* left; } ;
typedef TYPE_1__ js_Property ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int,int ) ;

__attribute__((used)) static int FUNC_2(js_State *VAR_1, js_Property *VAR_2, int VAR_3)
{
 if (VAR_2->left->level)
  VAR_3 = FUNC_2(VAR_1, VAR_2->left, VAR_3);
 if (!(VAR_2->atts & VAR_0)) {
  FUNC_0(VAR_1, VAR_2->name);
  FUNC_1(VAR_1, -2, VAR_3++);
 }
 if (VAR_2->right->level)
  VAR_3 = FUNC_2(VAR_1, VAR_2->right, VAR_3);
 return VAR_3;
}
