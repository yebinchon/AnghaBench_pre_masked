
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_3__ {scalar_t__ eState; scalar_t__ eLock; scalar_t__ tempFile; int pageSize; scalar_t__ mxPgno; int fd; int pWal; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ Pager ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(Pager *VAR_3, Pgno *VAR_4){
  Pgno VAR_5;







  FUNC_1( VAR_3->eState==VAR_0 );
  FUNC_1( VAR_3->eLock>=VAR_1 );
  FUNC_1( FUNC_2(VAR_3->fd) );
  FUNC_1( VAR_3->tempFile==0 );
  VAR_5 = FUNC_4(VAR_3->pWal);






  if( VAR_5==0 && FUNC_0(FUNC_2(VAR_3->fd)) ){
    i64 VAR_6 = 0;
    int VAR_7 = FUNC_3(VAR_3->fd, &VAR_6);
    if( VAR_7!=VAR_2 ){
      return VAR_7;
    }
    VAR_5 = (Pgno)((VAR_6+VAR_3->pageSize-1) / VAR_3->pageSize);
  }





  if( VAR_5>VAR_3->mxPgno ){
    VAR_3->mxPgno = (Pgno)VAR_5;
  }

  *VAR_4 = VAR_5;
  return VAR_2;
}
