
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef void* u32 ;
struct RedirectEntry {int dummy; } ;
struct TYPE_19__ {int pEnv; } ;
typedef TYPE_5__ lsm_db ;
typedef int i64 ;
struct TYPE_23__ {void* iTo; void* iFrom; } ;
struct TYPE_22__ {void* iId; void* iBlk; } ;
struct TYPE_16__ {TYPE_3__* pRedirect; } ;
struct TYPE_21__ {int nRight; TYPE_2__ lhs; TYPE_1__* aRhs; struct TYPE_21__* pNext; } ;
struct TYPE_18__ {int nEntry; int nAlloc; TYPE_8__* aEntry; } ;
struct TYPE_17__ {int n; TYPE_9__* a; } ;
struct TYPE_20__ {TYPE_4__ freelist; TYPE_3__ redirect; TYPE_7__* pLevel; int * aiAppend; void* iCmpId; int iLogOff; void* nWrite; void* nBlock; int iId; } ;
struct TYPE_15__ {TYPE_3__* pRedirect; } ;
typedef TYPE_6__ Snapshot ;
typedef TYPE_7__ Level ;
typedef TYPE_8__ FreelistEntry ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_5__*,void**,int*,int,TYPE_7__**) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (void**,int ) ;
 int FUNC_3 (void**) ;
 int FUNC_4 (int ,TYPE_6__*) ;
 TYPE_9__* FUNC_5 (int ,int,int*) ;

int FUNC_6(
  lsm_db *VAR_10,
  int VAR_11,
  u32 *VAR_12,
  Snapshot **VAR_13
){
  int VAR_14 = VAR_9;
  Snapshot *VAR_15;

  VAR_15 = (Snapshot *)FUNC_5(VAR_10->pEnv, sizeof(Snapshot), &VAR_14);
  if( VAR_14==VAR_9 ){
    Level *VAR_16;
    int VAR_17;
    int VAR_18;
    int VAR_19 = (int)VAR_12[VAR_3];
    int VAR_20 = VAR_5 + VAR_0 + VAR_6;

    VAR_15->iId = FUNC_2(VAR_12, 0);
    VAR_15->nBlock = VAR_12[VAR_2];
    VAR_15->nWrite = VAR_12[VAR_4];
    VAR_14 = FUNC_0(VAR_10, VAR_12, &VAR_20, VAR_19, &VAR_15->pLevel);
    VAR_15->iLogOff = FUNC_3(VAR_12);
    VAR_15->iCmpId = VAR_12[VAR_1];


    for(VAR_18=0; VAR_18<VAR_7; VAR_18++){
      u32 *VAR_21 = &VAR_12[VAR_5 + VAR_6 + VAR_18*2];
      VAR_15->aiAppend[VAR_18] = FUNC_1(VAR_21);
    }


    VAR_15->redirect.n = VAR_12[VAR_20++];
    if( VAR_15->redirect.n ){
      VAR_15->redirect.a = FUNC_5(VAR_10->pEnv,
          (sizeof(struct RedirectEntry) * VAR_8), &VAR_14
      );
      if( VAR_14==VAR_9 ){
        for(VAR_18=0; VAR_18<VAR_15->redirect.n; VAR_18++){
          VAR_15->redirect.a[VAR_18].iFrom = VAR_12[VAR_20++];
          VAR_15->redirect.a[VAR_18].iTo = VAR_12[VAR_20++];
        }
      }
      for(VAR_16=VAR_15->pLevel; VAR_16->pNext; VAR_16=VAR_16->pNext);
      if( VAR_16->nRight ){
        VAR_16->aRhs[VAR_16->nRight-1].pRedirect = &VAR_15->redirect;
      }else{
        VAR_16->lhs.pRedirect = &VAR_15->redirect;
      }
    }


    if( VAR_14==VAR_9 && VAR_11 ){
      VAR_17 = VAR_12[VAR_20++];
      if( VAR_17 ){
        VAR_15->freelist.aEntry = (FreelistEntry *)FUNC_5(
            VAR_10->pEnv, sizeof(FreelistEntry)*VAR_17, &VAR_14
        );
        if( VAR_14==VAR_9 ){
          int VAR_22;
          for(VAR_22=0; VAR_22<VAR_17; VAR_22++){
            FreelistEntry *VAR_23 = &VAR_15->freelist.aEntry[VAR_22];
            VAR_23->iBlk = VAR_12[VAR_20++];
            VAR_23->iId = ((i64)(VAR_12[VAR_20])<<32) + VAR_12[VAR_20+1];
            VAR_20 += 2;
          }
          VAR_15->freelist.nEntry = VAR_15->freelist.nAlloc = VAR_17;
        }
      }
    }
  }

  if( VAR_14!=VAR_9 ){
    FUNC_4(VAR_10->pEnv, VAR_15);
    VAR_15 = 0;
  }

  *VAR_13 = VAR_15;
  return VAR_14;
}
