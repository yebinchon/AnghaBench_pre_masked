
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ nSize; } ;
struct TYPE_10__ {int curFlags; scalar_t__ eState; scalar_t__ ix; TYPE_2__* pPage; TYPE_1__ info; } ;
struct TYPE_9__ {scalar_t__ nCell; scalar_t__ leaf; } ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ BtCursor ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

int FUNC_5(BtCursor *VAR_4, int VAR_5){
  MemPage *VAR_6;
  FUNC_0( VAR_5 );
  FUNC_1( FUNC_3(VAR_4) );
  FUNC_1( VAR_5==0 || VAR_5==1 );
  VAR_4->info.nSize = 0;
  VAR_4->curFlags &= ~(VAR_0|VAR_1);
  if( VAR_4->eState!=VAR_2 ) return FUNC_2(VAR_4);
  VAR_6 = VAR_4->pPage;
  if( (++VAR_4->ix)>=VAR_6->nCell ){
    VAR_4->ix--;
    return FUNC_2(VAR_4);
  }
  if( VAR_6->leaf ){
    return VAR_3;
  }else{
    return FUNC_4(VAR_4);
  }
}
