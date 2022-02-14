
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pChild; TYPE_3__* pAllCur; struct TYPE_6__* pNext; } ;
typedef TYPE_2__ vtshim_vtab ;
struct TYPE_7__ {int pChild; struct TYPE_7__* pNext; } ;
typedef TYPE_3__ vtshim_cursor ;
struct TYPE_8__ {int bDisposed; int (* xChildDestroy ) (int ) ;int pChildAux; TYPE_1__* pMod; TYPE_2__* pAllVtab; } ;
typedef TYPE_4__ vtshim_aux ;
struct TYPE_5__ {int (* xDisconnect ) (int ) ;int (* xClose ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(void *VAR_0){
  vtshim_aux *VAR_1 = (vtshim_aux*)VAR_0;
  if( !VAR_1->bDisposed ){
    vtshim_vtab *VAR_2;
    vtshim_cursor *VAR_3;
    for(VAR_2=VAR_1->pAllVtab; VAR_2; VAR_2=VAR_2->pNext){
      for(VAR_3=VAR_2->pAllCur; VAR_3; VAR_3=VAR_3->pNext){
        VAR_1->pMod->xClose(VAR_3->pChild);
      }
      VAR_1->pMod->xDisconnect(VAR_2->pChild);
    }
    VAR_1->bDisposed = 1;
    if( VAR_1->xChildDestroy ){
      VAR_1->xChildDestroy(VAR_1->pChildAux);
      VAR_1->xChildDestroy = 0;
    }
  }
}
