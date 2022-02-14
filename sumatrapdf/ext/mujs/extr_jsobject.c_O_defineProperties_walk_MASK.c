
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_3__ {int atts; struct TYPE_3__* right; scalar_t__ level; int name; int value; struct TYPE_3__* left; } ;
typedef TYPE_1__ js_Property ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(js_State *VAR_1, js_Property *VAR_2)
{
 if (VAR_2->left->level)
  FUNC_4(VAR_1, VAR_2->left);
 if (!(VAR_2->atts & VAR_0)) {
  FUNC_2(VAR_1, VAR_2->value);
  FUNC_0(VAR_1, FUNC_3(VAR_1, 1), VAR_2->name, FUNC_3(VAR_1, -1));
  FUNC_1(VAR_1, 1);
 }
 if (VAR_2->right->level)
  FUNC_4(VAR_1, VAR_2->right);
}
