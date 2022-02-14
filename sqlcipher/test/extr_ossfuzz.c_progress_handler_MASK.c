
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_2__ {scalar_t__ iCutoffTime; scalar_t__ iLastCb; scalar_t__ mxInterval; int nCb; } ;
typedef TYPE_1__ FuzzCtx ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static int FUNC_1(void *VAR_0) {
  FuzzCtx *VAR_1 = (FuzzCtx*)VAR_0;
  sqlite3_int64 VAR_2 = FUNC_0();
  int VAR_3 = VAR_2>=VAR_1->iCutoffTime;
  sqlite3_int64 VAR_4 = VAR_2 - VAR_1->iLastCb;
  if( VAR_4 > VAR_1->mxInterval ) VAR_1->mxInterval = VAR_4;
  VAR_1->nCb++;
  return VAR_3;
}
