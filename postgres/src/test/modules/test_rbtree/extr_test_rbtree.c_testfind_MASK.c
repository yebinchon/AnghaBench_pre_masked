
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int key; } ;
typedef int RBTree ;
typedef int RBTNode ;
typedef TYPE_1__ IntRBTreeNode ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_1)
{
 RBTree *VAR_2 = FUNC_0();
 int VAR_3;


 FUNC_3(VAR_2, VAR_1, 2);


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 {
  IntRBTreeNode VAR_4;
  IntRBTreeNode *VAR_5;

  VAR_4.key = 2 * VAR_3;
  VAR_5 = (IntRBTreeNode *) FUNC_2(VAR_2, (RBTNode *) &VAR_4);
  if (VAR_5 == ((void*)0))
   FUNC_1(VAR_0, "inserted element was not found");
  if (VAR_4.key != VAR_5->key)
   FUNC_1(VAR_0, "find operation in rbtree gave wrong result");
 }





 for (VAR_3 = -1; VAR_3 <= 2 * VAR_1; VAR_3 += 2)
 {
  IntRBTreeNode VAR_6;
  IntRBTreeNode *VAR_7;

  VAR_6.key = VAR_3;
  VAR_7 = (IntRBTreeNode *) FUNC_2(VAR_2, (RBTNode *) &VAR_6);
  if (VAR_7 != ((void*)0))
   FUNC_1(VAR_0, "not-inserted element was found");
 }
}
