
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_8__ {int errCode; scalar_t__ eState; scalar_t__ pInJournal; scalar_t__ journalOff; int dbSize; int dbOrigSize; int dbFileSize; int dbHintSize; int pWal; scalar_t__ exclusiveMode; scalar_t__ subjInMemory; } ;
typedef TYPE_1__ Pager ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int) ;

int FUNC_10(Pager *VAR_6, int VAR_7, int VAR_8){
  int VAR_9 = VAR_5;

  if( VAR_6->errCode ) return VAR_6->errCode;
  FUNC_3( VAR_6->eState>=VAR_2 && VAR_6->eState<VAR_1 );
  VAR_6->subjInMemory = (u8)VAR_8;

  if( FUNC_0(VAR_6->eState==VAR_2) ){
    FUNC_3( VAR_6->pInJournal==0 );

    if( FUNC_6(VAR_6) ){



      if( VAR_6->exclusiveMode && FUNC_9(VAR_6->pWal, -1) ){
        VAR_9 = FUNC_5(VAR_6, VAR_0);
        if( VAR_9!=VAR_5 ){
          return VAR_9;
        }
        (void)FUNC_9(VAR_6->pWal, 1);
      }






      VAR_9 = FUNC_8(VAR_6->pWal);
    }else{





      VAR_9 = FUNC_5(VAR_6, VAR_4);
      if( VAR_9==VAR_5 && VAR_7 ){
        VAR_9 = FUNC_7(VAR_6, VAR_0);
      }
    }

    if( VAR_9==VAR_5 ){
      VAR_6->eState = VAR_3;
      VAR_6->dbHintSize = VAR_6->dbSize;
      VAR_6->dbFileSize = VAR_6->dbSize;
      VAR_6->dbOrigSize = VAR_6->dbSize;
      VAR_6->journalOff = 0;
    }

    FUNC_3( VAR_9==VAR_5 || VAR_6->eState==VAR_2 );
    FUNC_3( VAR_9!=VAR_5 || VAR_6->eState==VAR_3 );
    FUNC_3( FUNC_4(VAR_6) );
  }

  FUNC_2(("TRANSACTION %d\n", FUNC_1(VAR_6)));
  return VAR_9;
}
