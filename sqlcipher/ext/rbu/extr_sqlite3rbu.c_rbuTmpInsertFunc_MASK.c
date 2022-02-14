
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ eType; int pTmpInsert; scalar_t__ nIndex; } ;
struct TYPE_5__ {TYPE_1__ objiter; int nPhaseOneStep; } ;
typedef TYPE_2__ sqlite3rbu ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(
  sqlite3_context *VAR_3,
  int VAR_4,
  sqlite3_value **VAR_5
){
  sqlite3rbu *VAR_6 = FUNC_5(VAR_3);
  int VAR_7 = VAR_2;
  int VAR_8;

  FUNC_0( FUNC_6(VAR_5[0])!=0
      || VAR_6->objiter.eType==VAR_0
      || VAR_6->objiter.eType==VAR_1
  );
  if( FUNC_6(VAR_5[0])!=0 ){
    VAR_6->nPhaseOneStep += VAR_6->objiter.nIndex;
  }

  for(VAR_8=0; VAR_7==VAR_2 && VAR_8<VAR_4; VAR_8++){
    VAR_7 = FUNC_1(VAR_6->objiter.pTmpInsert, VAR_8+1, VAR_5[VAR_8]);
  }
  if( VAR_7==VAR_2 ){
    FUNC_4(VAR_6->objiter.pTmpInsert);
    VAR_7 = FUNC_2(VAR_6->objiter.pTmpInsert);
  }

  if( VAR_7!=VAR_2 ){
    FUNC_3(VAR_3, VAR_7);
  }
}
