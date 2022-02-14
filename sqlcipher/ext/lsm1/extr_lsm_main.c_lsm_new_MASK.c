
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lsm_env ;
struct TYPE_4__ {int iId; } ;
struct TYPE_5__ {int iReader; int iRwclient; TYPE_1__ compress; int xLog; int iMmap; int bMultiProc; int bUseLog; int nMaxFreelist; int nMerge; int nDfltBlksz; int nDfltPgsz; int xCmp; int eSafety; int bAutowork; int nAutockpt; int nTreeLimit; int * pEnv; } ;
typedef TYPE_2__ lsm_db ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int * FUNC_2 () ;
 int VAR_14 ;
 int VAR_15 ;

int FUNC_3(lsm_env *VAR_16, lsm_db **VAR_17){
  lsm_db *VAR_18;


  if( VAR_16==0 ) VAR_16 = FUNC_2();
  FUNC_0( VAR_16 );


  *VAR_17 = VAR_18 = (lsm_db *)FUNC_1(VAR_16, sizeof(lsm_db));
  if( VAR_18==0 ) return VAR_12;


  VAR_18->pEnv = VAR_16;
  VAR_18->nTreeLimit = VAR_2;
  VAR_18->nAutockpt = VAR_1;
  VAR_18->bAutowork = VAR_4;
  VAR_18->eSafety = VAR_9;
  VAR_18->xCmp = VAR_14;
  VAR_18->nDfltPgsz = VAR_8;
  VAR_18->nDfltBlksz = VAR_5;
  VAR_18->nMerge = VAR_3;
  VAR_18->nMaxFreelist = VAR_11;
  VAR_18->bUseLog = VAR_10;
  VAR_18->iReader = -1;
  VAR_18->iRwclient = -1;
  VAR_18->bMultiProc = VAR_7;
  VAR_18->iMmap = VAR_6;
  VAR_18->xLog = VAR_15;
  VAR_18->compress.iId = VAR_0;
  return VAR_13;
}
