
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int key; } ;
typedef int RBTreeIterator ;
typedef int RBTree ;
typedef TYPE_1__ IntRBTreeNode ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static void
FUNC_5(int VAR_2)
{
 RBTree *VAR_3 = FUNC_0();
 IntRBTreeNode *VAR_4;
 RBTreeIterator VAR_5;
 int VAR_6 = VAR_2;
 int VAR_7 = 0;


 FUNC_2(VAR_3, VAR_1, &VAR_5);
 if (FUNC_3(&VAR_5) != ((void*)0))
  FUNC_1(VAR_0, "right-left walk over empty tree produced an element");


 FUNC_4(VAR_3, VAR_2, 1);


 FUNC_2(VAR_3, VAR_1, &VAR_5);

 while ((VAR_4 = (IntRBTreeNode *) FUNC_3(&VAR_5)) != ((void*)0))
 {

  if (VAR_4->key >= VAR_6)
   FUNC_1(VAR_0, "right-left walk gives elements not in sorted order");
  VAR_6 = VAR_4->key;
  VAR_7++;
 }

 if (VAR_6 != 0)
  FUNC_1(VAR_0, "right-left walk did not reach end");
 if (VAR_7 != VAR_2)
  FUNC_1(VAR_0, "right-left walk missed some elements");
}
