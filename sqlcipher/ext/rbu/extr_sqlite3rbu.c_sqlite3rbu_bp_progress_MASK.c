
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int eStage; int nFrame; int nStep; int nPhaseOneStep; int nProgress; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int const i64 ;






 int FUNC_0 (int ) ;

void FUNC_1(sqlite3rbu *VAR_0, int *VAR_1, int *VAR_2){
  const int VAR_3 = 10000;
  switch( VAR_0->eStage ){
    case 128:
      if( VAR_0->nPhaseOneStep>0 ){
        *VAR_1 = (int)(VAR_3 * (i64)VAR_0->nProgress/(i64)VAR_0->nPhaseOneStep);
      }else{
        *VAR_1 = -1;
      }
      *VAR_2 = 0;
      break;

    case 129:
      *VAR_1 = VAR_3;
      *VAR_2 = 0;
      break;

    case 131:
      *VAR_1 = VAR_3;
      *VAR_2 = (int)(VAR_3 * (i64)VAR_0->nStep / (i64)VAR_0->nFrame);
      break;

    case 130:
      *VAR_1 = VAR_3;
      *VAR_2 = VAR_3;
      break;

    default:
      FUNC_0( 0 );
  }
}
