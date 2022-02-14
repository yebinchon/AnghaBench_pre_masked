
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct timeval {int tv_sec; int tv_usec; } ;
typedef int lsm_i64 ;
typedef int lsm_file ;
struct TYPE_9__ {int (* xWrite ) (int ,int,void*,int) ;int (* xRead ) (int ,int,int *,int) ;} ;
typedef TYPE_1__ lsm_env ;
struct TYPE_13__ {int nSector; TYPE_4__* aSector; } ;
struct TYPE_12__ {scalar_t__ aOld; } ;
struct TYPE_11__ {int szSector; int pWriteCtx; int (* xWriteHook ) (int ,size_t,int,int,int) ;TYPE_5__* aFile; scalar_t__ bPrepareCrash; scalar_t__ bCrashed; } ;
struct TYPE_10__ {size_t bLog; int pReal; TYPE_3__* pDb; } ;
typedef TYPE_2__ LsmFile ;
typedef TYPE_3__ LsmDb ;
typedef TYPE_4__ FileSector ;
typedef TYPE_5__ FileData ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct timeval*,int ) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 int FUNC_3 (int ,int,int *,int) ;
 int FUNC_4 (int ,int,void*,int) ;
 int FUNC_5 (int ,size_t,int,int,int) ;
 int FUNC_6 (int ,int,void*,int) ;
 TYPE_1__* FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_10(lsm_file *VAR_1, lsm_i64 VAR_2, void *VAR_3, int VAR_4){
  lsm_env *VAR_5 = FUNC_7();
  LsmFile *VAR_6 = (LsmFile *)VAR_1;
  LsmDb *VAR_7 = VAR_6->pDb;

  if( VAR_7->bCrashed ) return VAR_0;

  if( VAR_7->bPrepareCrash ){
    FileData *VAR_8 = &VAR_7->aFile[VAR_6->bLog];
    int VAR_9;
    int VAR_10;
    int VAR_11;

    VAR_9 = (int)(VAR_2 / VAR_7->szSector);
    VAR_10 = (int)((VAR_2 + VAR_4 - 1) / VAR_7->szSector);

    if( VAR_8->nSector<(VAR_10+1) ){
      int VAR_12 = ( ((VAR_10 + 1) + 63) / 64 ) * 64;
      FUNC_0( VAR_12>VAR_10 );
      VAR_8->aSector = (FileSector *)FUNC_9(
          VAR_8->aSector, VAR_12*sizeof(FileSector)
      );
      FUNC_2(&VAR_8->aSector[VAR_8->nSector],
          0, (VAR_12 - VAR_8->nSector) * sizeof(FileSector)
      );
      VAR_8->nSector = VAR_12;
    }

    for(VAR_11=VAR_9; VAR_11<=VAR_10; VAR_11++){
      if( VAR_8->aSector[VAR_11].aOld==0 ){
        u8 *VAR_13 = (u8 *)FUNC_8(VAR_7->szSector);
        VAR_5->xRead(
            VAR_6->pReal, (lsm_i64)VAR_11*VAR_7->szSector, VAR_13, VAR_7->szSector
        );
        VAR_8->aSector[VAR_11].aOld = VAR_13;
      }
    }
  }

  if( VAR_7->xWriteHook ){
    int VAR_14;
    int VAR_15;
    struct timeval VAR_16;
    struct timeval VAR_17;

    FUNC_1(&VAR_16, 0);
    FUNC_0( VAR_4>0 );
    VAR_14 = VAR_5->xWrite(VAR_6->pReal, VAR_2, VAR_3, VAR_4);
    FUNC_1(&VAR_17, 0);

    VAR_15 = (VAR_17 - VAR_16) * 1000000 + (VAR_17 - VAR_16);
    VAR_7->xWriteHook(VAR_7->pWriteCtx, VAR_6->bLog, VAR_2, VAR_4, VAR_15);
    return VAR_14;
  }

  return VAR_5->xWrite(VAR_6->pReal, VAR_2, VAR_3, VAR_4);
}
