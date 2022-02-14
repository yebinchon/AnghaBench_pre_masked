
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int i64 ;
struct TYPE_9__ {scalar_t__ eState; scalar_t__ xCodec; int hasHeldSharedLock; int errCode; int pageSize; int fd; scalar_t__ tempFile; int pWal; } ;
typedef int Pgno ;
typedef int PgHdr ;
typedef TYPE_1__ Pager ;
typedef int DbPage ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int **,int) ;
 int FUNC_4 (TYPE_1__*,int,void*,int **) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int,int,void**) ;
 int FUNC_7 (int ,int,void*) ;
 int * FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (int ,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_10(
  Pager *VAR_4,
  Pgno VAR_5,
  DbPage **VAR_6,
  int VAR_7
){
  int VAR_8 = VAR_3;
  PgHdr *VAR_9 = 0;
  u32 VAR_10 = 0;





  const int VAR_11 = (VAR_5>1
   && (VAR_4->eState==VAR_1 || (VAR_7 & VAR_0))
  );

  FUNC_1( FUNC_0(VAR_4) );
  if( VAR_5<=1 && VAR_5==0 ){
    return VAR_2;
  }
  FUNC_1( VAR_4->eState>=VAR_1 );
  FUNC_1( FUNC_2(VAR_4) );
  FUNC_1( VAR_4->hasHeldSharedLock==1 );
  FUNC_1( VAR_4->errCode==VAR_3 );

  if( VAR_11 && FUNC_5(VAR_4) ){
    VAR_8 = FUNC_9(VAR_4->pWal, VAR_5, &VAR_10);
    if( VAR_8!=VAR_3 ){
      *VAR_6 = 0;
      return VAR_8;
    }
  }
  if( VAR_11 && VAR_10==0 ){
    void *VAR_12 = 0;
    VAR_8 = FUNC_6(VAR_4->fd,
        (i64)(VAR_5-1) * VAR_4->pageSize, VAR_4->pageSize, &VAR_12
    );
    if( VAR_8==VAR_3 && VAR_12 ){
      if( VAR_4->eState>VAR_1 || VAR_4->tempFile ){
        VAR_9 = FUNC_8(VAR_4, VAR_5);
      }
      if( VAR_9==0 ){
        VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_12, &VAR_9);
     }else{
        FUNC_7(VAR_4->fd, (i64)(VAR_5-1)*VAR_4->pageSize, VAR_12);
      }
      if( VAR_9 ){
        FUNC_1( VAR_8==VAR_3 );
        *VAR_6 = VAR_9;
        return VAR_3;
      }
    }
    if( VAR_8!=VAR_3 ){
      *VAR_6 = 0;
      return VAR_8;
    }
  }
  return FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7);
}
