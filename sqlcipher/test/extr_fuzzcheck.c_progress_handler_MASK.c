
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_2__ {scalar_t__ iCutoffTime; scalar_t__ iLastCb; scalar_t__ mxInterval; scalar_t__ nCb; scalar_t__ mxCb; int timeoutHit; } ;
typedef TYPE_1__ FuzzCtx ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int FUNC_3(void *VAR_2) {
  FuzzCtx *VAR_3 = (FuzzCtx*)VAR_2;
  sqlite3_int64 VAR_4 = FUNC_2();
  int VAR_5 = VAR_4>=VAR_3->iCutoffTime;
  sqlite3_int64 VAR_6 = VAR_4 - VAR_3->iLastCb;
  if( VAR_6 > VAR_3->mxInterval ) VAR_3->mxInterval = VAR_6;
  VAR_3->nCb++;
  if( VAR_5==0 && VAR_3->mxCb>0 && VAR_3->mxCb<=VAR_3->nCb ) VAR_5 = 1;
  if( VAR_5 && !VAR_3->timeoutHit && VAR_0>=2 ){
    FUNC_1("Timeout on progress callback %d\n", VAR_3->nCb);
    FUNC_0(VAR_1);
    VAR_3->timeoutHit = 1;
  }
  return VAR_5;
}
