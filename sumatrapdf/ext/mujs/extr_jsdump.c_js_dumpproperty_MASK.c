
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_3__ {char* name; struct TYPE_3__* right; scalar_t__ level; int value; struct TYPE_3__* left; } ;
typedef TYPE_1__ js_Property ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(js_State *VAR_1, js_Property *VAR_2)
{
 VAR_0 = 0;
 if (VAR_2->left->level)
  FUNC_2(VAR_1, VAR_2->left);
 FUNC_1("\t%s: ", VAR_2->name);
 FUNC_0(VAR_1, VAR_2->value);
 FUNC_1(",\n");
 if (VAR_2->right->level)
  FUNC_2(VAR_1, VAR_2->right);
}
