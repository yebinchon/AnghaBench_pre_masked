
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_17__ {int nHeight; } ;
struct TYPE_15__ {TYPE_3__ root; } ;
struct TYPE_16__ {TYPE_1__ treehdr; } ;
typedef TYPE_2__ lsm_db ;
typedef TYPE_3__ TreeRoot ;
struct TYPE_18__ {int* aiKeyPtr; } ;
typedef TYPE_4__ TreeNode ;
typedef int TreeLeaf ;
struct TYPE_19__ {size_t iNode; int* aiCell; TYPE_4__** apTreeNode; } ;
typedef TYPE_5__ TreeCursor ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_2__*,int *,int*,int*) ;
 TYPE_4__* FUNC_1 (TYPE_2__*,TYPE_4__*,int*,int*) ;
 int FUNC_2 (TYPE_2__*,TYPE_5__*,int) ;

__attribute__((used)) static void FUNC_3(lsm_db *VAR_1, TreeCursor *VAR_2, u32 VAR_3, int *VAR_4){
  if( *VAR_4==VAR_0 ){
    TreeRoot *VAR_5 = &VAR_1->treehdr.root;
    TreeNode *VAR_6;
    u32 VAR_7;
    TreeNode *VAR_8 = VAR_2->apTreeNode[VAR_2->iNode];
    int VAR_9 = VAR_2->aiCell[VAR_2->iNode];


    if( (VAR_2->iNode>0 && (u32)VAR_2->iNode==(VAR_5->nHeight-1)) ){
      VAR_6 = FUNC_0(VAR_1, (TreeLeaf *)VAR_8, &VAR_7, VAR_4);
    }else{
      VAR_6 = FUNC_1(VAR_1, VAR_8, &VAR_7, VAR_4);
    }

    if( VAR_6 ){

      VAR_6->aiKeyPtr[VAR_9] = VAR_3;



      VAR_2->iNode--;
      FUNC_2(VAR_1, VAR_2, VAR_7);
    }
  }
}
