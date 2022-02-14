
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_13__ {scalar_t__ nChunk; scalar_t__ iFirst; scalar_t__ iNextShmid; } ;
struct TYPE_14__ {int pEnv; TYPE_1__ treehdr; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_16__ {scalar_t__ iShmid; int iNext; } ;
struct TYPE_15__ {int iLoc; TYPE_4__* pShm; } ;
typedef TYPE_3__ ShmChunkLoc ;
typedef TYPE_4__ ShmChunk ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int ,int,int*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_4__* FUNC_5 (TYPE_2__*,int) ;
 TYPE_4__* FUNC_6 (TYPE_2__*,int,int*) ;

__attribute__((used)) static int FUNC_7(lsm_db *VAR_1){
  int VAR_2 = VAR_0;
  int VAR_3;
  ShmChunk *VAR_4;
  ShmChunk *VAR_5 = 0;
  u32 VAR_6 = 0;



  for(VAR_3=1; VAR_2==VAR_0 && (u32)VAR_3<VAR_1->treehdr.nChunk; VAR_3++){
    VAR_4 = FUNC_6(VAR_1, VAR_3, &VAR_2);
    if( VAR_4 && (VAR_5==0 || FUNC_3(VAR_5->iShmid, VAR_4->iShmid)) ){
      VAR_5 = VAR_4;
      VAR_6 = VAR_3;
    }
  }





  if( VAR_2==VAR_0 ){
    int VAR_7;
    int VAR_8;
    u32 VAR_9;
    ShmChunkLoc *VAR_10;


    VAR_7 = 1;
    while( (u32)VAR_7 < (VAR_1->treehdr.nChunk-1) ) VAR_7 = VAR_7 * 2;
    VAR_8 = sizeof(ShmChunkLoc) * VAR_7 * 2;
    VAR_10 = FUNC_2(VAR_1->pEnv, VAR_8, &VAR_2);
    VAR_9 = VAR_5->iShmid;


    if( VAR_2==VAR_0 ){
      VAR_9 = VAR_5->iShmid-1;
      for(VAR_3=1; (u32)VAR_3<VAR_1->treehdr.nChunk; VAR_3++){
        VAR_4 = FUNC_5(VAR_1, VAR_3);
        VAR_10[VAR_3-1].pShm = VAR_4;
        VAR_10[VAR_3-1].iLoc = VAR_3;
        if( (u32)VAR_3!=VAR_1->treehdr.iFirst ){
          if( FUNC_3(VAR_4->iShmid, VAR_1->treehdr.iNextShmid) ){
            VAR_4->iShmid = VAR_9--;
          }
        }
      }
      if( VAR_6!=VAR_1->treehdr.iFirst ){
        VAR_4 = FUNC_5(VAR_1, VAR_1->treehdr.iFirst);
        VAR_4->iShmid = VAR_9;
      }
    }

    if( VAR_2==VAR_0 ){
      ShmChunkLoc *VAR_11 = &VAR_10[VAR_7];
      for(VAR_3=0; VAR_3<VAR_7; VAR_3++){
        if( VAR_10[VAR_3].pShm ){
          FUNC_0( FUNC_3(VAR_10[VAR_3].pShm->iShmid, VAR_9) );
          FUNC_0( VAR_11[VAR_10[VAR_3].pShm->iShmid - VAR_9].pShm==0 );
          VAR_11[VAR_10[VAR_3].pShm->iShmid - VAR_9] = VAR_10[VAR_3];
        }
      }

      if( VAR_11[VAR_7-1].pShm ) VAR_11[VAR_7-1].pShm->iNext = 0;
      for(VAR_3=0; VAR_3<VAR_7-1; VAR_3++){
        if( VAR_11[VAR_3].pShm ){
          VAR_11[VAR_3].pShm->iNext = VAR_11[VAR_3+1].iLoc;
        }
      }

      VAR_2 = FUNC_4(VAR_1);
      FUNC_1(VAR_1->pEnv, VAR_10);
    }
  }

  return VAR_2;
}
