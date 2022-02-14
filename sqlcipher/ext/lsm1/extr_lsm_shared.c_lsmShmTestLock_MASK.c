
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int mLock; int pEnv; struct TYPE_4__* pNext; TYPE_2__* pDatabase; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_5__ {int pClientMutex; int pFile; scalar_t__ bMultiProc; TYPE_1__* pConn; } ;
typedef TYPE_2__ Database ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(
  lsm_db *VAR_3,
  int VAR_4,
  int VAR_5,
  int VAR_6
){
  int VAR_7 = VAR_2;
  lsm_db *VAR_8;
  Database *VAR_9 = VAR_3->pDatabase;
  int VAR_10;
  u64 VAR_11 = 0;

  for(VAR_10=VAR_4; VAR_10<(VAR_4+VAR_5); VAR_10++){
    VAR_11 |= ((u64)1 << (VAR_4-1));
    if( VAR_6==VAR_1 ) VAR_11 |= ((u64)1 << (VAR_4+32-1));
  }

  FUNC_2(VAR_3->pEnv, VAR_9->pClientMutex);
  for(VAR_8=VAR_9->pConn; VAR_8; VAR_8=VAR_8->pNext){
    if( VAR_8!=VAR_3 && (VAR_8->mLock & VAR_11) ){
      FUNC_0( VAR_8!=VAR_3 );
      break;
    }
  }

  if( VAR_8 ){
    VAR_7 = VAR_0;
  }else if( VAR_9->bMultiProc ){
    VAR_7 = FUNC_1(VAR_3->pEnv, VAR_9->pFile, VAR_4, VAR_5, VAR_6);
  }

  FUNC_3(VAR_3->pEnv, VAR_9->pClientMutex);
  return VAR_7;
}
