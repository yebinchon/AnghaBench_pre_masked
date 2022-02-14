
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_5__ {int pTok; TYPE_1__* pMod; } ;
struct TYPE_4__ {int (* xDestroy ) (int ) ;} ;
typedef TYPE_2__ Fts3tokTable ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_1){
  Fts3tokTable *VAR_2 = (Fts3tokTable *)VAR_1;

  VAR_2->pMod->xDestroy(VAR_2->pTok);
  FUNC_0(VAR_2);
  return VAR_0;
}
