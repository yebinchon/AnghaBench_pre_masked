
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_8__ {int pEnv; TYPE_2__* pWorker; int * pFS; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_12__ {scalar_t__* aUsed; int nBlock; } ;
struct TYPE_11__ {scalar_t__* aEntry; int member_2; int member_1; int member_0; } ;
struct TYPE_10__ {int nRight; int * aRhs; int lhs; struct TYPE_10__* pNext; } ;
struct TYPE_9__ {int nBlock; TYPE_3__* pLevel; } ;
typedef TYPE_2__ Snapshot ;
typedef TYPE_3__ Level ;
typedef TYPE_4__ Freelist ;
typedef int FileSystem ;
typedef TYPE_5__ CheckFreelistCtx ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int,int,scalar_t__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,scalar_t__*) ;
 scalar_t__* FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*,int ,int ,void*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(lsm_db *VAR_2){
  CheckFreelistCtx VAR_3;
  FileSystem *VAR_4 = VAR_2->pFS;
  int VAR_5;
  int VAR_6;
  Freelist VAR_7 = {0, 0, 0};
  u8 *VAR_8;
  Level *VAR_9;
  Snapshot *VAR_10 = VAR_2->pWorker;
  int VAR_11 = VAR_10->nBlock;







  VAR_8 = FUNC_3(VAR_2->pEnv, VAR_11);
  if( VAR_8==0 ){




    return 1;
  }

  for(VAR_9=VAR_10->pLevel; VAR_9; VAR_9=VAR_9->pNext){
    int VAR_12;
    FUNC_1(VAR_4, &VAR_9->lhs, (VAR_9->nRight!=0), VAR_11, VAR_8);
    for(VAR_12=0; VAR_12<VAR_9->nRight; VAR_12++){
      FUNC_1(VAR_4, &VAR_9->aRhs[VAR_12], 0, VAR_11, VAR_8);
    }
  }


  VAR_3.aUsed = VAR_8;
  VAR_3.nBlock = VAR_11;
  VAR_6 = FUNC_4(VAR_2, 0, VAR_1, (void *)&VAR_3);

  if( VAR_6==VAR_0 ){
    for(VAR_5=0; VAR_5<VAR_11; VAR_5++) FUNC_0( VAR_8[VAR_5]!=0 );
  }

  FUNC_2(VAR_2->pEnv, VAR_8);
  FUNC_2(VAR_2->pEnv, VAR_7.aEntry);

  return 1;
}
