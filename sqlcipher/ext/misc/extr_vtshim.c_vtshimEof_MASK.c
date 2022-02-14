
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
struct TYPE_7__ {int (* xEof ) (int ) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab_cursor *VAR_0){
  vtshim_cursor *VAR_1 = (vtshim_cursor*)VAR_0;
  vtshim_vtab *VAR_2 = (vtshim_vtab*)VAR_1->base.pVtab;
  vtshim_aux *VAR_3 = VAR_2->pAux;
  int VAR_4;
  if( VAR_3->bDisposed ) return 1;
  VAR_4 = VAR_3->pMod->xEof(VAR_1->pChild);
  FUNC_0();
  return VAR_4;
}
