
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ inTransaction; scalar_t__ nTransaction; int pPager; } ;
struct TYPE_9__ {scalar_t__ inTrans; int iDataVersion; TYPE_2__* pBt; } ;
typedef TYPE_1__ Btree ;
typedef TYPE_2__ BtShared ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;

int FUNC_7(Btree *VAR_4, int VAR_5){

  if( VAR_4->inTrans==VAR_1 ) return VAR_0;
  FUNC_4(VAR_4);
  FUNC_3(VAR_4);




  if( VAR_4->inTrans==VAR_3 ){
    int VAR_6;
    BtShared *VAR_7 = VAR_4->pBt;
    FUNC_0( VAR_7->inTransaction==VAR_3 );
    FUNC_0( VAR_7->nTransaction>0 );
    VAR_6 = FUNC_6(VAR_7->pPager);
    if( VAR_6!=VAR_0 && VAR_5==0 ){
      FUNC_5(VAR_4);
      return VAR_6;
    }
    VAR_4->iDataVersion--;
    VAR_7->inTransaction = VAR_2;
    FUNC_1(VAR_7);
  }

  FUNC_2(VAR_4);
  FUNC_5(VAR_4);
  return VAR_0;
}
