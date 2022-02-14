
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int btsFlags; scalar_t__ nPage; TYPE_1__* pPage1; int pPager; } ;
struct TYPE_10__ {scalar_t__ inTrans; TYPE_3__* pBt; } ;
struct TYPE_9__ {scalar_t__ aData; } ;
typedef TYPE_2__ Btree ;
typedef TYPE_3__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int,int) ;

int FUNC_7(Btree *VAR_5, int VAR_6, int VAR_7){
  int VAR_8 = VAR_3;
  if( VAR_5 && VAR_5->inTrans==VAR_4 ){
    BtShared *VAR_9 = VAR_5->pBt;
    FUNC_0( VAR_6==VAR_1 || VAR_6==VAR_2 );
    FUNC_0( VAR_7>=0 || (VAR_7==-1 && VAR_6==VAR_2) );
    FUNC_4(VAR_5);
    if( VAR_6==VAR_2 ){
      VAR_8 = FUNC_3(VAR_9, 0, 0);
    }
    if( VAR_8==VAR_3 ){
      VAR_8 = FUNC_6(VAR_9->pPager, VAR_6, VAR_7);
    }
    if( VAR_8==VAR_3 ){
      if( VAR_7<0 && (VAR_9->btsFlags & VAR_0)!=0 ){
        VAR_9->nPage = 0;
      }
      VAR_8 = FUNC_2(VAR_9);
      VAR_9->nPage = FUNC_1(28 + VAR_9->pPage1->aData);




      FUNC_0( VAR_9->nPage>0 );
    }
    FUNC_5(VAR_5);
  }
  return VAR_8;
}
