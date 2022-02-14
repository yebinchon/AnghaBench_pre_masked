
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ eState; scalar_t__ eLock; scalar_t__ pInJournal; scalar_t__ journalMode; scalar_t__ journalOff; scalar_t__ dbSize; scalar_t__ dbFileSize; scalar_t__ setMaster; scalar_t__ changeCountDone; int pWal; scalar_t__ exclusiveMode; int fd; int pPCache; scalar_t__ nRec; int extraSync; int zJournal; int pVfs; int jfd; scalar_t__ tempFile; int syncFlags; scalar_t__ fullSync; } ;
struct TYPE_14__ {scalar_t__ pageHash; } ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ Pager ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int VAR_15 ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 TYPE_1__* FUNC_15 (TYPE_2__*,int) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (int ,scalar_t__) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ,int ) ;
 int FUNC_24 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_25(Pager *VAR_16, int VAR_17, int VAR_18){
  int VAR_19 = VAR_14;
  int VAR_20 = VAR_14;
  FUNC_0( FUNC_1(VAR_16) );
  FUNC_0( VAR_16->eState!=VAR_2 );
  if( VAR_16->eState<VAR_9 && VAR_16->eLock<VAR_10 ){
    return VAR_14;
  }

  FUNC_7(VAR_16);
  FUNC_0( FUNC_2(VAR_16->jfd) || VAR_16->pInJournal==0 );
  if( FUNC_2(VAR_16->jfd) ){
    FUNC_0( !FUNC_5(VAR_16) );


    if( FUNC_9(VAR_16->jfd) ){

      FUNC_10(VAR_16->jfd);
    }else if( VAR_16->journalMode==VAR_6 ){
      if( VAR_16->journalOff==0 ){
        VAR_19 = VAR_14;
      }else{
        VAR_19 = FUNC_14(VAR_16->jfd, 0);
        if( VAR_19==VAR_14 && VAR_16->fullSync ){





          VAR_19 = FUNC_13(VAR_16->jfd, VAR_16->syncFlags);
        }
      }
      VAR_16->journalOff = 0;
    }else if( VAR_16->journalMode==VAR_5
      || (VAR_16->exclusiveMode && VAR_16->journalMode!=VAR_7)
    ){
      VAR_19 = FUNC_24(VAR_16, VAR_17||VAR_16->tempFile);
      VAR_16->journalOff = 0;
    }else{





      int VAR_21 = !VAR_16->tempFile;
      FUNC_0( FUNC_9(VAR_16->jfd)==0 );
      FUNC_0( VAR_16->journalMode==VAR_3
           || VAR_16->journalMode==VAR_4
           || VAR_16->journalMode==VAR_7
      );
      FUNC_10(VAR_16->jfd);
      if( VAR_21 ){
        VAR_19 = FUNC_11(VAR_16->pVfs, VAR_16->zJournal, VAR_16->extraSync);
      }
    }
  }
  FUNC_8(VAR_16->pInJournal);
  VAR_16->pInJournal = 0;
  VAR_16->nRec = 0;
  if( VAR_19==VAR_14 ){
    if( VAR_1 || FUNC_3(VAR_16, VAR_18) ){
      FUNC_17(VAR_16->pPCache);
    }else{
      FUNC_18(VAR_16->pPCache);
    }
    FUNC_21(VAR_16->pPCache, VAR_16->dbSize);
  }

  if( FUNC_5(VAR_16) ){




    VAR_20 = FUNC_22(VAR_16->pWal);
    FUNC_0( VAR_20==VAR_14 );
  }else if( VAR_19==VAR_14 && VAR_18 && VAR_16->dbFileSize>VAR_16->dbSize ){






    FUNC_0( VAR_16->eLock==VAR_0 );
    VAR_19 = FUNC_6(VAR_16, VAR_16->dbSize);
  }

  if( VAR_19==VAR_14 && VAR_18 && FUNC_2(VAR_16->fd) ){
    VAR_19 = FUNC_12(VAR_16->fd, VAR_12, 0);
    if( VAR_19==VAR_13 ) VAR_19 = VAR_14;
  }

  if( !VAR_16->exclusiveMode
   && (!FUNC_5(VAR_16) || FUNC_23(VAR_16->pWal, 0))
  ){
    VAR_20 = FUNC_4(VAR_16, VAR_11);
    VAR_16->changeCountDone = 0;
  }
  VAR_16->eState = VAR_8;
  VAR_16->setMaster = 0;

  return (VAR_19==VAR_14?VAR_20:VAR_19);
}
