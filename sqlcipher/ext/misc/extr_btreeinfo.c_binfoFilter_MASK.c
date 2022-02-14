
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pVtab; } ;
typedef TYPE_1__ sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_8__ {char* zSchema; int hasRowid; scalar_t__ pStmt; } ;
struct TYPE_7__ {int db; } ;
typedef TYPE_2__ BinfoTable ;
typedef TYPE_3__ BinfoCursor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (char*,...) ;
 int FUNC_4 (int ,char*,int,scalar_t__*,int ) ;
 char* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(
  sqlite3_vtab_cursor *VAR_2,
  int VAR_3, const char *VAR_4,
  int VAR_5, sqlite3_value **VAR_6
){
  BinfoCursor *VAR_7 = (BinfoCursor *)VAR_2;
  BinfoTable *VAR_8 = (BinfoTable *)VAR_2->pVtab;
  char *VAR_9;
  int VAR_10;

  FUNC_2(VAR_7->zSchema);
  if( VAR_3==1 && FUNC_6(VAR_6[0])!=VAR_0 ){
    VAR_7->zSchema = FUNC_3("%s", FUNC_5(VAR_6[0]));
  }else{
    VAR_7->zSchema = FUNC_3("main");
  }
  VAR_9 = FUNC_3(
      "SELECT 0, 'table','sqlite_master','sqlite_master',1,NULL "
      "UNION ALL "
      "SELECT rowid, type, name, tbl_name, rootpage, sql"
      " FROM \"%w\".sqlite_master WHERE rootpage>=1",
       VAR_7->zSchema);
  FUNC_1(VAR_7->pStmt);
  VAR_7->pStmt = 0;
  VAR_7->hasRowid = -1;
  VAR_10 = FUNC_4(VAR_8->db, VAR_9, -1, &VAR_7->pStmt, 0);
  FUNC_2(VAR_9);
  if( VAR_10==VAR_1 ){
    VAR_10 = FUNC_0(VAR_2);
  }
  return VAR_10;
}
