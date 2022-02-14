
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_5__ {scalar_t__ pVtab; } ;
struct TYPE_7__ {scalar_t__ pStmt; TYPE_1__ base; } ;
struct TYPE_6__ {int db; } ;
typedef TYPE_2__ FstreeVtab ;
typedef TYPE_3__ FstreeCsr ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,int,char const*,int,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,char const*,...) ;
 int FUNC_7 (int ,char const*,int,scalar_t__*,int ) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;
 scalar_t__ FUNC_9 (int *) ;
 char* FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(
  sqlite3_vtab_cursor *VAR_2,
  int VAR_3, const char *VAR_4,
  int VAR_5, sqlite3_value **VAR_6
){
  FstreeCsr *VAR_7 = (FstreeCsr*)VAR_2;
  FstreeVtab *VAR_8 = (FstreeVtab*)(VAR_7->base.pVtab);
  int VAR_9;
  const char *VAR_10 =
"WITH r(d) AS ("
"  SELECT CASE WHEN dir=?2 THEN ?3 ELSE dir END || '/' || name "
"    FROM fsdir WHERE dir=?1 AND name NOT LIKE '.%'"
"  UNION ALL"
"  SELECT dir || '/' || name FROM r, fsdir WHERE dir=d AND name NOT LIKE '.%'"
") SELECT d FROM r;";

  char *VAR_11;
  int VAR_12;
  char *VAR_13;
  int VAR_14;
  const char *VAR_15;
  int VAR_16;
  char VAR_17[2] = { '\0', '\0' };
  VAR_11 = "/";
  VAR_12 = 1;
  VAR_13 = "";
  VAR_14 = 0;


  VAR_15 = VAR_11;
  VAR_16 = VAR_12;

  FUNC_0(VAR_7);
  FUNC_4(VAR_7->pStmt);
  VAR_7->pStmt = 0;
  VAR_9 = FUNC_7(VAR_8->db, VAR_10, -1, &VAR_7->pStmt, 0);
  if( VAR_9!=VAR_0 ) return VAR_9;

  if( VAR_3 ){
    const char *VAR_18 = (const char*)FUNC_9(VAR_6[0]);
    switch( VAR_3 ){
      case 129:
        VAR_17[0] = '*';
        VAR_17[1] = '?';
        break;
      case 128:
        VAR_17[0] = '_';
        VAR_17[1] = '%';
        break;
    }

    if( FUNC_8(VAR_18, VAR_13, VAR_14)==0 ){
      int VAR_19;
      for(VAR_19=VAR_14; VAR_18[VAR_19]; VAR_19++){
        if( VAR_18[VAR_19]==VAR_17[0] || VAR_18[VAR_19]==VAR_17[1] ) break;
        if( VAR_18[VAR_19]=='/' ) VAR_16 = VAR_19;
      }
      VAR_15 = VAR_18;
    }
  }
  if( VAR_16==0 ) VAR_16 = 1;

  FUNC_3(VAR_7->pStmt, 1, VAR_15, VAR_16, VAR_1);
  FUNC_3(VAR_7->pStmt, 2, VAR_11, VAR_12, VAR_1);
  FUNC_3(VAR_7->pStmt, 3, VAR_13, VAR_14, VAR_1);






  return FUNC_1(VAR_2);
}
