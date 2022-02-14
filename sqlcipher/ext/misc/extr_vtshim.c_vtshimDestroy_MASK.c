
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* pNext; TYPE_1__** ppPrev; int pChild; TYPE_4__* pAux; } ;
typedef TYPE_3__ vtshim_vtab ;
struct TYPE_9__ {TYPE_2__* pMod; int bDisposed; } ;
typedef TYPE_4__ vtshim_aux ;
typedef int sqlite3_vtab ;
struct TYPE_7__ {int (* xDestroy ) (int ) ;} ;
struct TYPE_6__ {struct TYPE_6__** ppPrev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_1){
  vtshim_vtab *VAR_2 = (vtshim_vtab*)VAR_1;
  vtshim_aux *VAR_3 = VAR_2->pAux;
  int VAR_4 = VAR_0;
  if( !VAR_3->bDisposed ){
    VAR_4 = VAR_3->pMod->xDestroy(VAR_2->pChild);
  }
  if( VAR_2->pNext ) VAR_2->pNext->ppPrev = VAR_2->ppPrev;
  *VAR_2->ppPrev = VAR_2->pNext;
  FUNC_0(VAR_2);
  return VAR_4;
}
