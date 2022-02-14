
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_25__ {scalar_t__ iId; } ;
struct TYPE_27__ {int nMaxFreelist; TYPE_3__ compress; int pEnv; TYPE_6__* pWorker; int * pFS; } ;
typedef TYPE_5__ lsm_db ;
typedef int i64 ;
struct TYPE_31__ {scalar_t__ aCkpt; int pEnv; } ;
struct TYPE_30__ {int iBlk; int iId; } ;
struct TYPE_29__ {struct TYPE_29__* pNext; } ;
struct TYPE_26__ {int nEntry; TYPE_8__* aEntry; } ;
struct TYPE_24__ {int n; TYPE_1__* a; } ;
struct TYPE_28__ {scalar_t__ iCmpId; int nBlock; int nWrite; TYPE_4__ freelist; TYPE_2__ redirect; } ;
struct TYPE_23__ {int iFrom; int iTo; } ;
typedef TYPE_6__ Snapshot ;
typedef TYPE_7__ Level ;
typedef TYPE_8__ FreelistEntry ;
typedef int FileSystem ;
typedef TYPE_9__ CkptBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_9__*,int,int*) ;
 int FUNC_2 (TYPE_5__*,TYPE_9__*,int*,int*) ;
 int FUNC_3 (TYPE_7__*,TYPE_9__*,int*,int*) ;
 int FUNC_4 (TYPE_5__*,int,TYPE_9__*,int*,int*) ;
 int FUNC_5 (TYPE_9__*,int,int,int*) ;
 TYPE_7__* FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_5__*,int,char*,int,int) ;
 int FUNC_10 (TYPE_9__*,int ,int) ;

__attribute__((used)) static int FUNC_11(
  lsm_db *VAR_12,
  int VAR_13,
  i64 VAR_14,
  int VAR_15,
  void **VAR_16,
  int *VAR_17
){
  int VAR_18 = VAR_11;
  FileSystem *VAR_19 = VAR_12->pFS;
  Snapshot *VAR_20 = VAR_12->pWorker;
  int VAR_21 = 0;
  int VAR_22;
  int VAR_23 = 0;
  Level *VAR_24;
  int VAR_25;
  CkptBuffer VAR_26;


  FUNC_10(&VAR_26, 0, sizeof(CkptBuffer));
  VAR_26.pEnv = VAR_12->pEnv;
  VAR_23 = VAR_9;


  FUNC_4(VAR_12, VAR_13, &VAR_26, &VAR_23, &VAR_18);


  FUNC_2(VAR_12, &VAR_26, &VAR_23, &VAR_18);


  for(VAR_24=FUNC_6(VAR_20); VAR_24; VAR_24=VAR_24->pNext) VAR_21++;


  VAR_22 = 0;
  for(VAR_24=FUNC_6(VAR_20); VAR_22<VAR_21; VAR_24=VAR_24->pNext){
    FUNC_3(VAR_24, &VAR_26, &VAR_23, &VAR_18);
    VAR_22++;
  }


  FUNC_5(&VAR_26, VAR_23++, VAR_20->redirect.n, &VAR_18);
  for(VAR_25=0; VAR_25<VAR_20->redirect.n; VAR_25++){
    FUNC_5(&VAR_26, VAR_23++, VAR_20->redirect.a[VAR_25].iFrom, &VAR_18);
    FUNC_5(&VAR_26, VAR_23++, VAR_20->redirect.a[VAR_25].iTo, &VAR_18);
  }


  FUNC_0( VAR_20->freelist.nEntry<=VAR_12->nMaxFreelist );
  if( VAR_18==VAR_11 ){
    int VAR_27 = VAR_20->freelist.nEntry;
    FUNC_5(&VAR_26, VAR_23++, VAR_27, &VAR_18);
    for(VAR_25=0; VAR_25<VAR_27; VAR_25++){
      FreelistEntry *VAR_28 = &VAR_20->freelist.aEntry[VAR_25];
      FUNC_5(&VAR_26, VAR_23++, VAR_28->iBlk, &VAR_18);
      FUNC_5(&VAR_26, VAR_23++, (VAR_28->iId >> 32) & 0xFFFFFFFF, &VAR_18);
      FUNC_5(&VAR_26, VAR_23++, VAR_28->iId & 0xFFFFFFFF, &VAR_18);
    }
  }


  FUNC_0( VAR_14>=0 );
  FUNC_0( VAR_20->iCmpId==VAR_12->compress.iId
       || VAR_20->iCmpId==VAR_10
  );
  FUNC_5(&VAR_26, VAR_3, (u32)(VAR_14>>32), &VAR_18);
  FUNC_5(&VAR_26, VAR_2, (u32)(VAR_14&0xFFFFFFFF), &VAR_18);
  FUNC_5(&VAR_26, VAR_5, VAR_23+2, &VAR_18);
  FUNC_5(&VAR_26, VAR_1, VAR_12->compress.iId, &VAR_18);
  FUNC_5(&VAR_26, VAR_4, VAR_20->nBlock, &VAR_18);
  FUNC_5(&VAR_26, VAR_0, FUNC_7(VAR_19), &VAR_18);
  FUNC_5(&VAR_26, VAR_6, VAR_21, &VAR_18);
  FUNC_5(&VAR_26, VAR_8, FUNC_8(VAR_19), &VAR_18);
  FUNC_5(&VAR_26, VAR_7, VAR_20->nWrite, &VAR_18);

  if( VAR_15 ){
    FUNC_1(&VAR_26, VAR_23, &VAR_18);
  }else{
    FUNC_5(&VAR_26, VAR_23, 0, &VAR_18);
    FUNC_5(&VAR_26, VAR_23+1, 0, &VAR_18);
  }
  VAR_23 += 2;
  FUNC_0( VAR_23<=1024 );
  *VAR_16 = (void *)VAR_26.aCkpt;
  if( VAR_17 ) *VAR_17 = sizeof(u32)*VAR_23;
  return VAR_18;
}
