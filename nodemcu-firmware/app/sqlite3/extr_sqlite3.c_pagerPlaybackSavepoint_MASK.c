
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ i64 ;
struct TYPE_12__ {scalar_t__ eState; scalar_t__ journalOff; scalar_t__ journalHdr; int pageSize; scalar_t__ nSubRec; int pWal; int tempFile; int changeCountDone; int dbOrigSize; int dbSize; } ;
struct TYPE_11__ {scalar_t__ iHdrOffset; scalar_t__ iOffset; scalar_t__ iSubRec; int aWalData; int nOrig; } ;
typedef TYPE_1__ PagerSavepoint ;
typedef TYPE_2__ Pager ;
typedef int Bitvec ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,scalar_t__*,int *,int,int) ;
 int FUNC_6 (TYPE_2__*,int ,scalar_t__,scalar_t__*,scalar_t__*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(Pager *VAR_5, PagerSavepoint *VAR_6){
  i64 VAR_7;
  i64 VAR_8;
  int VAR_9 = VAR_4;
  Bitvec *VAR_10 = 0;

  FUNC_2( VAR_5->eState!=VAR_0 );
  FUNC_2( VAR_5->eState>=VAR_1 );


  if( VAR_6 ){
    VAR_10 = FUNC_7(VAR_6->nOrig);
    if( !VAR_10 ){
      return VAR_3;
    }
  }




  VAR_5->dbSize = VAR_6 ? VAR_6->nOrig : VAR_5->dbOrigSize;
  VAR_5->changeCountDone = VAR_5->tempFile;

  if( !VAR_6 && FUNC_4(VAR_5) ){
    return FUNC_3(VAR_5);
  }






  VAR_7 = VAR_5->journalOff;
  FUNC_2( FUNC_4(VAR_5)==0 || VAR_7==0 );
  if( VAR_6 && !FUNC_4(VAR_5) ){
    VAR_8 = VAR_6->iHdrOffset ? VAR_6->iHdrOffset : VAR_7;
    VAR_5->journalOff = VAR_6->iOffset;
    while( VAR_9==VAR_4 && VAR_5->journalOff<VAR_8 ){
      VAR_9 = FUNC_5(VAR_5, &VAR_5->journalOff, VAR_10, 1, 1);
    }
    FUNC_2( VAR_9!=VAR_2 );
  }else{
    VAR_5->journalOff = 0;
  }






  while( VAR_9==VAR_4 && VAR_5->journalOff<VAR_7 ){
    u32 VAR_11;
    u32 VAR_12 = 0;
    u32 VAR_13;
    VAR_9 = FUNC_6(VAR_5, 0, VAR_7, &VAR_12, &VAR_13);
    FUNC_2( VAR_9!=VAR_2 );






    if( VAR_12==0
     && VAR_5->journalHdr+FUNC_0(VAR_5)==VAR_5->journalOff
    ){
      VAR_12 = (u32)((VAR_7 - VAR_5->journalOff)/FUNC_1(VAR_5));
    }
    for(VAR_11=0; VAR_9==VAR_4 && VAR_11<VAR_12 && VAR_5->journalOff<VAR_7; VAR_11++){
      VAR_9 = FUNC_5(VAR_5, &VAR_5->journalOff, VAR_10, 1, 1);
    }
    FUNC_2( VAR_9!=VAR_2 );
  }
  FUNC_2( VAR_9!=VAR_4 || VAR_5->journalOff>=VAR_7 );





  if( VAR_6 ){
    u32 VAR_14;
    i64 VAR_15 = (i64)VAR_6->iSubRec*(4+VAR_5->pageSize);

    if( FUNC_4(VAR_5) ){
      VAR_9 = FUNC_9(VAR_5->pWal, VAR_6->aWalData);
    }
    for(VAR_14=VAR_6->iSubRec; VAR_9==VAR_4 && VAR_14<VAR_5->nSubRec; VAR_14++){
      FUNC_2( VAR_15==(i64)VAR_14*(4+VAR_5->pageSize) );
      VAR_9 = FUNC_5(VAR_5, &VAR_15, VAR_10, 0, 1);
    }
    FUNC_2( VAR_9!=VAR_2 );
  }

  FUNC_8(VAR_10);
  if( VAR_9==VAR_4 ){
    VAR_5->journalOff = VAR_7;
  }

  return VAR_9;
}
