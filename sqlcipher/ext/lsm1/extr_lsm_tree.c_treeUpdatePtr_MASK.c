
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef void* u32 ;
struct TYPE_12__ {scalar_t__ iTransId; void* iRoot; } ;
struct TYPE_13__ {TYPE_1__ root; } ;
struct TYPE_14__ {TYPE_2__ treehdr; int rollback; int pEnv; } ;
typedef TYPE_3__ lsm_db ;
struct TYPE_15__ {scalar_t__ iV2; void* iV2Ptr; scalar_t__ iV2Child; void** aiChildPtr; } ;
typedef TYPE_4__ TreeNode ;
struct TYPE_16__ {size_t iNode; int* aiCell; TYPE_4__** apTreeNode; } ;
typedef TYPE_5__ TreeCursor ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,TYPE_4__*,void**,int*) ;
 void* FUNC_2 (TYPE_4__*,scalar_t__,int) ;
 int FUNC_3 (int ,int *,void*) ;

__attribute__((used)) static int FUNC_4(lsm_db *VAR_1, TreeCursor *VAR_2, u32 VAR_3){
  int VAR_4 = VAR_0;
  if( VAR_2->iNode<0 ){

    VAR_1->treehdr.root.iRoot = VAR_3;
  }else{




    TreeNode *VAR_5;
    int VAR_6;

    VAR_5 = VAR_2->apTreeNode[VAR_2->iNode];
    VAR_6 = VAR_2->aiCell[VAR_2->iNode];

    if( VAR_5->iV2 ){

      u32 VAR_7;
      TreeNode *VAR_8;
      VAR_8 = FUNC_1(VAR_1, VAR_5, &VAR_7, &VAR_4);
      if( VAR_8 ){
        FUNC_0( VAR_4==VAR_0 );
        VAR_8->aiChildPtr[VAR_6] = VAR_3;
        VAR_2->iNode--;
        VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_7);
      }
    }else{

      u32 VAR_9;
      FUNC_0( VAR_1->treehdr.root.iTransId>0 );

      if( VAR_2->iNode ){
        VAR_9 = FUNC_2(
            VAR_2->apTreeNode[VAR_2->iNode-1],
            VAR_1->treehdr.root.iTransId, VAR_2->aiCell[VAR_2->iNode-1]
        );
      }else{
        VAR_9 = VAR_1->treehdr.root.iRoot;
      }
      VAR_4 = FUNC_3(VAR_1->pEnv, &VAR_1->rollback, VAR_9);

      if( VAR_4==VAR_0 ){
        VAR_5->iV2 = VAR_1->treehdr.root.iTransId;
        VAR_5->iV2Child = (u8)VAR_6;
        VAR_5->iV2Ptr = VAR_3;
      }
    }
  }

  return VAR_4;
}
