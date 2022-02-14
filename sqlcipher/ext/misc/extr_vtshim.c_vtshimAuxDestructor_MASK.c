
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pAllVtab; struct TYPE_3__* pMod; struct TYPE_3__* zName; int (* xChildDestroy ) (int ) ;int pChildAux; int bDisposed; } ;
typedef TYPE_1__ vtshim_aux ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0){
  vtshim_aux *VAR_1 = (vtshim_aux*)VAR_0;
  FUNC_0( VAR_1->pAllVtab==0 );
  if( !VAR_1->bDisposed && VAR_1->xChildDestroy ){
    VAR_1->xChildDestroy(VAR_1->pChildAux);
    VAR_1->xChildDestroy = 0;
  }
  FUNC_1(VAR_1->zName);
  FUNC_1(VAR_1->pMod);
  FUNC_1(VAR_1);
}
