
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ nNodeRef; int iDepth; } ;
struct TYPE_10__ {scalar_t__ nRef; int iNode; struct TYPE_10__* pParent; } ;
typedef TYPE_1__ RtreeNode ;
typedef TYPE_2__ Rtree ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(Rtree *VAR_1, RtreeNode *VAR_2){
  int VAR_3 = VAR_0;
  if( VAR_2 ){
    FUNC_0( VAR_2->nRef>0 );
    FUNC_0( VAR_1->nNodeRef>0 );
    VAR_2->nRef--;
    if( VAR_2->nRef==0 ){
      VAR_1->nNodeRef--;
      if( VAR_2->iNode==1 ){
        VAR_1->iDepth = -1;
      }
      if( VAR_2->pParent ){
        VAR_3 = FUNC_4(VAR_1, VAR_2->pParent);
      }
      if( VAR_3==VAR_0 ){
        VAR_3 = FUNC_2(VAR_1, VAR_2);
      }
      FUNC_1(VAR_1, VAR_2);
      FUNC_3(VAR_2);
    }
  }
  return VAR_3;
}
