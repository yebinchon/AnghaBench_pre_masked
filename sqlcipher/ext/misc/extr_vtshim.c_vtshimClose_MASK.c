
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_6__* pAux; } ;
typedef TYPE_4__ vtshim_vtab ;
struct TYPE_10__ {scalar_t__ pVtab; } ;
struct TYPE_12__ {TYPE_2__* pNext; TYPE_2__** ppPrev; int pChild; TYPE_3__ base; } ;
typedef TYPE_5__ vtshim_cursor ;
struct TYPE_13__ {TYPE_1__* pMod; int bDisposed; } ;
typedef TYPE_6__ vtshim_aux ;
typedef int sqlite3_vtab_cursor ;
struct TYPE_9__ {struct TYPE_9__** ppPrev; } ;
struct TYPE_8__ {int (* xClose ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab_cursor *VAR_1){
  vtshim_cursor *VAR_2 = (vtshim_cursor*)VAR_1;
  vtshim_vtab *VAR_3 = (vtshim_vtab*)VAR_2->base.pVtab;
  vtshim_aux *VAR_4 = VAR_3->pAux;
  int VAR_5 = VAR_0;
  if( !VAR_4->bDisposed ){
    VAR_5 = VAR_4->pMod->xClose(VAR_2->pChild);
    if( VAR_5!=VAR_0 ){
      FUNC_0();
    }
  }
  if( VAR_2->pNext ) VAR_2->pNext->ppPrev = VAR_2->ppPrev;
  *VAR_2->ppPrev = VAR_2->pNext;
  FUNC_1(VAR_2);
  return VAR_5;
}
