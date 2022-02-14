
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ eState; int journalMode; int errCode; scalar_t__ setMaster; scalar_t__ journalHdr; scalar_t__ journalOff; scalar_t__ tempFile; scalar_t__ changeCountDone; int eLock; int jfd; int fd; int exclusiveMode; int pWal; scalar_t__ pInJournal; } ;
typedef TYPE_1__ Pager ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(Pager *VAR_14){

  FUNC_0( VAR_14->eState==VAR_10
       || VAR_14->eState==VAR_9
       || VAR_14->eState==VAR_2
  );

  FUNC_6(VAR_14->pInJournal);
  VAR_14->pInJournal = 0;
  FUNC_5(VAR_14);

  if( FUNC_3(VAR_14) ){
    FUNC_0( !FUNC_1(VAR_14->jfd) );
    FUNC_9(VAR_14->pWal);
    VAR_14->eState = VAR_9;
  }else if( !VAR_14->exclusiveMode ){
    int VAR_15;
    int VAR_16 = FUNC_1(VAR_14->fd)?FUNC_8(VAR_14->fd):0;






    FUNC_0( (VAR_4 & 5)!=1 );
    FUNC_0( (VAR_5 & 5)!=1 );
    FUNC_0( (VAR_8 & 5)!=1 );
    FUNC_0( (VAR_3 & 5)!=1 );
    FUNC_0( (VAR_7 & 5)==1 );
    FUNC_0( (VAR_6 & 5)==1 );
    if( 0==(VAR_16 & VAR_11)
     || 1!=(VAR_14->journalMode & 5)
    ){
      FUNC_7(VAR_14->jfd);
    }






    VAR_15 = FUNC_2(VAR_14, VAR_1);
    if( VAR_15!=VAR_12 && VAR_14->eState==VAR_2 ){
      VAR_14->eLock = VAR_13;
    }





    FUNC_0( VAR_14->errCode || VAR_14->eState!=VAR_2 );
    VAR_14->changeCountDone = 0;
    VAR_14->eState = VAR_9;
  }






  if( VAR_14->errCode ){
    FUNC_0( !VAR_0 );
    FUNC_4(VAR_14);
    VAR_14->changeCountDone = VAR_14->tempFile;
    VAR_14->eState = VAR_9;
    VAR_14->errCode = VAR_12;
  }

  VAR_14->journalOff = 0;
  VAR_14->journalHdr = 0;
  VAR_14->setMaster = 0;
}
