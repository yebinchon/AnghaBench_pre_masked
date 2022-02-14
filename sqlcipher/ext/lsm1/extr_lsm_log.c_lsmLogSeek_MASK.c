
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ bUseLog; TYPE_3__* pLogWriter; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_10__ {int iOff; int nBuf; int cksum1; int cksum0; int aBuf; } ;
struct TYPE_7__ {int n; int z; } ;
struct TYPE_9__ {int iOff; int iCksumBuf; int iRegion1End; int iRegion2Start; int cksum1; int cksum0; TYPE_1__ buf; } ;
typedef TYPE_3__ LogWriter ;
typedef TYPE_4__ LogMark ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(
  lsm_db *VAR_0,
  LogMark *VAR_1
){
  LogWriter *VAR_2;

  if( VAR_0->bUseLog==0 ) return;
  VAR_2 = VAR_0->pLogWriter;

  FUNC_0( VAR_1->iOff<=VAR_2->iOff+VAR_2->buf.n );
  if( (VAR_1->iOff & 0xFFFFFFF8)>=VAR_2->iOff ){
    VAR_2->buf.n = (int)(VAR_1->iOff - VAR_2->iOff);
    VAR_2->iCksumBuf = (VAR_2->buf.n & 0xFFFFFFF8);
  }else{
    VAR_2->buf.n = VAR_1->nBuf;
    FUNC_1(VAR_2->buf.z, VAR_1->aBuf, VAR_1->nBuf);
    VAR_2->iCksumBuf = 0;
    VAR_2->iOff = VAR_1->iOff - VAR_1->nBuf;
  }
  VAR_2->cksum0 = VAR_1->cksum0;
  VAR_2->cksum1 = VAR_1->cksum1;

  if( VAR_1->iOff > VAR_2->iRegion1End ) VAR_2->iRegion1End = 0;
  if( VAR_1->iOff > VAR_2->iRegion2Start ) VAR_2->iRegion2Start = 0;
}
