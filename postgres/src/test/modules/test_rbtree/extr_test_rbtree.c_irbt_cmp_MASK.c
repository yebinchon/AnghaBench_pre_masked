
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int key; } ;
typedef int RBTNode ;
typedef TYPE_1__ IntRBTreeNode ;



__attribute__((used)) static int
FUNC_0(const RBTNode *VAR_0, const RBTNode *VAR_1, void *VAR_2)
{
 const IntRBTreeNode *VAR_3 = (const IntRBTreeNode *) VAR_0;
 const IntRBTreeNode *VAR_4 = (const IntRBTreeNode *) VAR_1;

 return VAR_3->key - VAR_4->key;
}
