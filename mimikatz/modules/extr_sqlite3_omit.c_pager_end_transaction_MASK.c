
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
 int VAR_15 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int VAR_16 ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 TYPE_1__* FUNC_16 (TYPE_2__*,int) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int ,scalar_t__) ;
 int FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ,int ) ;
 int FUNC_25 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_26(Pager *VAR_17, int VAR_18, int VAR_19){
  int VAR_20 = VAR_15;
  int VAR_21 = VAR_15;
  FUNC_0( FUNC_1(VAR_17) );
  FUNC_0( VAR_17->eState!=VAR_2 );
  if( VAR_17->eState<VAR_9 && VAR_17->eLock<VAR_10 ){
    return VAR_15;
  }

  FUNC_7(VAR_17);
  FUNC_0( FUNC_2(VAR_17->jfd) || VAR_17->pInJournal==0
      || (FUNC_12(VAR_17->fd)&VAR_13)
  );
  if( FUNC_2(VAR_17->jfd) ){
    FUNC_0( !FUNC_5(VAR_17) );


    if( FUNC_9(VAR_17->jfd) ){

      FUNC_10(VAR_17->jfd);
    }else if( VAR_17->journalMode==VAR_6 ){
      if( VAR_17->journalOff==0 ){
        VAR_20 = VAR_15;
      }else{
        VAR_20 = FUNC_15(VAR_17->jfd, 0);
        if( VAR_20==VAR_15 && VAR_17->fullSync ){





          VAR_20 = FUNC_14(VAR_17->jfd, VAR_17->syncFlags);
        }
      }
      VAR_17->journalOff = 0;
    }else if( VAR_17->journalMode==VAR_5
      || (VAR_17->exclusiveMode && VAR_17->journalMode!=VAR_7)
    ){
      VAR_20 = FUNC_25(VAR_17, VAR_18||VAR_17->tempFile);
      VAR_17->journalOff = 0;
    }else{





      int VAR_22 = !VAR_17->tempFile;
      FUNC_0( FUNC_9(VAR_17->jfd)==0 );
      FUNC_0( VAR_17->journalMode==VAR_3
           || VAR_17->journalMode==VAR_4
           || VAR_17->journalMode==VAR_7
      );
      FUNC_10(VAR_17->jfd);
      if( VAR_22 ){
        VAR_20 = FUNC_11(VAR_17->pVfs, VAR_17->zJournal, VAR_17->extraSync);
      }
    }
  }
  FUNC_8(VAR_17->pInJournal);
  VAR_17->pInJournal = 0;
  VAR_17->nRec = 0;
  if( VAR_20==VAR_15 ){
    if( VAR_1 || FUNC_3(VAR_17, VAR_19) ){
      FUNC_18(VAR_17->pPCache);
    }else{
      FUNC_19(VAR_17->pPCache);
    }
    FUNC_22(VAR_17->pPCache, VAR_17->dbSize);
  }

  if( FUNC_5(VAR_17) ){




    VAR_21 = FUNC_23(VAR_17->pWal);
    FUNC_0( VAR_21==VAR_15 );
  }else if( VAR_20==VAR_15 && VAR_19 && VAR_17->dbFileSize>VAR_17->dbSize ){






    FUNC_0( VAR_17->eLock==VAR_0 );
    VAR_20 = FUNC_6(VAR_17, VAR_17->dbSize);
  }

  if( VAR_20==VAR_15 && VAR_19 ){
    VAR_20 = FUNC_13(VAR_17->fd, VAR_12, 0);
    if( VAR_20==VAR_14 ) VAR_20 = VAR_15;
  }

  if( !VAR_17->exclusiveMode
   && (!FUNC_5(VAR_17) || FUNC_24(VAR_17->pWal, 0))
  ){
    VAR_21 = FUNC_4(VAR_17, VAR_11);
    VAR_17->changeCountDone = 0;
  }
  VAR_17->eState = VAR_8;
  VAR_17->setMaster = 0;

  return (VAR_20==VAR_15?VAR_21:VAR_20);
}
