
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_5__ {scalar_t__ pVtab; } ;
struct TYPE_7__ {scalar_t__ eSearch; int isEof; TYPE_1__ base; int pStmt; int iPrevId; } ;
struct TYPE_6__ {scalar_t__ pSegments; } ;
typedef TYPE_2__ Fts3Table ;
typedef TYPE_3__ Fts3Cursor ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(sqlite3_vtab_cursor *VAR_4){
  int VAR_5;
  Fts3Cursor *VAR_6 = (Fts3Cursor *)VAR_4;
  if( VAR_6->eSearch==VAR_0 || VAR_6->eSearch==VAR_1 ){
    if( VAR_3!=FUNC_4(VAR_6->pStmt) ){
      VAR_6->isEof = 1;
      VAR_5 = FUNC_3(VAR_6->pStmt);
    }else{
      VAR_6->iPrevId = FUNC_2(VAR_6->pStmt, 0);
      VAR_5 = VAR_2;
    }
  }else{
    VAR_5 = FUNC_1((Fts3Cursor *)VAR_4);
  }
  FUNC_0( ((Fts3Table *)VAR_6->base.pVtab)->pSegments==0 );
  return VAR_5;
}
