
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_vfs ;
struct TYPE_10__ {int nStmtSpill; } ;
struct TYPE_9__ {scalar_t__ eState; scalar_t__ pInJournal; int errCode; scalar_t__ journalMode; scalar_t__ journalHdr; scalar_t__ setMaster; scalar_t__ journalOff; scalar_t__ nRec; int jfd; int zJournal; scalar_t__ tempFile; int dbSize; int * pVfs; } ;
typedef TYPE_1__ Pager ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 TYPE_3__ VAR_11 ;
 int FUNC_9 (int * const,int ,int ,int,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(Pager *VAR_12){
  int VAR_13 = VAR_5;
  sqlite3_vfs * const VAR_14 = VAR_12->pVfs;

  FUNC_1( VAR_12->eState==VAR_3 );
  FUNC_1( FUNC_2(VAR_12) );
  FUNC_1( VAR_12->pInJournal==0 );




  if( FUNC_0(VAR_12->errCode) ) return VAR_12->errCode;

  if( !FUNC_6(VAR_12) && VAR_12->journalMode!=VAR_1 ){
    VAR_12->pInJournal = FUNC_7(VAR_12->dbSize);
    if( VAR_12->pInJournal==0 ){
      return VAR_4;
    }


    if( !FUNC_4(VAR_12->jfd) ){
      if( VAR_12->journalMode==VAR_0 ){
        FUNC_10(VAR_12->jfd);
      }else{
        int VAR_15 = VAR_9|VAR_6;
        int VAR_16;

        if( VAR_12->tempFile ){
          VAR_15 |= (VAR_7|VAR_10);
          VAR_16 = VAR_11.nStmtSpill;
        }else{
          VAR_15 |= VAR_8;
          VAR_16 = FUNC_5(VAR_12);
        }



        VAR_13 = FUNC_3(VAR_12);
        if( VAR_13==VAR_5 ){
          VAR_13 = FUNC_9 (
              VAR_14, VAR_12->zJournal, VAR_12->jfd, VAR_15, VAR_16
          );
        }
      }
      FUNC_1( VAR_13!=VAR_5 || FUNC_4(VAR_12->jfd) );
    }





    if( VAR_13==VAR_5 ){

      VAR_12->nRec = 0;
      VAR_12->journalOff = 0;
      VAR_12->setMaster = 0;
      VAR_12->journalHdr = 0;
      VAR_13 = FUNC_11(VAR_12);
    }
  }

  if( VAR_13!=VAR_5 ){
    FUNC_8(VAR_12->pInJournal);
    VAR_12->pInJournal = 0;
  }else{
    FUNC_1( VAR_12->eState==VAR_3 );
    VAR_12->eState = VAR_2;
  }

  return VAR_13;
}
