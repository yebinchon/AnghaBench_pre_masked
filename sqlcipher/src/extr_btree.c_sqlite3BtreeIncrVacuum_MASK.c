
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ inTransaction; int nPage; TYPE_1__* pPage1; int autoVacuum; } ;
struct TYPE_13__ {scalar_t__ inTrans; TYPE_3__* pBt; } ;
struct TYPE_12__ {int * aData; int pDbPage; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_2__ Btree ;
typedef TYPE_3__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;

int FUNC_11(Btree *VAR_4){
  int VAR_5;
  BtShared *VAR_6 = VAR_4->pBt;

  FUNC_8(VAR_4);
  FUNC_0( VAR_6->inTransaction==VAR_3 && VAR_4->inTrans==VAR_3 );
  if( !VAR_6->autoVacuum ){
    VAR_5 = VAR_1;
  }else{
    Pgno VAR_7 = FUNC_1(VAR_6);
    Pgno VAR_8 = FUNC_3(&VAR_6->pPage1->aData[36]);
    Pgno VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_8);

    if( VAR_7<VAR_9 ){
      VAR_5 = VAR_0;
    }else if( VAR_8>0 ){
      VAR_5 = FUNC_7(VAR_6, 0, 0);
      if( VAR_5==VAR_2 ){
        FUNC_5(VAR_6);
        VAR_5 = FUNC_4(VAR_6, VAR_9, VAR_7, 0);
      }
      if( VAR_5==VAR_2 ){
        VAR_5 = FUNC_10(VAR_6->pPage1->pDbPage);
        FUNC_6(&VAR_6->pPage1->aData[28], VAR_6->nPage);
      }
    }else{
      VAR_5 = VAR_1;
    }
  }
  FUNC_9(VAR_4);
  return VAR_5;
}
