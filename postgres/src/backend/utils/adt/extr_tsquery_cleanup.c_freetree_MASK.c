
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* right; struct TYPE_4__* left; } ;
typedef TYPE_1__ NODE ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(NODE *VAR_0)
{

 FUNC_0();

 if (!VAR_0)
  return;
 if (VAR_0->left)
  FUNC_2(VAR_0->left);
 if (VAR_0->right)
  FUNC_2(VAR_0->right);
 FUNC_1(VAR_0);
}
