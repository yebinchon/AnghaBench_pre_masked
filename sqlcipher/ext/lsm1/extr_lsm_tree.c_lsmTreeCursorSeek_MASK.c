
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u32 ;
typedef int lsm_db ;
struct TYPE_14__ {scalar_t__ iRoot; int nHeight; int iTransId; } ;
typedef TYPE_1__ TreeRoot ;
struct TYPE_15__ {scalar_t__* aiKeyPtr; } ;
typedef TYPE_2__ TreeNode ;
struct TYPE_16__ {int flags; int nKey; } ;
typedef TYPE_3__ TreeKey ;
struct TYPE_17__ {int iNode; int* aiCell; TYPE_2__** apTreeNode; TYPE_1__* pRoot; int * pDb; } ;
typedef TYPE_4__ TreeCursor ;
struct TYPE_18__ {int member_1; int member_0; } ;
typedef TYPE_5__ TreeBlob ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*,void*,int,int*) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (void*,int ,void*,int) ;
 TYPE_3__* FUNC_7 (int *,scalar_t__,int ,TYPE_5__*,int*) ;
 scalar_t__ FUNC_8 (int *,scalar_t__) ;

int FUNC_9(TreeCursor *VAR_3, void *VAR_4, int VAR_5, int *VAR_6){
  int VAR_7 = VAR_1;
  lsm_db *VAR_8 = VAR_3->pDb;
  TreeRoot *VAR_9 = VAR_3->pRoot;
  u32 VAR_10;


  FUNC_5(VAR_3, 0);

  VAR_10 = VAR_9->iRoot;
  if( VAR_10==0 ){

    FUNC_0( VAR_7!=VAR_1 || VAR_9->iRoot==0 );
    *VAR_6 = -1;
    VAR_3->iNode = -1;
  }else{
    TreeBlob VAR_11 = {0, 0};
    int VAR_12 = 0;
    int VAR_13 = -1;
    while( VAR_10 ){
      TreeNode *VAR_14;
      int VAR_15;
      u32 VAR_16;
      TreeKey *VAR_17;

      VAR_14 = (TreeNode *)FUNC_8(VAR_8, VAR_10);
      VAR_13++;
      VAR_3->apTreeNode[VAR_13] = VAR_14;




      VAR_17 = (TreeKey*)FUNC_8(VAR_8, VAR_14->aiKeyPtr[1]);
      if( !(VAR_17->flags & VAR_0) ){
        VAR_17 = FUNC_7(VAR_8, VAR_14->aiKeyPtr[1], VAR_2, &VAR_11, &VAR_7);
        if( VAR_7!=VAR_1 ) break;
      }
      VAR_12 = FUNC_6((void *)&VAR_17[1], VAR_17->nKey, VAR_4, VAR_5);
      if( VAR_12==0 ){
        VAR_3->aiCell[VAR_13] = 1;
        break;
      }




      VAR_15 = (VAR_12>0 ? 0 : 2);
      VAR_16 = VAR_14->aiKeyPtr[VAR_15];
      if( VAR_16 ){
        VAR_17 = (TreeKey*)FUNC_8(VAR_8, VAR_16);
        if( !(VAR_17->flags & VAR_0) ){
          VAR_17 = FUNC_7(VAR_8, VAR_16, VAR_2, &VAR_11, &VAR_7);
          if( VAR_7 ) break;
        }
        VAR_12 = FUNC_6((void *)&VAR_17[1], VAR_17->nKey, VAR_4, VAR_5);
        if( VAR_12==0 ){
          VAR_3->aiCell[VAR_13] = (u8)VAR_15;
          break;
        }
      }else{
        VAR_15 = 1;
      }

      if( (u32)VAR_13<(VAR_9->nHeight-1) ){
        VAR_10 = FUNC_1(VAR_14, VAR_9->iTransId, VAR_15 + (VAR_12<0));
      }else{
        VAR_10 = 0;
      }
      VAR_3->aiCell[VAR_13] = (u8)(VAR_15 + (VAR_10 && (VAR_12<0)));
    }

    *VAR_6 = VAR_12;
    VAR_3->iNode = VAR_13;
    FUNC_3(VAR_8, &VAR_11);
  }



  if( VAR_7==VAR_1 && FUNC_2(VAR_3) ){
    int VAR_18 = FUNC_4(VAR_3, VAR_4, VAR_5, &VAR_7);
    FUNC_0( VAR_7!=VAR_1 || *VAR_6==VAR_18 || (*VAR_6 ^ VAR_18)>0 );
  }


  return VAR_7;
}
