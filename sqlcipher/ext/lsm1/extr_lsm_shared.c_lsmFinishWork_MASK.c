
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int iUsedShmid; } ;
struct TYPE_10__ {scalar_t__ iReader; TYPE_6__* pWorker; int pEnv; TYPE_1__ treehdr; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_11__ {int iId; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int ,TYPE_6__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;

void FUNC_6(lsm_db *VAR_3, int VAR_4, int *VAR_5){
  int VAR_6 = *VAR_5;
  FUNC_0( VAR_6!=0 || VAR_3->pWorker );
  if( VAR_3->pWorker ){


    if( VAR_6==VAR_2 ){
      VAR_6 = FUNC_3(VAR_3, VAR_4);
    }



    if( VAR_6==VAR_2 ){
      if( VAR_3->iReader<0 ){
        VAR_6 = FUNC_5(VAR_3, 0);
      }
      if( VAR_6==VAR_2 ){
        VAR_6 = FUNC_1(VAR_3, VAR_3->pWorker->iId, VAR_3->treehdr.iUsedShmid);
      }
    }


    FUNC_2(VAR_3->pEnv, VAR_3->pWorker);
    VAR_3->pWorker = 0;
  }

  FUNC_4(VAR_3, VAR_1, VAR_0, 0);
  *VAR_5 = VAR_6;
}
