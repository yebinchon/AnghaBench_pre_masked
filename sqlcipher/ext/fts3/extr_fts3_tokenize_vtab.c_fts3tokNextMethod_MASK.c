
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pVtab; } ;
typedef TYPE_2__ sqlite3_vtab_cursor ;
struct TYPE_10__ {int iPos; int iEnd; int iStart; int nToken; int zToken; int pCsr; int iRowid; } ;
struct TYPE_9__ {TYPE_1__* pMod; } ;
struct TYPE_7__ {int (* xNext ) (int ,int *,int *,int *,int *,int *) ;} ;
typedef TYPE_3__ Fts3tokTable ;
typedef TYPE_4__ Fts3tokCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,int *,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab_cursor *VAR_2){
  Fts3tokCursor *VAR_3 = (Fts3tokCursor *)VAR_2;
  Fts3tokTable *VAR_4 = (Fts3tokTable *)(VAR_2->pVtab);
  int VAR_5;

  VAR_3->iRowid++;
  VAR_5 = VAR_4->pMod->xNext(VAR_3->pCsr,
      &VAR_3->zToken, &VAR_3->nToken,
      &VAR_3->iStart, &VAR_3->iEnd, &VAR_3->iPos
  );

  if( VAR_5!=VAR_1 ){
    FUNC_0(VAR_3);
    if( VAR_5==VAR_0 ) VAR_5 = VAR_1;
  }

  return VAR_5;
}
