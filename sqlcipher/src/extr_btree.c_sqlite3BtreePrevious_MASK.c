
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ nSize; } ;
struct TYPE_9__ {int curFlags; scalar_t__ eState; scalar_t__ ix; TYPE_1__* pPage; TYPE_2__ info; } ;
struct TYPE_7__ {scalar_t__ leaf; } ;
typedef TYPE_3__ BtCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

int FUNC_4(BtCursor *VAR_5, int VAR_6){
  FUNC_1( FUNC_3(VAR_5) );
  FUNC_1( VAR_6==0 || VAR_6==1 );
  FUNC_0( VAR_6 );
  VAR_5->curFlags &= ~(VAR_0|VAR_2|VAR_1);
  VAR_5->info.nSize = 0;
  if( VAR_5->eState!=VAR_3
   || VAR_5->ix==0
   || VAR_5->pPage->leaf==0
  ){
    return FUNC_2(VAR_5);
  }
  VAR_5->ix--;
  return VAR_4;
}
