
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* pAllCur; int pChild; TYPE_4__* pAux; } ;
typedef TYPE_2__ vtshim_vtab ;
struct TYPE_11__ {struct TYPE_11__* pNext; struct TYPE_11__** ppPrev; int base; TYPE_5__* pChild; } ;
typedef TYPE_3__ vtshim_cursor ;
struct TYPE_12__ {TYPE_1__* pMod; scalar_t__ bDisposed; } ;
typedef TYPE_4__ vtshim_aux ;
typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
struct TYPE_13__ {int pVtab; } ;
struct TYPE_9__ {int (* xOpen ) (int ,TYPE_5__**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (int ,TYPE_5__**) ;

__attribute__((used)) static int FUNC_5(sqlite3_vtab *VAR_3, sqlite3_vtab_cursor **VAR_4){
  vtshim_vtab *VAR_5 = (vtshim_vtab*)VAR_3;
  vtshim_aux *VAR_6 = VAR_5->pAux;
  vtshim_cursor *VAR_7;
  int VAR_8;
  *VAR_4 = 0;
  if( VAR_6->bDisposed ) return VAR_0;
  VAR_7 = FUNC_3( sizeof(*VAR_7) );
  if( VAR_7==0 ) return VAR_1;
  FUNC_1(VAR_7, 0, sizeof(*VAR_7));
  VAR_8 = VAR_6->pMod->xOpen(VAR_5->pChild, &VAR_7->pChild);
  if( VAR_8 ){
    FUNC_2(VAR_7);
    FUNC_0();
    return VAR_8;
  }
  VAR_7->pChild->pVtab = VAR_5->pChild;
  *VAR_4 = &VAR_7->base;
  VAR_7->ppPrev = &VAR_5->pAllCur;
  if( VAR_5->pAllCur ) VAR_5->pAllCur->ppPrev = &VAR_7->pNext;
  VAR_7->pNext = VAR_5->pAllCur;
  VAR_5->pAllCur = VAR_7;
  return VAR_2;
}
