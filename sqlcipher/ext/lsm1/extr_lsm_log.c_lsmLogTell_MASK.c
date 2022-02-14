
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ bUseLog; TYPE_3__* pLogWriter; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_11__ {int nBuf; int cksum1; int cksum0; scalar_t__ iOff; int aBuf; } ;
struct TYPE_8__ {int n; int * z; } ;
struct TYPE_10__ {int iCksumBuf; int cksum1; int cksum0; TYPE_1__ buf; scalar_t__ iOff; } ;
typedef TYPE_3__ LogWriter ;
typedef TYPE_4__ LogMark ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ,int *,int) ;

void FUNC_3(
  lsm_db *VAR_0,
  LogMark *VAR_1
){
  LogWriter *VAR_2;
  int VAR_3;

  if( VAR_0->bUseLog==0 ) return;
  VAR_2 = VAR_0->pLogWriter;
  VAR_3 = VAR_2->buf.n & 0xFFFFFFF8;
  FUNC_1(VAR_2, VAR_3);
  FUNC_0( VAR_2->iCksumBuf==VAR_3 );
  VAR_1->nBuf = VAR_2->buf.n - VAR_3;
  FUNC_2(VAR_1->aBuf, &VAR_2->buf.z[VAR_3], VAR_1->nBuf);

  VAR_1->iOff = VAR_2->iOff + VAR_2->buf.n;
  VAR_1->cksum0 = VAR_2->cksum0;
  VAR_1->cksum1 = VAR_2->cksum1;
}
