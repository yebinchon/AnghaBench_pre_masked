
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* aRegion; int cksum1; int cksum0; } ;
struct TYPE_7__ {TYPE_5__ log; } ;
struct TYPE_9__ {TYPE_1__ treehdr; TYPE_4__* pLogWriter; } ;
typedef TYPE_3__ lsm_db ;
struct TYPE_10__ {scalar_t__ iOff; scalar_t__ iRegion1End; scalar_t__ iRegion2Start; int cksum1; int cksum0; } ;
struct TYPE_8__ {scalar_t__ iEnd; scalar_t__ iStart; } ;
typedef TYPE_4__ LogWriter ;
typedef TYPE_5__ DbLog ;


 int FUNC_0 (int) ;

void FUNC_1(lsm_db *VAR_0, int VAR_1){
  DbLog *VAR_2;
  LogWriter *VAR_3;
  VAR_3 = VAR_0->pLogWriter;

  if( VAR_3==0 ) return;
  VAR_2 = &VAR_0->treehdr.log;

  if( VAR_1 ){
    VAR_2->aRegion[2].iEnd = VAR_3->iOff;
    VAR_2->cksum0 = VAR_3->cksum0;
    VAR_2->cksum1 = VAR_3->cksum1;
    if( VAR_3->iRegion1End ){


      FUNC_0( VAR_2->aRegion[1].iEnd==0 );
      FUNC_0( VAR_2->aRegion[2].iStart<VAR_3->iRegion1End );
      VAR_2->aRegion[1].iStart = VAR_2->aRegion[2].iStart;
      VAR_2->aRegion[1].iEnd = VAR_3->iRegion1End;
      VAR_2->aRegion[2].iStart = VAR_3->iRegion2Start;
    }
  }
}
