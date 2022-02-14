
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t nStack; int * aStack; int aPage; int * aPgno; int pgno; } ;
typedef TYPE_1__ GState ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(GState *VAR_0){
  if( VAR_0->nStack<=0 ) return;
  VAR_0->nStack--;
  FUNC_0(VAR_0->aStack[VAR_0->nStack]);
  VAR_0->pgno = VAR_0->aPgno[VAR_0->nStack-1];
  VAR_0->aPage = VAR_0->aStack[VAR_0->nStack-1];
}
