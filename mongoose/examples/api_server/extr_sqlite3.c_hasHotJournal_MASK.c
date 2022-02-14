
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int sqlite3_vfs ;
struct TYPE_6__ {int useJournal; scalar_t__ eState; int jfd; int zJournal; int exclusiveMode; int fd; int * pVfs; } ;
typedef scalar_t__ Pgno ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int * const,int ,int ,int*) ;
 int FUNC_8 (int ,int*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int * const,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int * const,int ,int ,int,int*) ;
 int FUNC_13 (int ,void*,int,int ) ;

__attribute__((used)) static int FUNC_14(Pager *VAR_10, int *VAR_11){
  sqlite3_vfs * const VAR_12 = VAR_10->pVfs;
  int VAR_13 = VAR_7;
  int VAR_14 = 1;
  int VAR_15 = !!FUNC_1(VAR_10->jfd);

  FUNC_0( VAR_10->useJournal );
  FUNC_0( FUNC_1(VAR_10->fd) );
  FUNC_0( VAR_10->eState==VAR_0 );

  FUNC_0( VAR_15==0 || ( FUNC_11(VAR_10->jfd) &
    VAR_5
  ));

  *VAR_11 = 0;
  if( !VAR_15 ){
    VAR_13 = FUNC_7(VAR_12, VAR_10->zJournal, VAR_3, &VAR_14);
  }
  if( VAR_13==VAR_7 && VAR_14 ){
    int VAR_16 = 0;
    VAR_13 = FUNC_8(VAR_10->fd, &VAR_16);
    if( VAR_13==VAR_7 && !VAR_16 ){
      Pgno VAR_17;







      VAR_13 = FUNC_3(VAR_10, &VAR_17);
      if( VAR_13==VAR_7 ){
        if( VAR_17==0 ){
          FUNC_5();
          if( FUNC_2(VAR_10, VAR_1)==VAR_7 ){
            FUNC_10(VAR_12, VAR_10->zJournal, 0);
            if( !VAR_10->exclusiveMode ) FUNC_4(VAR_10, VAR_2);
          }
          FUNC_6();
        }else{






          if( !VAR_15 ){
            int VAR_18 = VAR_9|VAR_8;
            VAR_13 = FUNC_12(VAR_12, VAR_10->zJournal, VAR_10->jfd, VAR_18, &VAR_18);
          }
          if( VAR_13==VAR_7 ){
            u8 VAR_19 = 0;
            VAR_13 = FUNC_13(VAR_10->jfd, (void *)&VAR_19, 1, 0);
            if( VAR_13==VAR_6 ){
              VAR_13 = VAR_7;
            }
            if( !VAR_15 ){
              FUNC_9(VAR_10->jfd);
            }
            *VAR_11 = (VAR_19!=0);
          }else if( VAR_13==VAR_4 ){
            *VAR_11 = 1;
            VAR_13 = VAR_7;
          }
        }
      }
    }
  }

  return VAR_13;
}
