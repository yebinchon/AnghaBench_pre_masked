
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_10__ {int zErrMsg; } ;
typedef TYPE_2__ sqlite3_vtab ;
typedef int sqlite3_stmt ;
typedef int i64 ;
struct TYPE_13__ {TYPE_1__* pConfig; } ;
struct TYPE_12__ {int * aCnt; int * aDoc; int * pStmt; TYPE_5__* pFts5; } ;
struct TYPE_11__ {int zFts5Tbl; int zFts5Db; int pGlobal; int db; } ;
struct TYPE_9__ {int nCol; } ;
typedef TYPE_3__ Fts5VocabTable ;
typedef TYPE_4__ Fts5VocabCursor ;
typedef TYPE_5__ Fts5Table ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (int*,int) ;
 char* FUNC_3 (int*,char*,int ,int ,int ,int ) ;
 TYPE_5__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (int ,char*,int,int **,int ) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(
  sqlite3_vtab *VAR_3,
  sqlite3_vtab_cursor **VAR_4
){
  Fts5VocabTable *VAR_5 = (Fts5VocabTable*)VAR_3;
  Fts5Table *VAR_6 = 0;
  Fts5VocabCursor *VAR_7 = 0;
  int VAR_8 = VAR_1;
  sqlite3_stmt *VAR_9 = 0;
  char *VAR_10 = 0;

  VAR_10 = FUNC_3(&VAR_8,
      "SELECT t.%Q FROM %Q.%Q AS t WHERE t.%Q MATCH '*id'",
      VAR_5->zFts5Tbl, VAR_5->zFts5Db, VAR_5->zFts5Tbl, VAR_5->zFts5Tbl
  );
  if( VAR_10 ){
    VAR_8 = FUNC_9(VAR_5->db, VAR_10, -1, &VAR_9, 0);
  }
  FUNC_7(VAR_10);
  FUNC_0( VAR_8==VAR_1 || VAR_9==0 );
  if( VAR_8==VAR_0 ) VAR_8 = VAR_1;

  if( VAR_9 && FUNC_10(VAR_9)==VAR_2 ){
    i64 VAR_11 = FUNC_5(VAR_9, 0);
    VAR_6 = FUNC_4(VAR_5->pGlobal, VAR_11);
  }

  if( VAR_8==VAR_1 ){
    if( VAR_6==0 ){
      VAR_8 = FUNC_6(VAR_9);
      VAR_9 = 0;
      if( VAR_8==VAR_1 ){
        VAR_3->zErrMsg = FUNC_8(
            "no such fts5 table: %s.%s", VAR_5->zFts5Db, VAR_5->zFts5Tbl
            );
        VAR_8 = VAR_0;
      }
    }else{
      VAR_8 = FUNC_1(VAR_6);
    }
  }

  if( VAR_8==VAR_1 ){
    int VAR_12 = VAR_6->pConfig->nCol * sizeof(i64)*2 + sizeof(Fts5VocabCursor);
    VAR_7 = (Fts5VocabCursor*)FUNC_2(&VAR_8, VAR_12);
  }

  if( VAR_7 ){
    VAR_7->pFts5 = VAR_6;
    VAR_7->pStmt = VAR_9;
    VAR_7->aCnt = (i64*)&VAR_7[1];
    VAR_7->aDoc = &VAR_7->aCnt[VAR_6->pConfig->nCol];
  }else{
    FUNC_6(VAR_9);
  }

  *VAR_4 = (sqlite3_vtab_cursor*)VAR_7;
  return VAR_8;
}
