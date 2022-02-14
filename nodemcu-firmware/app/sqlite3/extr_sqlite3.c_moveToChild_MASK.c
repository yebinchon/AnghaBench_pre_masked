
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ nSize; } ;
struct TYPE_7__ {scalar_t__ eState; int iPage; int curFlags; int curPagerFlags; int * apPage; scalar_t__ ix; scalar_t__* aiIdx; TYPE_1__ info; int * pBt; } ;
typedef int BtShared ;
typedef TYPE_2__ BtCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ,int *,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(BtCursor *VAR_5, u32 VAR_6){
  BtShared *VAR_7 = VAR_5->pBt;

  FUNC_0( FUNC_1(VAR_5) );
  FUNC_0( VAR_5->eState==VAR_3 );
  FUNC_0( VAR_5->iPage<VAR_2 );
  FUNC_0( VAR_5->iPage>=0 );
  if( VAR_5->iPage>=(VAR_2-1) ){
    return VAR_4;
  }
  VAR_5->info.nSize = 0;
  VAR_5->curFlags &= ~(VAR_0|VAR_1);
  VAR_5->aiIdx[VAR_5->iPage++] = VAR_5->ix;
  VAR_5->ix = 0;
  return FUNC_2(VAR_7, VAR_6, &VAR_5->apPage[VAR_5->iPage],
                        VAR_5, VAR_5->curPagerFlags);
}
