
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RavlNode {int left; } ;


 struct RavlNode* FUNC_0 (struct RavlNode*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static struct RavlNode *
FUNC_2(struct RavlNode* VAR_0)
{

    VAR_0->left = FUNC_1(VAR_0->left);


    return FUNC_0(VAR_0);
}
