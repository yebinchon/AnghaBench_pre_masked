
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int lsm_db ;
struct TYPE_15__ {int nHeight; int iTransId; } ;
typedef TYPE_1__ TreeRoot ;
struct TYPE_16__ {scalar_t__* aiKeyPtr; } ;
typedef TYPE_2__ TreeNode ;
struct TYPE_17__ {int nKey; } ;
typedef TYPE_3__ TreeKey ;
struct TYPE_19__ {int member_1; int member_0; } ;
struct TYPE_18__ {int* aiCell; size_t iNode; TYPE_5__ blob; TYPE_2__** apTreeNode; TYPE_1__* pRoot; int * pDb; } ;
typedef TYPE_4__ TreeCursor ;
typedef TYPE_5__ TreeBlob ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,TYPE_5__*,int*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *,TYPE_5__*) ;
 int FUNC_6 (TYPE_4__*,int*) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int *,scalar_t__) ;

int FUNC_9(TreeCursor *VAR_1){

  TreeKey *VAR_2;
  TreeBlob VAR_3 = {0, 0};

  lsm_db *VAR_4 = VAR_1->pDb;
  TreeRoot *VAR_5 = VAR_1->pRoot;
  const int VAR_6 = VAR_5->nHeight-1;
  int VAR_7;
  int VAR_8 = VAR_0;
  TreeNode *VAR_9;


  int VAR_10 = 0;
  FUNC_6(VAR_1, &VAR_10);
  if( VAR_10>0 ) return VAR_0;





  VAR_2 = FUNC_2(VAR_1, &VAR_3, &VAR_8);
  if( VAR_8!=VAR_0 ) return VAR_8;


  FUNC_1( FUNC_4(VAR_1) );
  FUNC_1( VAR_1->aiCell[VAR_1->iNode]<3 );

  VAR_9 = VAR_1->apTreeNode[VAR_1->iNode];
  VAR_7 = ++VAR_1->aiCell[VAR_1->iNode];




  if( VAR_1->iNode<VAR_6 && FUNC_3(VAR_9, VAR_5->iTransId, VAR_7) ){
    do {
      u32 VAR_11;
      VAR_1->iNode++;
      VAR_11 = FUNC_3(VAR_9, VAR_5->iTransId, VAR_7);
      VAR_9 = (TreeNode *)FUNC_8(VAR_4, VAR_11);
      VAR_1->apTreeNode[VAR_1->iNode] = VAR_9;
      VAR_7 = VAR_1->aiCell[VAR_1->iNode] = (VAR_9->aiKeyPtr[0]==0);
    }while( VAR_1->iNode < VAR_6 );
  }




  else if( VAR_7>=3 || VAR_9->aiKeyPtr[VAR_7]==0 ){
    while( (--VAR_1->iNode)>=0 ){
      VAR_7 = VAR_1->aiCell[VAR_1->iNode];
      if( VAR_7<3 && VAR_1->apTreeNode[VAR_1->iNode]->aiKeyPtr[VAR_7] ) break;
    }
  }


  if( VAR_1->iNode>=0 ){
    TreeKey *VAR_12 = FUNC_2(VAR_1, &VAR_1->blob, &VAR_8);
    FUNC_1( VAR_8||FUNC_7(FUNC_0(VAR_12),VAR_12->nKey,FUNC_0(VAR_2),VAR_2->nKey)>=0 );
  }
  FUNC_5(VAR_4, &VAR_3);


  return VAR_8;
}
