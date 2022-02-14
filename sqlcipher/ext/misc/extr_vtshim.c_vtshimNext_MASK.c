
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_5__* pAux; } ;
typedef TYPE_3__ vtshim_vtab ;
struct TYPE_6__ {scalar_t__ pVtab; } ;
struct TYPE_9__ {int pChild; TYPE_1__ base; } ;
typedef TYPE_4__ vtshim_cursor ;
struct TYPE_10__ {TYPE_2__* pMod; scalar_t__ bDisposed; } ;
typedef TYPE_5__ vtshim_aux ;
typedef int sqlite3_vtab_cursor ;
struct TYPE_7__ {int (* xNext ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab_cursor *VAR_2){
  vtshim_cursor *VAR_3 = (vtshim_cursor*)VAR_2;
  vtshim_vtab *VAR_4 = (vtshim_vtab*)VAR_3->base.pVtab;
  vtshim_aux *VAR_5 = VAR_4->pAux;
  int VAR_6;
  if( VAR_5->bDisposed ) return VAR_0;
  VAR_6 = VAR_5->pMod->xNext(VAR_3->pChild);
  if( VAR_6!=VAR_1 ){
    FUNC_0();
  }
  return VAR_6;
}
