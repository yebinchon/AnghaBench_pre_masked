
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_12__ {int nHeight; scalar_t__ iTransId; } ;
struct TYPE_13__ {TYPE_1__ root; } ;
struct TYPE_14__ {TYPE_2__ treehdr; } ;
typedef TYPE_3__ lsm_db ;
struct TYPE_15__ {scalar_t__ iV2; scalar_t__ iV2Ptr; scalar_t__ iV2Child; } ;
typedef TYPE_4__ TreeNode ;
struct TYPE_16__ {size_t iNode; int blob; int pDb; TYPE_4__** apTreeNode; } ;
typedef TYPE_5__ TreeCursor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_3__*,int ,TYPE_5__*) ;

__attribute__((used)) static int FUNC_5(lsm_db *VAR_1){
  int VAR_2 = VAR_0;

  if( VAR_1->treehdr.root.nHeight>1 ){
    TreeCursor VAR_3;
    u32 VAR_4 = VAR_1->treehdr.root.iTransId;




    VAR_1->treehdr.root.nHeight--;
    FUNC_4(VAR_1, 0, &VAR_3);

    VAR_2 = FUNC_0(&VAR_3, 0);
    while( VAR_2==VAR_0 && FUNC_2(&VAR_3) ){
      TreeNode *VAR_5 = VAR_3.apTreeNode[VAR_3.iNode];
      if( VAR_5->iV2>VAR_4 ){
        VAR_5->iV2Child = 0;
        VAR_5->iV2Ptr = 0;
        VAR_5->iV2 = 0;
      }
      VAR_2 = FUNC_1(&VAR_3);
    }
    FUNC_3(VAR_3.pDb, &VAR_3.blob);

    VAR_1->treehdr.root.nHeight++;
  }

  return VAR_2;
}
