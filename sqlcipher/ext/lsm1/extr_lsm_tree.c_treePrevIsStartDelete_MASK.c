
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {int nHeight; } ;
struct TYPE_12__ {TYPE_1__ root; } ;
struct TYPE_13__ {TYPE_2__ treehdr; } ;
typedef TYPE_3__ lsm_db ;
struct TYPE_14__ {scalar_t__* aiKeyPtr; } ;
typedef TYPE_4__ TreeNode ;
struct TYPE_15__ {int flags; } ;
typedef TYPE_5__ TreeKey ;
struct TYPE_16__ {int iNode; int* aiCell; TYPE_4__** apTreeNode; } ;
typedef TYPE_6__ TreeCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_5__* FUNC_1 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(lsm_db *VAR_2, TreeCursor *VAR_3){
  int VAR_4 = VAR_3->iNode;


  FUNC_0( (u32)VAR_3->iNode==(VAR_2->treehdr.root.nHeight-1) );

  while( VAR_4>=0 ){
    TreeNode *VAR_5 = VAR_3->apTreeNode[VAR_4];
    int VAR_6 = VAR_3->aiCell[VAR_4]-1;
    if( VAR_6>=0 && VAR_5->aiKeyPtr[VAR_6] ){
      int VAR_7 = VAR_0;
      TreeKey *VAR_8 = FUNC_1(VAR_2, VAR_5->aiKeyPtr[VAR_6]);
      FUNC_0( VAR_7==VAR_0 );
      return ((VAR_8->flags & VAR_1) ? 1 : 0);
    }
    VAR_4--;
  }

  return 0;
}
