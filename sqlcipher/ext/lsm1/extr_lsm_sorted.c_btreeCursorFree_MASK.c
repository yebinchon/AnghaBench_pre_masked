
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lsm_env ;
struct TYPE_4__ {int iPg; struct TYPE_4__* aPg; int blob; int pPage; int pFS; } ;
typedef TYPE_1__ BtreeCursor ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(BtreeCursor *VAR_0){
  if( VAR_0 ){
    int VAR_1;
    lsm_env *VAR_2 = FUNC_1(VAR_0->pFS);
    for(VAR_1=0; VAR_1<=VAR_0->iPg; VAR_1++){
      FUNC_2(VAR_0->aPg[VAR_1].pPage);
    }
    FUNC_3(&VAR_0->blob);
    FUNC_0(VAR_2, VAR_0->aPg);
    FUNC_0(VAR_2, VAR_0);
  }
}
