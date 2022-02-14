
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_4__ {struct TYPE_4__* right; scalar_t__ level; struct TYPE_4__* left; } ;
typedef TYPE_1__ js_Property ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(js_State *VAR_0, js_Property *VAR_1)
{
 if (VAR_1->left->level) FUNC_1(VAR_0, VAR_1->left);
 if (VAR_1->right->level) FUNC_1(VAR_0, VAR_1->right);
 FUNC_0(VAR_0, VAR_1);
}
