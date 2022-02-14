
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_5__ {int nCol; int db; int zName; int zDb; int zContentRowid; int zContent; int zContentExprlist; scalar_t__ bColumnsize; } ;
struct TYPE_4__ {int ** aStmt; TYPE_2__* pConfig; } ;
typedef TYPE_1__ Fts5Storage ;
typedef TYPE_2__ Fts5Config ;


 int FUNC_0 (int **) ;
 int VAR_0 ;


 int VAR_1 ;

 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 char* FUNC_5 (char const*,int ,...) ;
 int FUNC_6 (int ,char*,int,int,int **,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(
  Fts5Storage *VAR_7,
  int VAR_8,
  sqlite3_stmt **VAR_9,
  char **VAR_10
){
  int VAR_11 = VAR_4;



  FUNC_1( VAR_7->pConfig->bColumnsize || (
        VAR_8!=VAR_2
     && VAR_8!=VAR_0
     && VAR_8!=VAR_1
  ));

  FUNC_1( VAR_8>=0 && VAR_8<FUNC_0(VAR_7->aStmt) );
  if( VAR_7->aStmt[VAR_8]==0 ){
    const char *VAR_12[] = {
      "SELECT %s FROM %s T WHERE T.%Q >= ? AND T.%Q <= ? ORDER BY T.%Q ASC",
      "SELECT %s FROM %s T WHERE T.%Q <= ? AND T.%Q >= ? ORDER BY T.%Q DESC",
      "SELECT %s FROM %s T WHERE T.%Q=?",

      "INSERT INTO %Q.'%q_content' VALUES(%s)",
      "REPLACE INTO %Q.'%q_content' VALUES(%s)",
      "DELETE FROM %Q.'%q_content' WHERE id=?",
      "REPLACE INTO %Q.'%q_docsize' VALUES(?,?)",
      "DELETE FROM %Q.'%q_docsize' WHERE id=?",

      "SELECT sz FROM %Q.'%q_docsize' WHERE id=?",

      "REPLACE INTO %Q.'%q_config' VALUES(?,?)",
      "SELECT %s FROM %s AS T",
    };
    Fts5Config *VAR_13 = VAR_7->pConfig;
    char *VAR_14 = 0;

    switch( VAR_8 ){
      case 130:
        VAR_14 = FUNC_5(VAR_12[VAR_8],
            VAR_13->zContentExprlist, VAR_13->zContent
        );
        break;

      case 129:
      case 128:
        VAR_14 = FUNC_5(VAR_12[VAR_8], VAR_13->zContentExprlist,
            VAR_13->zContent, VAR_13->zContentRowid, VAR_13->zContentRowid,
            VAR_13->zContentRowid
        );
        break;

      case 132:
        VAR_14 = FUNC_5(VAR_12[VAR_8],
            VAR_13->zContentExprlist, VAR_13->zContent, VAR_13->zContentRowid
        );
        break;

      case 133:
      case 131: {
        int VAR_15 = VAR_13->nCol + 1;
        char *VAR_16;
        int VAR_17;

        VAR_16 = FUNC_4(1 + VAR_15*2);
        if( VAR_16 ){
          for(VAR_17=0; VAR_17<VAR_15; VAR_17++){
            VAR_16[VAR_17*2] = '?';
            VAR_16[VAR_17*2 + 1] = ',';
          }
          VAR_16[VAR_17*2-1] = '\0';
          VAR_14 = FUNC_5(VAR_12[VAR_8], VAR_13->zDb, VAR_13->zName, VAR_16);
          FUNC_3(VAR_16);
        }
        break;
      }

      default:
        VAR_14 = FUNC_5(VAR_12[VAR_8], VAR_13->zDb, VAR_13->zName);
        break;
    }

    if( VAR_14==0 ){
      VAR_11 = VAR_3;
    }else{
      int VAR_18 = VAR_6;
      if( VAR_8>132 ) VAR_18 |= VAR_5;
      VAR_11 = FUNC_6(VAR_13->db, VAR_14, -1, VAR_18, &VAR_7->aStmt[VAR_8], 0);
      FUNC_3(VAR_14);
      if( VAR_11!=VAR_4 && VAR_10 ){
        *VAR_10 = FUNC_5("%s", FUNC_2(VAR_13->db));
      }
    }
  }

  *VAR_9 = VAR_7->aStmt[VAR_8];
  FUNC_7(*VAR_9);
  return VAR_11;
}
