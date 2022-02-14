
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int journalMode; scalar_t__ tempFile; int eState; scalar_t__ eLock; int jfd; int zJournal; int pVfs; scalar_t__ exclusiveMode; int fd; } ;
typedef TYPE_1__ Pager ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;

int FUNC_8(Pager *VAR_13, int VAR_14){
  u8 VAR_15 = VAR_13->journalMode;


  FUNC_0( VAR_14==VAR_2
            || VAR_14==VAR_6
            || VAR_14==VAR_5
            || VAR_14==VAR_4
            || VAR_14==VAR_7
            || VAR_14==VAR_3 );





  FUNC_0( VAR_13->tempFile==0 || VAR_14!=VAR_7 );




  if( VAR_0 ){
    FUNC_0( VAR_15==VAR_3 || VAR_15==VAR_4 );
    if( VAR_14!=VAR_3 && VAR_14!=VAR_4 ){
      VAR_14 = VAR_15;
    }
  }

  if( VAR_14!=VAR_15 ){


    FUNC_0( VAR_13->eState!=VAR_1 );
    VAR_13->journalMode = (u8)VAR_14;





    FUNC_0( (VAR_6 & 5)==1 );
    FUNC_0( (VAR_5 & 5)==1 );
    FUNC_0( (VAR_2 & 5)==0 );
    FUNC_0( (VAR_3 & 5)==4 );
    FUNC_0( (VAR_4 & 5)==0 );
    FUNC_0( (VAR_7 & 5)==5 );

    FUNC_0( FUNC_1(VAR_13->fd) || VAR_13->exclusiveMode );
    if( !VAR_13->exclusiveMode && (VAR_15 & 5)==1 && (VAR_14 & 1)==0 ){
      FUNC_5(VAR_13->jfd);
      if( VAR_13->eLock>=VAR_10 ){
        FUNC_6(VAR_13->pVfs, VAR_13->zJournal, 0);
      }else{
        int VAR_16 = VAR_12;
        int VAR_17 = VAR_13->eState;
        FUNC_0( VAR_17==VAR_8 || VAR_17==VAR_9 );
        if( VAR_17==VAR_8 ){
          VAR_16 = FUNC_7(VAR_13);
        }
        if( VAR_13->eState==VAR_9 ){
          FUNC_0( VAR_16==VAR_12 );
          VAR_16 = FUNC_2(VAR_13, VAR_10);
        }
        if( VAR_16==VAR_12 ){
          FUNC_6(VAR_13->pVfs, VAR_13->zJournal, 0);
        }
        if( VAR_16==VAR_12 && VAR_17==VAR_9 ){
          FUNC_3(VAR_13, VAR_11);
        }else if( VAR_17==VAR_8 ){
          FUNC_4(VAR_13);
        }
        FUNC_0( VAR_17==VAR_13->eState );
      }
    }else if( VAR_14==VAR_4 ){
      FUNC_5(VAR_13->jfd);
    }
  }


  return (int)VAR_13->journalMode;
}
