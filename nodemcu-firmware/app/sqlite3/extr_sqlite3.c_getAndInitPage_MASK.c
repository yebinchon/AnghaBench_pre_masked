
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {size_t iPage; int curPagerFlags; scalar_t__ curIntKey; TYPE_1__** apPage; } ;
struct TYPE_12__ {int pPager; int mutex; } ;
struct TYPE_11__ {scalar_t__ isInit; scalar_t__ aData; int nCell; scalar_t__ intKey; int pgno; } ;
typedef int Pgno ;
typedef TYPE_1__ MemPage ;
typedef int DbPage ;
typedef TYPE_2__ BtShared ;
typedef TYPE_3__ BtCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int **,int) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(
  BtShared *VAR_3,
  Pgno VAR_4,
  MemPage **VAR_5,
  BtCursor *VAR_6,
  int VAR_7
){
  int VAR_8;
  DbPage *VAR_9;
  FUNC_0( FUNC_8(VAR_3->mutex) );
  FUNC_0( VAR_6==0 || VAR_5==&VAR_6->apPage[VAR_6->iPage] );
  FUNC_0( VAR_6==0 || VAR_7==VAR_6->curPagerFlags );
  FUNC_0( VAR_6==0 || VAR_6->iPage>0 );

  if( VAR_4>FUNC_3(VAR_3) ){
    VAR_8 = VAR_1;
    goto getAndInitPage_error;
  }
  VAR_8 = FUNC_5(VAR_3->pPager, VAR_4, (DbPage**)&VAR_9, VAR_7);
  if( VAR_8 ){
    goto getAndInitPage_error;
  }
  *VAR_5 = (MemPage*)FUNC_7(VAR_9);
  if( (*VAR_5)->isInit==0 ){
    FUNC_2(VAR_9, VAR_4, VAR_3);
    VAR_8 = FUNC_1(*VAR_5);
    if( VAR_8!=VAR_2 ){
      FUNC_4(*VAR_5);
      goto getAndInitPage_error;
    }
  }
  FUNC_0( (*VAR_5)->pgno==VAR_4 );
  FUNC_0( (*VAR_5)->aData==FUNC_6(VAR_9) );



  if( VAR_6 && ((*VAR_5)->nCell<1 || (*VAR_5)->intKey!=VAR_6->curIntKey) ){
    VAR_8 = VAR_1;
    FUNC_4(*VAR_5);
    goto getAndInitPage_error;
  }
  return VAR_2;

getAndInitPage_error:
  if( VAR_6 ) VAR_6->iPage--;
  FUNC_9( VAR_4==0 );
  FUNC_0( VAR_4!=0 || VAR_8==VAR_0 );
  return VAR_8;
}
