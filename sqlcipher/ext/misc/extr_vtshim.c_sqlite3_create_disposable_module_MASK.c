
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int iVersion; int xRollbackTo; int xRelease; int xSavepoint; int xRename; int xFindFunction; int xRollback; int xCommit; int xSync; int xBegin; int xUpdate; int xRowid; int xColumn; int xEof; int xNext; int xFilter; int xClose; int xOpen; int xDestroy; int xDisconnect; int xBestIndex; int xConnect; int xCreate; } ;
struct TYPE_10__ {void (* xChildDestroy ) (void*) ;TYPE_7__ sSelf; scalar_t__ pAllVtab; scalar_t__ bDisposed; int zName; int * db; TYPE_2__* pMod; void* pChildAux; } ;
typedef TYPE_1__ vtshim_aux ;
struct TYPE_11__ {int iVersion; scalar_t__ xRollbackTo; scalar_t__ xRelease; scalar_t__ xSavepoint; scalar_t__ xRename; scalar_t__ xFindFunction; scalar_t__ xRollback; scalar_t__ xCommit; scalar_t__ xSync; scalar_t__ xBegin; scalar_t__ xUpdate; scalar_t__ xRowid; scalar_t__ xColumn; scalar_t__ xEof; scalar_t__ xNext; scalar_t__ xFilter; scalar_t__ xClose; scalar_t__ xOpen; scalar_t__ xDestroy; scalar_t__ xDisconnect; scalar_t__ xBestIndex; scalar_t__ xConnect; scalar_t__ xCreate; } ;
typedef TYPE_2__ sqlite3_module ;
typedef int sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,TYPE_7__*,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_2__ const*,TYPE_2__**) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

void *FUNC_5(
  sqlite3 *VAR_24,
  const char *VAR_25,
  const sqlite3_module *VAR_26,
  void *VAR_27,
  void(*VAR_28)(void*)
){
  vtshim_aux *VAR_29;
  sqlite3_module *VAR_30;
  int VAR_31;
  VAR_29 = FUNC_2( sizeof(*VAR_29) );
  if( VAR_29==0 ){
    if( VAR_28 ) VAR_28(VAR_27);
    return 0;
  }
  VAR_31 = FUNC_4(VAR_26, &VAR_30);
  if( VAR_31!=VAR_0 ){
    FUNC_1(VAR_29);
    return 0;
  }
  VAR_29->pChildAux = VAR_27;
  VAR_29->xChildDestroy = VAR_28;
  VAR_29->pMod = VAR_30;
  VAR_29->db = VAR_24;
  VAR_29->zName = FUNC_3("%s", VAR_25);
  VAR_29->bDisposed = 0;
  VAR_29->pAllVtab = 0;
  VAR_29->sSelf.iVersion = VAR_26->iVersion<=2 ? VAR_26->iVersion : 2;
  VAR_29->sSelf.xCreate = VAR_26->xCreate ? VAR_8 : 0;
  VAR_29->sSelf.xConnect = VAR_26->xConnect ? VAR_7 : 0;
  VAR_29->sSelf.xBestIndex = VAR_26->xBestIndex ? VAR_3 : 0;
  VAR_29->sSelf.xDisconnect = VAR_26->xDisconnect ? VAR_10 : 0;
  VAR_29->sSelf.xDestroy = VAR_26->xDestroy ? VAR_9 : 0;
  VAR_29->sSelf.xOpen = VAR_26->xOpen ? VAR_15 : 0;
  VAR_29->sSelf.xClose = VAR_26->xClose ? VAR_4 : 0;
  VAR_29->sSelf.xFilter = VAR_26->xFilter ? VAR_12 : 0;
  VAR_29->sSelf.xNext = VAR_26->xNext ? VAR_14 : 0;
  VAR_29->sSelf.xEof = VAR_26->xEof ? VAR_11 : 0;
  VAR_29->sSelf.xColumn = VAR_26->xColumn ? VAR_5 : 0;
  VAR_29->sSelf.xRowid = VAR_26->xRowid ? VAR_20 : 0;
  VAR_29->sSelf.xUpdate = VAR_26->xUpdate ? VAR_23 : 0;
  VAR_29->sSelf.xBegin = VAR_26->xBegin ? VAR_2 : 0;
  VAR_29->sSelf.xSync = VAR_26->xSync ? VAR_22 : 0;
  VAR_29->sSelf.xCommit = VAR_26->xCommit ? VAR_6 : 0;
  VAR_29->sSelf.xRollback = VAR_26->xRollback ? VAR_18 : 0;
  VAR_29->sSelf.xFindFunction = VAR_26->xFindFunction ? VAR_13 : 0;
  VAR_29->sSelf.xRename = VAR_26->xRename ? VAR_17 : 0;
  if( VAR_26->iVersion>=2 ){
    VAR_29->sSelf.xSavepoint = VAR_26->xSavepoint ? VAR_21 : 0;
    VAR_29->sSelf.xRelease = VAR_26->xRelease ? VAR_16 : 0;
    VAR_29->sSelf.xRollbackTo = VAR_26->xRollbackTo ? VAR_19 : 0;
  }else{
    VAR_29->sSelf.xSavepoint = 0;
    VAR_29->sSelf.xRelease = 0;
    VAR_29->sSelf.xRollbackTo = 0;
  }
  VAR_31 = FUNC_0(VAR_24, VAR_25, &VAR_29->sSelf,
                                VAR_29, VAR_1);
  return VAR_31==VAR_0 ? (void*)VAR_29 : 0;
}
