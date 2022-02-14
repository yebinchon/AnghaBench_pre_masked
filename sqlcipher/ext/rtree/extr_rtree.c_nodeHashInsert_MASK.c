
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** aHash; } ;
struct TYPE_5__ {struct TYPE_5__* pNext; int iNode; } ;
typedef TYPE_1__ RtreeNode ;
typedef TYPE_2__ Rtree ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(Rtree *VAR_0, RtreeNode *VAR_1){
  int VAR_2;
  FUNC_0( VAR_1->pNext==0 );
  VAR_2 = FUNC_1(VAR_1->iNode);
  VAR_1->pNext = VAR_0->aHash[VAR_2];
  VAR_0->aHash[VAR_2] = VAR_1;
}
