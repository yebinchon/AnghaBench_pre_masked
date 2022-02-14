
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_16__ {scalar_t__ mxPathname; } ;
typedef TYPE_1__ sqlite3_vfs ;
typedef scalar_t__ i64 ;
struct TYPE_17__ {int pageSize; char* pTmpSpace; scalar_t__ journalOff; scalar_t__ journalHdr; scalar_t__ eState; int zJournal; TYPE_1__* pVfs; int jfd; int tempFile; int changeCountDone; int fd; int dbSize; } ;
typedef int Pgno ;
typedef TYPE_2__ Pager ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (TYPE_2__*,scalar_t__*,int ,int,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int,scalar_t__,int*,int *) ;
 int FUNC_10 (int ,char*,scalar_t__) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*,char*,int ,int*) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,scalar_t__*) ;
 int FUNC_15 (TYPE_2__*,int*,int) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 int FUNC_17 (int ,char*,int,int ) ;
 int FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(Pager *VAR_8, int VAR_9){
  sqlite3_vfs *VAR_10 = VAR_8->pVfs;
  i64 VAR_11;
  u32 VAR_12;
  u32 VAR_13;
  Pgno VAR_14 = 0;
  int VAR_15;
  int VAR_16 = 1;
  char *VAR_17 = 0;
  int VAR_18;
  int VAR_19 = 0;
  u32 VAR_20 = VAR_8->pageSize;




  FUNC_2( FUNC_3(VAR_8->jfd) );
  VAR_15 = FUNC_14(VAR_8->jfd, &VAR_11);
  if( VAR_15!=VAR_7 ){
    goto end_playback;
  }
  VAR_17 = VAR_8->pTmpSpace;
  VAR_15 = FUNC_10(VAR_8->jfd, VAR_17, VAR_8->pVfs->mxPathname+1);
  if( VAR_15==VAR_7 && VAR_17[0] ){
    VAR_15 = FUNC_12(VAR_10, VAR_17, VAR_2, &VAR_16);
  }
  VAR_17 = 0;
  if( VAR_15!=VAR_7 || !VAR_16 ){
    goto end_playback;
  }
  VAR_8->journalOff = 0;
  VAR_18 = VAR_9;





  while( 1 ){





    VAR_15 = FUNC_9(VAR_8, VAR_9, VAR_11, &VAR_12, &VAR_14);
    if( VAR_15!=VAR_7 ){
      if( VAR_15==VAR_3 ){
        VAR_15 = VAR_7;
      }
      goto end_playback;
    }






    if( VAR_12==0xffffffff ){
      FUNC_2( VAR_8->journalOff==FUNC_0(VAR_8) );
      VAR_12 = (int)((VAR_11 - FUNC_0(VAR_8))/FUNC_1(VAR_8));
    }
    if( VAR_12==0 && !VAR_9 &&
        VAR_8->journalHdr+FUNC_0(VAR_8)==VAR_8->journalOff ){
      VAR_12 = (int)((VAR_11 - VAR_8->journalOff) / FUNC_1(VAR_8));
    }




    if( VAR_8->journalOff==FUNC_0(VAR_8) ){
      VAR_15 = FUNC_8(VAR_8, VAR_14);
      if( VAR_15!=VAR_7 ){
        goto end_playback;
      }
      VAR_8->dbSize = VAR_14;
    }




    for(VAR_13=0; VAR_13<VAR_12; VAR_13++){
      if( VAR_18 ){
        FUNC_7(VAR_8);
        VAR_18 = 0;
      }
      VAR_15 = FUNC_6(VAR_8,&VAR_8->journalOff,0,1,0);
      if( VAR_15==VAR_7 ){
        VAR_19++;
      }else{
        if( VAR_15==VAR_3 ){
          VAR_8->journalOff = VAR_11;
          break;
        }else if( VAR_15==VAR_5 ){





          VAR_15 = VAR_7;
          goto end_playback;
        }else{





          goto end_playback;
        }
      }
    }
  }

  FUNC_2( 0 );

end_playback:
  if( VAR_15==VAR_7 ){
    VAR_15 = FUNC_15(VAR_8, &VAR_20, -1);
  }
  VAR_8->changeCountDone = VAR_8->tempFile;

  if( VAR_15==VAR_7 ){
    VAR_17 = VAR_8->pTmpSpace;
    VAR_15 = FUNC_10(VAR_8->jfd, VAR_17, VAR_8->pVfs->mxPathname+1);
    FUNC_18( VAR_15!=VAR_7 );
  }
  if( VAR_15==VAR_7
   && (VAR_8->eState>=VAR_1 || VAR_8->eState==VAR_0)
  ){
    VAR_15 = FUNC_16(VAR_8, 0);
  }
  if( VAR_15==VAR_7 ){
    VAR_15 = FUNC_5(VAR_8, VAR_17[0]!='\0', 0);
    FUNC_18( VAR_15!=VAR_7 );
  }
  if( VAR_15==VAR_7 && VAR_17[0] && VAR_16 ){



    VAR_15 = FUNC_4(VAR_8, VAR_17);
    FUNC_18( VAR_15!=VAR_7 );
  }
  if( VAR_9 && VAR_19 ){
    FUNC_17(VAR_6, "recovered %d pages from %s",
                VAR_19, VAR_8->zJournal);
  }





  FUNC_11(VAR_8);
  return VAR_15;
}
