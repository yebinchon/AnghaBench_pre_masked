
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ pVtab; } ;
typedef TYPE_2__ sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_8__ {scalar_t__ pVtab; } ;
struct TYPE_11__ {TYPE_1__ base; int pStmt; int iLangid; int pExpr; int iPrevId; } ;
struct TYPE_10__ {int nColumn; scalar_t__ pSegments; int zLanguageid; } ;
typedef TYPE_3__ Fts3Table ;
typedef TYPE_4__ Fts3Cursor ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,TYPE_4__*,char*,int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(
  sqlite3_vtab_cursor *VAR_1,
  sqlite3_context *VAR_2,
  int VAR_3
){
  int VAR_4 = VAR_0;
  Fts3Cursor *VAR_5 = (Fts3Cursor *) VAR_1;
  Fts3Table *VAR_6 = (Fts3Table *)VAR_1->pVtab;


  FUNC_0( VAR_3>=0 && VAR_3<=VAR_6->nColumn+2 );

  switch( VAR_3-VAR_6->nColumn ){
    case 0:

      FUNC_6(VAR_2, VAR_5, "fts3cursor", 0);
      break;

    case 1:

      FUNC_5(VAR_2, VAR_5->iPrevId);
      break;

    case 2:
      if( VAR_5->pExpr ){
        FUNC_5(VAR_2, VAR_5->iLangid);
        break;
      }else if( VAR_6->zLanguageid==0 ){
        FUNC_4(VAR_2, 0);
        break;
      }else{
        VAR_3 = VAR_6->nColumn;

      }

    default:


      VAR_4 = FUNC_1(0, VAR_5);
      if( VAR_4==VAR_0 && FUNC_3(VAR_5->pStmt)-1>VAR_3 ){
        FUNC_7(VAR_2, FUNC_2(VAR_5->pStmt, VAR_3+1));
      }
      break;
  }

  FUNC_0( ((Fts3Table *)VAR_5->base.pVtab)->pSegments==0 );
  return VAR_4;
}
