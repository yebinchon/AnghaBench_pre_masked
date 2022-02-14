
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
typedef int sqlite3_context ;
struct TYPE_7__ {int (* xColumn ) (int ,int *,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab_cursor *VAR_2, sqlite3_context *VAR_3, int VAR_4){
  vtshim_cursor *VAR_5 = (vtshim_cursor*)VAR_2;
  vtshim_vtab *VAR_6 = (vtshim_vtab*)VAR_5->base.pVtab;
  vtshim_aux *VAR_7 = VAR_6->pAux;
  int VAR_8;
  if( VAR_7->bDisposed ) return VAR_0;
  VAR_8 = VAR_7->pMod->xColumn(VAR_5->pChild, VAR_3, VAR_4);
  if( VAR_8!=VAR_1 ){
    FUNC_0();
  }
  return VAR_8;
}
