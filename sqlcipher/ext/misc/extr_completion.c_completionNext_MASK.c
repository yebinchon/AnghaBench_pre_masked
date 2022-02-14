
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_stmt ;
struct TYPE_2__ {int ePhase; char const* zCurrentRow; scalar_t__ szRow; scalar_t__ pStmt; scalar_t__ nPrefix; int zPrefix; int db; int j; int iRowid; } ;
typedef TYPE_1__ completion_cursor ;




 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char const**,scalar_t__*) ;
 char* FUNC_6 (char*,char*,char const*,char const*,...) ;
 int FUNC_7 (int ,char*,int,int **,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,char const*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(sqlite3_vtab_cursor *VAR_4){
  completion_cursor *VAR_5 = (completion_cursor*)VAR_4;
  int VAR_6 = 0;
  int VAR_7 = -1;
  VAR_5->iRowid++;
  while( VAR_5->ePhase!=VAR_0 ){
    switch( VAR_5->ePhase ){
      case 129: {
        if( VAR_5->j >= FUNC_4() ){
          VAR_5->zCurrentRow = 0;
          VAR_5->ePhase = 130;
        }else{
          FUNC_5(VAR_5->j++, &VAR_5->zCurrentRow, &VAR_5->szRow);
        }
        VAR_7 = -1;
        break;
      }
      case 130: {
        if( VAR_5->pStmt==0 ){
          FUNC_7(VAR_5->db, "PRAGMA database_list", -1,
                             &VAR_5->pStmt, 0);
        }
        VAR_7 = 1;
        VAR_6 = 128;
        break;
      }
      case 128: {
        if( VAR_5->pStmt==0 ){
          sqlite3_stmt *VAR_8;
          char *VAR_9 = 0;
          const char *VAR_10 = "";
          FUNC_7(VAR_5->db, "PRAGMA database_list", -1, &VAR_8, 0);
          while( FUNC_8(VAR_8)==VAR_3 ){
            const char *VAR_11 = (const char*)FUNC_1(VAR_8, 1);
            VAR_9 = FUNC_6(
               "%z%s"
               "SELECT name FROM \"%w\".sqlite_master",
               VAR_9, VAR_10, VAR_11
            );
            if( VAR_9==0 ) return VAR_1;
            VAR_10 = " UNION ";
          }
          FUNC_2(VAR_8);
          FUNC_7(VAR_5->db, VAR_9, -1, &VAR_5->pStmt, 0);
          FUNC_3(VAR_9);
        }
        VAR_7 = 0;
        VAR_6 = 131;
        break;
      }
      case 131: {
        if( VAR_5->pStmt==0 ){
          sqlite3_stmt *VAR_12;
          char *VAR_13 = 0;
          const char *VAR_14 = "";
          FUNC_7(VAR_5->db, "PRAGMA database_list", -1, &VAR_12, 0);
          while( FUNC_8(VAR_12)==VAR_3 ){
            const char *VAR_15 = (const char*)FUNC_1(VAR_12, 1);
            VAR_13 = FUNC_6(
               "%z%s"
               "SELECT pti.name FROM \"%w\".sqlite_master AS sm"
                       " JOIN pragma_table_info(sm.name,%Q) AS pti"
               " WHERE sm.type='table'",
               VAR_13, VAR_14, VAR_15, VAR_15
            );
            if( VAR_13==0 ) return VAR_1;
            VAR_14 = " UNION ";
          }
          FUNC_2(VAR_12);
          FUNC_7(VAR_5->db, VAR_13, -1, &VAR_5->pStmt, 0);
          FUNC_3(VAR_13);
        }
        VAR_7 = 0;
        VAR_6 = VAR_0;
        break;
      }
    }
    if( VAR_7<0 ){

      if( VAR_5->zCurrentRow==0 ) continue;
    }else{
      if( FUNC_8(VAR_5->pStmt)==VAR_3 ){

        VAR_5->zCurrentRow = (const char*)FUNC_1(VAR_5->pStmt, VAR_7);
        VAR_5->szRow = FUNC_0(VAR_5->pStmt, VAR_7);
      }else{

        FUNC_2(VAR_5->pStmt);
        VAR_5->pStmt = 0;
        VAR_5->ePhase = VAR_6;
        continue;
      }
    }
    if( VAR_5->nPrefix==0 ) break;
    if( VAR_5->nPrefix<=VAR_5->szRow
     && FUNC_9(VAR_5->zPrefix, VAR_5->zCurrentRow, VAR_5->nPrefix)==0
    ){
      break;
    }
  }

  return VAR_2;
}
