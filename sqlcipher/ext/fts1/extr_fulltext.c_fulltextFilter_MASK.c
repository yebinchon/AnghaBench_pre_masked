
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_6__ {int zName; int db; } ;
typedef TYPE_1__ fulltext_vtab ;
struct TYPE_7__ {int iCursorType; int pStmt; int result; } ;
typedef TYPE_2__ fulltext_cursor ;
typedef int DocList ;




 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char const*,int **) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int ,int *,char const*) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(sqlite3_vtab_cursor *VAR_1,
                          int VAR_2, const char *VAR_3,
                          int VAR_4, sqlite3_value **VAR_5){
  fulltext_cursor *VAR_6 = (fulltext_cursor *) VAR_1;
  fulltext_vtab *VAR_7 = FUNC_1(VAR_6);
  int VAR_8;
  const char *VAR_9;

  VAR_6->iCursorType = VAR_2;
  switch( VAR_2 ){
    case 128:
      VAR_9 = "select rowid, content from %_content";
      break;

    case 129:
    {
      const char *VAR_10 = (const char *)FUNC_6(VAR_5[0]);
      DocList *VAR_11;
      FUNC_0( VAR_4==1 );
      VAR_8 = FUNC_3(VAR_7, VAR_10, &VAR_11);
      if( VAR_8!=VAR_0 ) return VAR_8;
      FUNC_4(&VAR_6->result, VAR_11);
      VAR_9 = "select rowid, content from %_content where rowid = ?";
      break;
    }

    default:
      FUNC_0( 0 );
  }

  VAR_8 = FUNC_5(VAR_7->db, VAR_7->zName, &VAR_6->pStmt, VAR_9);
  if( VAR_8!=VAR_0 ) return VAR_8;

  return FUNC_2(VAR_1);
}
