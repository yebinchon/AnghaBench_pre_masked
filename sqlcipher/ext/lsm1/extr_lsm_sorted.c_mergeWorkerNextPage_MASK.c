
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_10__ {scalar_t__ xCompress; } ;
struct TYPE_12__ {TYPE_2__ compress; int pWorker; int pFS; } ;
typedef TYPE_4__ lsm_db ;
struct TYPE_9__ {scalar_t__ iFirst; } ;
struct TYPE_14__ {TYPE_3__* pMerge; TYPE_1__ lhs; } ;
struct TYPE_13__ {int nWork; TYPE_8__* pLevel; int * pPage; TYPE_4__* pDb; } ;
struct TYPE_11__ {scalar_t__ iOutputOff; } ;
typedef int Page ;
typedef TYPE_5__ MergeWorker ;
typedef int LsmPgno ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int *,int*) ;
 int FUNC_5 (int ,int ,TYPE_8__*,int ,int **) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_9(
  MergeWorker *VAR_1,
  LsmPgno VAR_2
){
  int VAR_3 = VAR_0;
  Page *VAR_4 = 0;
  lsm_db *VAR_5 = VAR_1->pDb;

  VAR_3 = FUNC_5(VAR_5->pFS, VAR_5->pWorker, VAR_1->pLevel, 0, &VAR_4);
  FUNC_3( VAR_3 || VAR_1->pLevel->lhs.iFirst>0 || VAR_1->pDb->compress.xCompress );

  if( VAR_3==VAR_0 ){
    u8 *VAR_6;
    int VAR_7;

    VAR_3 = FUNC_8(VAR_1);

    VAR_1->pPage = VAR_4;
    VAR_1->pLevel->pMerge->iOutputOff = 0;
    VAR_6 = FUNC_4(VAR_4, &VAR_7);
    FUNC_6(&VAR_6[FUNC_1(VAR_7)], 0);
    FUNC_6(&VAR_6[FUNC_0(VAR_7)], 0);
    FUNC_7(&VAR_6[FUNC_2(VAR_7)], VAR_2);
    VAR_1->nWork++;
  }

  return VAR_3;
}
