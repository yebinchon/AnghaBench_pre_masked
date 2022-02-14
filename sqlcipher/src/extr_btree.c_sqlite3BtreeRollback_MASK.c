
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_18__ {scalar_t__ inTransaction; int nPage; int pPager; } ;
struct TYPE_17__ {scalar_t__ inTrans; TYPE_3__* pBt; } ;
struct TYPE_16__ {scalar_t__ aData; } ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ Btree ;
typedef TYPE_3__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,int,TYPE_1__**,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_3__*,int ,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int,int) ;
 int FUNC_12 (int ,int*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int) ;

int FUNC_15(Btree *VAR_4, int VAR_5, int VAR_6){
  int VAR_7;
  BtShared *VAR_8 = VAR_4->pBt;
  MemPage *VAR_9;

  FUNC_0( VAR_6==1 || VAR_6==0 );
  FUNC_0( VAR_5==VAR_0 || VAR_5==VAR_1 );
  FUNC_9(VAR_4);
  if( VAR_5==VAR_1 ){
    VAR_7 = VAR_5 = FUNC_8(VAR_8, 0, 0);
    if( VAR_7 ) VAR_6 = 0;
  }else{
    VAR_7 = VAR_1;
  }
  if( VAR_5 ){
    int VAR_10 = FUNC_11(VAR_4, VAR_5, VAR_6);
    FUNC_0( VAR_7==VAR_1 || (VAR_6==0 && VAR_10==VAR_1) );
    if( VAR_10!=VAR_1 ) VAR_7 = VAR_10;
  }
  FUNC_4(VAR_4);

  if( VAR_4->inTrans==VAR_3 ){
    int VAR_11;

    FUNC_0( VAR_3==VAR_8->inTransaction );
    VAR_11 = FUNC_13(VAR_8->pPager);
    if( VAR_11!=VAR_1 ){
      VAR_7 = VAR_11;
    }




    if( FUNC_3(VAR_8, 1, &VAR_9, 0)==VAR_1 ){
      int VAR_12 = FUNC_6(28+(u8*)VAR_9->aData);
      FUNC_14( VAR_12==0 );
      if( VAR_12==0 ) FUNC_12(VAR_8->pPager, &VAR_12);
      FUNC_14( VAR_8->nPage!=VAR_12 );
      VAR_8->nPage = VAR_12;
      FUNC_7(VAR_9);
    }
    FUNC_0( FUNC_5(VAR_8, 1)==0 );
    VAR_8->inTransaction = VAR_2;
    FUNC_1(VAR_8);
  }

  FUNC_2(VAR_4);
  FUNC_10(VAR_4);
  return VAR_7;
}
