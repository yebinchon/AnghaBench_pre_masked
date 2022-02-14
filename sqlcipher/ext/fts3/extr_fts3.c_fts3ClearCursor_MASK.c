
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_5__ {int base; int pExpr; int pMIBuffer; int aDoclist; } ;
typedef TYPE_1__ Fts3Cursor ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(Fts3Cursor *VAR_0){
  FUNC_0(VAR_0);
  FUNC_3(VAR_0);
  FUNC_5(VAR_0->aDoclist);
  FUNC_4(VAR_0->pMIBuffer);
  FUNC_2(VAR_0->pExpr);
  FUNC_1(&(&VAR_0->base)[1], 0, sizeof(Fts3Cursor)-sizeof(sqlite3_vtab_cursor));
}
