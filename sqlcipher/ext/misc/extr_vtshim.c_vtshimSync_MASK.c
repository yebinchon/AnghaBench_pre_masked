
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pChild; TYPE_3__* pAux; } ;
typedef TYPE_2__ vtshim_vtab ;
struct TYPE_6__ {TYPE_1__* pMod; scalar_t__ bDisposed; } ;
typedef TYPE_3__ vtshim_aux ;
typedef int sqlite3_vtab ;
struct TYPE_4__ {int (* xSync ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_2){
  vtshim_vtab *VAR_3 = (vtshim_vtab*)VAR_2;
  vtshim_aux *VAR_4 = VAR_3->pAux;
  int VAR_5;
  if( VAR_4->bDisposed ) return VAR_0;
  VAR_5 = VAR_4->pMod->xSync(VAR_3->pChild);
  if( VAR_5!=VAR_1 ){
    FUNC_0();
  }
  return VAR_5;
}
