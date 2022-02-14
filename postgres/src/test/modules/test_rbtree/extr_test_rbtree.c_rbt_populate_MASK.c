
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
 int* FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int *,int *,int*) ;

__attribute__((used)) static void
FUNC_4(RBTree *VAR_1, int VAR_2, int VAR_3)
{
 int *VAR_4 = FUNC_0(VAR_2);
 IntRBTreeNode VAR_5;
 bool VAR_6;
 int VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
 {
  VAR_5.key = VAR_3 * VAR_4[VAR_7];
  FUNC_3(VAR_1, (RBTNode *) &VAR_5, &VAR_6);
  if (!VAR_6)
   FUNC_1(VAR_0, "unexpected !isNew result from rbt_insert");
 }





 if (VAR_2 > 0)
 {
  VAR_5.key = VAR_3 * VAR_4[0];
  FUNC_3(VAR_1, (RBTNode *) &VAR_5, &VAR_6);
  if (VAR_6)
   FUNC_1(VAR_0, "unexpected isNew result from rbt_insert");
 }

 FUNC_2(VAR_4);
}
