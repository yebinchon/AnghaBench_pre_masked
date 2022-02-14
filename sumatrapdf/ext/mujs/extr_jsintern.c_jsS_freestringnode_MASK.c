
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* right; struct TYPE_5__* left; } ;
typedef TYPE_1__ js_StringNode ;
typedef int js_State ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(js_State *VAR_1, js_StringNode *VAR_2)
{
 if (VAR_2->left != &VAR_0) FUNC_1(VAR_1, VAR_2->left);
 if (VAR_2->right != &VAR_0) FUNC_1(VAR_1, VAR_2->right);
 FUNC_0(VAR_1, VAR_2);
}
