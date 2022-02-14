
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int lsm_db ;
struct TYPE_7__ {int iRoot; int nHeight; int iTransId; } ;
typedef TYPE_1__ TreeRoot ;
struct TYPE_8__ {scalar_t__* aiKeyPtr; } ;
typedef TYPE_2__ TreeNode ;
struct TYPE_9__ {int iNode; scalar_t__* aiCell; TYPE_2__** apTreeNode; TYPE_1__* pRoot; int * pDb; } ;
typedef TYPE_3__ TreeCursor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;

int FUNC_3(TreeCursor *VAR_1, int VAR_2){
  lsm_db *VAR_3 = VAR_1->pDb;
  TreeRoot *VAR_4 = VAR_1->pRoot;
  int VAR_5 = VAR_0;

  u32 VAR_6;
  VAR_1->iNode = -1;


  FUNC_1(VAR_1, 0);

  VAR_6 = VAR_4->iRoot;
  while( VAR_6 ){
    int VAR_7;
    TreeNode *VAR_8;

    VAR_8 = (TreeNode *)FUNC_2(VAR_3, VAR_6);
    if( VAR_5 ) break;

    if( VAR_2 ){
      VAR_7 = ((VAR_8->aiKeyPtr[2]==0) ? 2 : 3);
    }else{
      VAR_7 = ((VAR_8->aiKeyPtr[0]==0) ? 1 : 0);
    }
    VAR_1->iNode++;
    VAR_1->apTreeNode[VAR_1->iNode] = VAR_8;

    if( (u32)VAR_1->iNode<VAR_4->nHeight-1 ){
      VAR_6 = FUNC_0(VAR_8, VAR_4->iTransId, VAR_7);
    }else{
      VAR_6 = 0;
    }
    VAR_1->aiCell[VAR_1->iNode] = (u8)(VAR_7 - (VAR_6==0 && VAR_2));
  }

  return VAR_5;
}
