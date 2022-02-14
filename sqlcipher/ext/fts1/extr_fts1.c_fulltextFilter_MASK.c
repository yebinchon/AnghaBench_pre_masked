
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_7__ {int nColumn; int zName; int zDb; int db; } ;
typedef TYPE_1__ fulltext_vtab ;
struct TYPE_9__ {int * pDoclist; } ;
struct TYPE_8__ {int iCursorType; TYPE_3__ result; int q; int pStmt; } ;
typedef TYPE_2__ fulltext_cursor ;
typedef int DocList ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ,char const*,int,int **,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (int ,int ,int ,int *,char*) ;
 int FUNC_9 (int ,int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char*,char*) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(
  sqlite3_vtab_cursor *VAR_2,
  int VAR_3, const char *VAR_4,
  int VAR_5, sqlite3_value **VAR_6
){
  fulltext_cursor *VAR_7 = (fulltext_cursor *) VAR_2;
  fulltext_vtab *VAR_8 = FUNC_2(VAR_7);
  int VAR_9;
  char *VAR_10;

  FUNC_0(("FTS1 Filter %p\n",VAR_2));

  VAR_10 = FUNC_12("select rowid, * from %%_content %s",
                          VAR_3==129 ? "" : "where rowid=?");
  FUNC_10(VAR_7->pStmt);
  VAR_9 = FUNC_8(VAR_8->db, VAR_8->zDb, VAR_8->zName, &VAR_7->pStmt, VAR_10);
  FUNC_11(VAR_10);
  if( VAR_9!=VAR_1 ) return VAR_9;

  VAR_7->iCursorType = VAR_3;
  switch( VAR_3 ){
    case 129:
      break;

    case 128:
      VAR_9 = FUNC_9(VAR_7->pStmt, 1, FUNC_13(VAR_6[0]));
      if( VAR_9!=VAR_1 ) return VAR_9;
      break;

    default:
    {
      const char *VAR_11 = (const char *)FUNC_14(VAR_6[0]);
      DocList *VAR_12;
      FUNC_1( VAR_3<=VAR_0+VAR_8->nColumn);
      FUNC_1( VAR_5==1 );
      FUNC_6(&VAR_7->q);
      VAR_9 = FUNC_5(VAR_8, VAR_3-VAR_0, VAR_11, -1, &VAR_12, &VAR_7->q);
      if( VAR_9!=VAR_1 ) return VAR_9;
      if( VAR_7->result.pDoclist!=((void*)0) ) FUNC_3(VAR_7->result.pDoclist);
      FUNC_7(&VAR_7->result, VAR_12);
      break;
    }
  }

  return FUNC_4(VAR_2);
}
