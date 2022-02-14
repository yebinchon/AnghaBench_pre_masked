
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ key; } ;
typedef int RBTree ;
typedef TYPE_1__ IntRBTreeNode ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_1)
{
 RBTree *VAR_2 = FUNC_0();
 IntRBTreeNode *VAR_3;


 if (FUNC_2(VAR_2) != ((void*)0))
  FUNC_1(VAR_0, "leftmost node of empty tree is not NULL");


 FUNC_3(VAR_2, VAR_1, 1);


 VAR_3 = (IntRBTreeNode *) FUNC_2(VAR_2);
 if (VAR_3 == ((void*)0) || VAR_3->key != 0)
  FUNC_1(VAR_0, "rbt_leftmost gave wrong result");
}
