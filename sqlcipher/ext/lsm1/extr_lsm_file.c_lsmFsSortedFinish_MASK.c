
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {TYPE_1__* pWorker; } ;
struct TYPE_18__ {scalar_t__ pCompress; int nPagesize; TYPE_8__* pDb; } ;
struct TYPE_17__ {int * aData; } ;
struct TYPE_16__ {scalar_t__ iLastPg; scalar_t__ pRedirect; } ;
struct TYPE_15__ {scalar_t__* aiAppend; } ;
typedef TYPE_2__ Segment ;
typedef TYPE_3__ Page ;
typedef scalar_t__ LsmPgno ;
typedef TYPE_4__ FileSystem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,TYPE_2__*,int ,int*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,int ,scalar_t__,int ,TYPE_3__**,int ) ;
 int FUNC_4 (TYPE_4__*,scalar_t__) ;
 int FUNC_5 (TYPE_8__*,int) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int *) ;

int FUNC_8(FileSystem *VAR_2, Segment *VAR_3){
  int VAR_4 = VAR_1;
  if( VAR_3 && VAR_3->iLastPg ){
    FUNC_0( VAR_3->pRedirect==0 );
    if( FUNC_2(VAR_2, VAR_3->iLastPg)!=VAR_3->iLastPg ){
      int VAR_5;
      LsmPgno *VAR_6 = VAR_2->pDb->pWorker->aiAppend;
      for(VAR_5=0; VAR_5<VAR_0; VAR_5++){
        if( VAR_6[VAR_5]==0 ){
          VAR_6[VAR_5] = VAR_3->iLastPg+1;
          break;
        }
      }
    }else if( VAR_2->pCompress==0 ){
      Page *VAR_7;
      VAR_4 = FUNC_3(VAR_2, 0, VAR_3->iLastPg, 0, &VAR_7, 0);
      if( VAR_4==VAR_1 ){
        int VAR_8 = (int)FUNC_7(&VAR_7->aData[VAR_2->nPagesize-4]);
        FUNC_5(VAR_2->pDb, VAR_8);
        FUNC_6(VAR_7);
      }
    }else{
      int VAR_9 = 0;
      VAR_4 = FUNC_1(VAR_2, VAR_3, FUNC_4(VAR_2, VAR_3->iLastPg), &VAR_9);
      if( VAR_4==VAR_1 ){
        FUNC_5(VAR_2->pDb, VAR_9);
      }
    }
  }
  return VAR_4;
}
