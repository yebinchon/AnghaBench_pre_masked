
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* pDeleted; int pDeleteParent; int pDeleteNode; } ;
struct TYPE_13__ {int nRef; int iNode; struct TYPE_13__* pNext; struct TYPE_13__* pParent; } ;
typedef TYPE_1__ RtreeNode ;
typedef TYPE_2__ Rtree ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(Rtree *VAR_1, RtreeNode *VAR_2, int VAR_3){
  int VAR_4;
  int VAR_5;
  RtreeNode *VAR_6 = 0;
  int VAR_7;

  FUNC_0( VAR_2->nRef==1 );


  VAR_4 = FUNC_3(VAR_1, VAR_2, &VAR_7);
  if( VAR_4==VAR_0 ){
    VAR_6 = VAR_2->pParent;
    VAR_2->pParent = 0;
    VAR_4 = FUNC_1(VAR_1, VAR_6, VAR_7, VAR_3+1);
  }
  VAR_5 = FUNC_4(VAR_1, VAR_6);
  if( VAR_4==VAR_0 ){
    VAR_4 = VAR_5;
  }
  if( VAR_4!=VAR_0 ){
    return VAR_4;
  }


  FUNC_5(VAR_1->pDeleteNode, 1, VAR_2->iNode);
  FUNC_7(VAR_1->pDeleteNode);
  if( VAR_0!=(VAR_4 = FUNC_6(VAR_1->pDeleteNode)) ){
    return VAR_4;
  }


  FUNC_5(VAR_1->pDeleteParent, 1, VAR_2->iNode);
  FUNC_7(VAR_1->pDeleteParent);
  if( VAR_0!=(VAR_4 = FUNC_6(VAR_1->pDeleteParent)) ){
    return VAR_4;
  }




  FUNC_2(VAR_1, VAR_2);
  VAR_2->iNode = VAR_3;
  VAR_2->pNext = VAR_1->pDeleted;
  VAR_2->nRef++;
  VAR_1->pDeleted = VAR_2;

  return VAR_0;
}
