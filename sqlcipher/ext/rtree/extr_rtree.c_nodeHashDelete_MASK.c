
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__** aHash; } ;
struct TYPE_6__ {scalar_t__ iNode; struct TYPE_6__* pNext; } ;
typedef TYPE_1__ RtreeNode ;
typedef TYPE_2__ Rtree ;


 int FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(Rtree *VAR_0, RtreeNode *VAR_1){
  RtreeNode **VAR_2;
  if( VAR_1->iNode!=0 ){
    VAR_2 = &VAR_0->aHash[FUNC_1(VAR_1->iNode)];
    for( ; (*VAR_2)!=VAR_1; VAR_2 = &(*VAR_2)->pNext){ FUNC_0(*VAR_2); }
    *VAR_2 = VAR_1->pNext;
    VAR_1->pNext = 0;
  }
}
