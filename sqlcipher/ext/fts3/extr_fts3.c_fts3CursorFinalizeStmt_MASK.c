
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pVtab; } ;
struct TYPE_7__ {scalar_t__ pStmt; scalar_t__ bSeekStmt; TYPE_1__ base; } ;
struct TYPE_6__ {scalar_t__ pSeekStmt; } ;
typedef TYPE_2__ Fts3Table ;
typedef TYPE_3__ Fts3Cursor ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(Fts3Cursor *VAR_0){
  if( VAR_0->bSeekStmt ){
    Fts3Table *VAR_1 = (Fts3Table *)VAR_0->base.pVtab;
    if( VAR_1->pSeekStmt==0 ){
      VAR_1->pSeekStmt = VAR_0->pStmt;
      FUNC_1(VAR_0->pStmt);
      VAR_0->pStmt = 0;
    }
    VAR_0->bSeekStmt = 0;
  }
  FUNC_0(VAR_0->pStmt);
}
