
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ eState; size_t iPage; scalar_t__ ix; TYPE_1__** apPage; } ;
struct TYPE_7__ {scalar_t__ nCell; int leaf; } ;
typedef int Pgno ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ BtCursor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_5(BtCursor *VAR_2){
  Pgno VAR_3;
  int VAR_4 = VAR_1;
  MemPage *VAR_5;

  FUNC_0( FUNC_1(VAR_2) );
  FUNC_0( VAR_2->eState==VAR_0 );
  while( VAR_4==VAR_1 && !(VAR_5 = VAR_2->apPage[VAR_2->iPage])->leaf ){
    FUNC_0( VAR_2->ix<VAR_5->nCell );
    VAR_3 = FUNC_3(FUNC_2(VAR_5, VAR_2->ix));
    VAR_4 = FUNC_4(VAR_2, VAR_3);
  }
  return VAR_4;
}
