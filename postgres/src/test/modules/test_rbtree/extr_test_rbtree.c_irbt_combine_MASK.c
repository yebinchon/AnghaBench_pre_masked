
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ key; } ;
typedef int RBTNode ;
typedef TYPE_1__ IntRBTreeNode ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(RBTNode *VAR_1, const RBTNode *VAR_2, void *VAR_3)
{
 const IntRBTreeNode *VAR_4 = (const IntRBTreeNode *) VAR_1;
 const IntRBTreeNode *VAR_5 = (const IntRBTreeNode *) VAR_2;

 if (VAR_4->key != VAR_5->key)
  FUNC_0(VAR_0, "red-black tree combines %d into %d",
    VAR_5->key, VAR_4->key);
}
