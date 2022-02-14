
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
struct TYPE_7__ {scalar_t__ pVtab; } ;
struct TYPE_9__ {int pChild; TYPE_2__ base; } ;
typedef TYPE_4__ vtshim_cursor ;
struct TYPE_10__ {TYPE_1__* pMod; scalar_t__ bDisposed; } ;
typedef TYPE_5__ vtshim_aux ;
typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_6__ {int (* xFilter ) (int ,int,char const*,int,int **) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int,char const*,int,int **) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_vtab_cursor *VAR_2,
  int VAR_3,
  const char *VAR_4,
  int VAR_5,
  sqlite3_value **VAR_6
){
  vtshim_cursor *VAR_7 = (vtshim_cursor*)VAR_2;
  vtshim_vtab *VAR_8 = (vtshim_vtab*)VAR_7->base.pVtab;
  vtshim_aux *VAR_9 = VAR_8->pAux;
  int VAR_10;
  if( VAR_9->bDisposed ) return VAR_0;
  VAR_10 = VAR_9->pMod->xFilter(VAR_7->pChild, VAR_3, VAR_4, VAR_5, VAR_6);
  if( VAR_10!=VAR_1 ){
    FUNC_0();
  }
  return VAR_10;
}
