
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_7__ {TYPE_1__* pModule; } ;
struct TYPE_6__ {scalar_t__ nPendingData; scalar_t__ pSegments; TYPE_3__* pTokenizer; struct TYPE_6__* zLanguageid; struct TYPE_6__* zContentTbl; struct TYPE_6__* zWriteExprlist; struct TYPE_6__* zReadExprlist; struct TYPE_6__* zSegmentsTbl; int * aStmt; int pSeekStmt; } ;
struct TYPE_5__ {int (* xDestroy ) (TYPE_3__*) ;} ;
typedef TYPE_2__ Fts3Table ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(sqlite3_vtab *VAR_1){
  Fts3Table *VAR_2 = (Fts3Table *)VAR_1;
  int VAR_3;

  FUNC_1( VAR_2->nPendingData==0 );
  FUNC_1( VAR_2->pSegments==0 );


  FUNC_2(VAR_2->pSeekStmt);
  for(VAR_3=0; VAR_3<FUNC_0(VAR_2->aStmt); VAR_3++){
    FUNC_2(VAR_2->aStmt[VAR_3]);
  }
  FUNC_3(VAR_2->zSegmentsTbl);
  FUNC_3(VAR_2->zReadExprlist);
  FUNC_3(VAR_2->zWriteExprlist);
  FUNC_3(VAR_2->zContentTbl);
  FUNC_3(VAR_2->zLanguageid);


  VAR_2->pTokenizer->pModule->xDestroy(VAR_2->pTokenizer);

  FUNC_3(VAR_2);
  return VAR_0;
}
