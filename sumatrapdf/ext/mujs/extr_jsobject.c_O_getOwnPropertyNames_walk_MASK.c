
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_3__ {struct TYPE_3__* right; scalar_t__ level; int name; struct TYPE_3__* left; } ;
typedef TYPE_1__ js_Property ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int,int ) ;

__attribute__((used)) static int FUNC_2(js_State *VAR_0, js_Property *VAR_1, int VAR_2)
{
 if (VAR_1->left->level)
  VAR_2 = FUNC_2(VAR_0, VAR_1->left, VAR_2);
 FUNC_0(VAR_0, VAR_1->name);
 FUNC_1(VAR_0, -2, VAR_2++);
 if (VAR_1->right->level)
  VAR_2 = FUNC_2(VAR_0, VAR_1->right, VAR_2);
 return VAR_2;
}
