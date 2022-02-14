
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RavlNode {int right; } ;


 int FUNC_0 (int ) ;
 struct RavlNode* FUNC_1 (struct RavlNode*) ;

__attribute__((used)) static struct RavlNode *
FUNC_2( struct RavlNode* VAR_0 )
{

    VAR_0->right = FUNC_0(VAR_0->right);


    return FUNC_1(VAR_0);
}
