
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
typedef int lsm_env ;
struct TYPE_13__ {int pFS; int * pEnv; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_16__ {int iSplitTopic; void* pSplitKey; int nSplitKey; TYPE_3__* pMerge; } ;
struct TYPE_15__ {void* pData; int nData; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_12__ {int iCell; int iPg; } ;
struct TYPE_14__ {TYPE_1__ splitkey; } ;
typedef int Segment ;
typedef int Page ;
typedef TYPE_3__ Merge ;
typedef int LsmPgno ;
typedef TYPE_4__ LsmBlob ;
typedef TYPE_5__ Level ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int **) ;
 int * FUNC_1 (int *,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,int *,int*,void**,int*,TYPE_4__*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *,int *,int ,int*,TYPE_4__*) ;
 int FUNC_6 (int *,TYPE_4__*,void*,int) ;
 int * FUNC_7 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_8(lsm_db *VAR_2, Level *VAR_3, int *VAR_4){
  Segment *VAR_5;
  Page *VAR_6 = 0;
  lsm_env *VAR_7 = VAR_2->pEnv;
  int VAR_8 = *VAR_4;
  Merge *VAR_9 = VAR_3->pMerge;

  VAR_5 = FUNC_7(VAR_3);
  if( VAR_8==VAR_0 ){
    VAR_8 = FUNC_0(VAR_2->pFS, VAR_5, VAR_9->splitkey.iPg, &VAR_6);
  }
  if( VAR_8==VAR_0 ){
    int VAR_10;
    LsmBlob VAR_11 = {0, 0, 0, 0};
    u8 *VAR_12;
    int VAR_13;

    VAR_12 = FUNC_1(VAR_6, &VAR_13);
    if( FUNC_4(VAR_12, VAR_13) & VAR_1 ){
      void *VAR_14;
      int VAR_15;
      LsmPgno VAR_16;
      VAR_8 = FUNC_3(VAR_5,
          VAR_6, VAR_9->splitkey.iCell, &VAR_16, &VAR_10, &VAR_14, &VAR_15, &VAR_11
      );
      if( VAR_8==VAR_0 && VAR_11.pData!=VAR_14 ){
        VAR_8 = FUNC_6(VAR_7, &VAR_11, VAR_14, VAR_15);
      }
    }else{
      VAR_8 = FUNC_5(
          VAR_7, VAR_5, VAR_6, VAR_9->splitkey.iCell, &VAR_10, &VAR_11
      );
    }

    VAR_3->iSplitTopic = VAR_10;
    VAR_3->pSplitKey = VAR_11.pData;
    VAR_3->nSplitKey = VAR_11.nData;
    FUNC_2(VAR_6);
  }

  *VAR_4 = VAR_8;
}
