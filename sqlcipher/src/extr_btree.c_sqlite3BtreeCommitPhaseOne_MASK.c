
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pPager; int nPage; scalar_t__ bDoTruncate; scalar_t__ autoVacuum; } ;
struct TYPE_7__ {scalar_t__ inTrans; TYPE_2__* pBt; } ;
typedef TYPE_1__ Btree ;
typedef TYPE_2__ BtShared ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char const*,int ) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(Btree *VAR_2, const char *VAR_3){
  int VAR_4 = VAR_0;
  if( VAR_2->inTrans==VAR_1 ){
    BtShared *VAR_5 = VAR_2->pBt;
    FUNC_1(VAR_2);

    if( VAR_5->autoVacuum ){
      VAR_4 = FUNC_0(VAR_5);
      if( VAR_4!=VAR_0 ){
        FUNC_2(VAR_2);
        return VAR_4;
      }
    }
    if( VAR_5->bDoTruncate ){
      FUNC_4(VAR_5->pPager, VAR_5->nPage);
    }

    VAR_4 = FUNC_3(VAR_5->pPager, VAR_3, 0);
    FUNC_2(VAR_2);
  }
  return VAR_4;
}
