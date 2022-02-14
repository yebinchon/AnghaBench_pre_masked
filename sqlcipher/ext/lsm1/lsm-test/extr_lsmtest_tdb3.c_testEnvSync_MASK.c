
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
typedef int lsm_file ;
struct TYPE_9__ {int (* xSync ) (int ) ;} ;
typedef TYPE_2__ lsm_env ;
struct TYPE_12__ {int nSector; TYPE_1__* aSector; } ;
struct TYPE_11__ {int bCrashed; scalar_t__ nAutoCrash; int pWriteCtx; int (* xWriteHook ) (int ,size_t,int ,int ,int) ;scalar_t__ bPrepareCrash; TYPE_5__* aFile; } ;
struct TYPE_10__ {size_t bLog; int pReal; TYPE_4__* pDb; } ;
struct TYPE_8__ {scalar_t__ aOld; } ;
typedef TYPE_3__ LsmFile ;
typedef TYPE_4__ LsmDb ;
typedef TYPE_5__ FileData ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct timeval*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,size_t,int ,int ,int) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(lsm_file *VAR_1){
  lsm_env *VAR_2 = FUNC_5();
  LsmFile *VAR_3 = (LsmFile *)VAR_1;
  LsmDb *VAR_4 = VAR_3->pDb;
  FileData *VAR_5 = &VAR_4->aFile[VAR_3->bLog];
  int VAR_6;

  if( VAR_4->bCrashed ) return VAR_0;

  if( VAR_4->nAutoCrash ){
    VAR_4->nAutoCrash--;
    if( VAR_4->nAutoCrash==0 ){
      FUNC_0(VAR_4);
      VAR_4->bCrashed = 1;
      return VAR_0;
    }
  }

  if( VAR_4->bPrepareCrash ){
    for(VAR_6=0; VAR_6<VAR_5->nSector; VAR_6++){
      FUNC_6(VAR_5->aSector[VAR_6].aOld);
      VAR_5->aSector[VAR_6].aOld = 0;
    }
  }

  if( VAR_4->xWriteHook ){
    int VAR_7;
    int VAR_8;
    struct timeval VAR_9;
    struct timeval VAR_10;

    FUNC_1(&VAR_9, 0);
    VAR_7 = VAR_2->xSync(VAR_3->pReal);
    FUNC_1(&VAR_10, 0);

    VAR_8 = (VAR_10 - VAR_9) * 1000000 + (VAR_10 - VAR_9);
    VAR_4->xWriteHook(VAR_4->pWriteCtx, VAR_3->bLog, 0, 0, VAR_8);
    return VAR_7;
  }

  return VAR_2->xSync(VAR_3->pReal);
}
