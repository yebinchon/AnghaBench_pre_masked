
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int i64 ;
struct TYPE_8__ {int pageSize; scalar_t__ eState; int nRead; int dbFileVers; int fd; int pWal; } ;
struct TYPE_7__ {int pgno; scalar_t__ pData; TYPE_2__* pPager; } ;
typedef int Pgno ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ Pager ;


 int FUNC_0 (TYPE_2__*,scalar_t__,int,int,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,scalar_t__,int,int) ;
 int FUNC_11 (int ,int ,int,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_12(PgHdr *VAR_6, u32 VAR_7){
  Pager *VAR_8 = VAR_6->pPager;
  Pgno VAR_9 = VAR_6->pgno;
  int VAR_10 = VAR_4;
  int VAR_11 = VAR_8->pageSize;

  FUNC_5( VAR_8->eState>=VAR_1 && !VAR_0 );
  FUNC_5( FUNC_6(VAR_8->fd) );


  if( VAR_7 ){

    VAR_10 = FUNC_11(VAR_8->pWal, VAR_7, VAR_11, VAR_6->pData);
  }else

  {
    i64 VAR_12 = (VAR_9-1)*(i64)VAR_8->pageSize;
    VAR_10 = FUNC_10(VAR_8->fd, VAR_6->pData, VAR_11, VAR_12);
    if( VAR_10==VAR_2 ){
      VAR_10 = VAR_4;
    }
  }

  if( VAR_9==1 ){
    if( VAR_10 ){
      FUNC_8(VAR_8->dbFileVers, 0xff, sizeof(VAR_8->dbFileVers));
    }else{
      u8 *VAR_13 = &((u8*)VAR_6->pData)[24];
      FUNC_7(&VAR_8->dbFileVers, VAR_13, sizeof(VAR_8->dbFileVers));
    }
  }
  FUNC_0(VAR_8, VAR_6->pData, VAR_9, 3, VAR_10 = VAR_3);

  FUNC_4(VAR_5);
  FUNC_4(VAR_8->nRead);
  FUNC_1(("PGIN %p %d\n", VAR_8, VAR_9));
  FUNC_3(("FETCH %d page %d hash(%08x)\n",
               FUNC_2(VAR_8), VAR_9, FUNC_9(VAR_6)));

  return VAR_10;
}
