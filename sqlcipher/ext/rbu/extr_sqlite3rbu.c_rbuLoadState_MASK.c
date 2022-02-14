
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_6__ {int rc; int zStateDb; int zErrmsg; int dbRbu; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int sqlite3_stmt ;
struct TYPE_7__ {int eStage; int nRow; void* zDataTbl; void* nPhaseOneStep; void* iOalSz; void* iCookie; void* iWalCksum; void* nProgress; void* zIdx; void* zTbl; } ;
typedef TYPE_2__ RbuState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int **,int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 void* FUNC_2 (char*,int*) ;
 int FUNC_3 (int *,int) ;
 void* FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static RbuState *FUNC_9(sqlite3rbu *VAR_6){
  RbuState *VAR_7 = 0;
  sqlite3_stmt *VAR_8 = 0;
  int VAR_9;
  int VAR_10;

  VAR_7 = (RbuState*)FUNC_1(VAR_6, sizeof(RbuState));
  if( VAR_7==0 ) return 0;

  VAR_9 = FUNC_0(VAR_6->dbRbu, &VAR_8, &VAR_6->zErrmsg,
      FUNC_7("SELECT k, v FROM %s.rbu_state", VAR_6->zStateDb)
  );
  while( VAR_9==VAR_4 && VAR_5==FUNC_8(VAR_8) ){
    switch( FUNC_3(VAR_8, 0) ){
      case 129:
        VAR_7->eStage = FUNC_3(VAR_8, 1);
        if( VAR_7->eStage!=VAR_2
         && VAR_7->eStage!=VAR_1
         && VAR_7->eStage!=VAR_0
        ){
          VAR_6->rc = VAR_3;
        }
        break;

      case 128:
        VAR_7->zTbl = FUNC_2((char*)FUNC_5(VAR_8, 1), &VAR_9);
        break;

      case 134:
        VAR_7->zIdx = FUNC_2((char*)FUNC_5(VAR_8, 1), &VAR_9);
        break;

      case 130:
        VAR_7->nRow = FUNC_3(VAR_8, 1);
        break;

      case 131:
        VAR_7->nProgress = FUNC_4(VAR_8, 1);
        break;

      case 137:
        VAR_7->iWalCksum = FUNC_4(VAR_8, 1);
        break;

      case 136:
        VAR_7->iCookie = (u32)FUNC_4(VAR_8, 1);
        break;

      case 133:
        VAR_7->iOalSz = (u32)FUNC_4(VAR_8, 1);
        break;

      case 132:
        VAR_7->nPhaseOneStep = FUNC_4(VAR_8, 1);
        break;

      case 135:
        VAR_7->zDataTbl = FUNC_2((char*)FUNC_5(VAR_8, 1), &VAR_9);
        break;

      default:
        VAR_9 = VAR_3;
        break;
    }
  }
  VAR_10 = FUNC_6(VAR_8);
  if( VAR_9==VAR_4 ) VAR_9 = VAR_10;

  VAR_6->rc = VAR_9;
  return VAR_7;
}
