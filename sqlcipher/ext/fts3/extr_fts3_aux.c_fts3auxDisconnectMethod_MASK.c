
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_5__ {TYPE_1__* zSegmentsTbl; int * aStmt; } ;
struct TYPE_4__ {TYPE_2__* pFts3Tab; } ;
typedef TYPE_1__ Fts3auxTable ;
typedef TYPE_2__ Fts3Table ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab *VAR_1){
  Fts3auxTable *VAR_2 = (Fts3auxTable *)VAR_1;
  Fts3Table *VAR_3 = VAR_2->pFts3Tab;
  int VAR_4;


  for(VAR_4=0; VAR_4<FUNC_0(VAR_3->aStmt); VAR_4++){
    FUNC_1(VAR_3->aStmt[VAR_4]);
  }
  FUNC_2(VAR_3->zSegmentsTbl);
  FUNC_2(VAR_2);
  return VAR_0;
}
