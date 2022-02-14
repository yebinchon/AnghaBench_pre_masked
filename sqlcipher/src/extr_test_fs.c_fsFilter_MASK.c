
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
struct TYPE_7__ {int db; int zTbl; int zDb; } ;
typedef TYPE_2__ fs_vtab ;
struct TYPE_8__ {int pStmt; } ;
typedef TYPE_3__ fs_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int ,char*,int,int *,int ) ;

__attribute__((used)) static int FUNC_6(
  sqlite3_vtab_cursor *VAR_2,
  int VAR_3, const char *VAR_4,
  int VAR_5, sqlite3_value **VAR_6
){
  int VAR_7;
  fs_cursor *VAR_8 = (fs_cursor *)VAR_2;
  fs_vtab *VAR_9 = (fs_vtab *)(VAR_2->pVtab);

  FUNC_0( (VAR_3==0 && VAR_5==0) || (VAR_3==1 && VAR_5==1) );
  if( VAR_3==1 ){
    char *VAR_10 = FUNC_4(
        "SELECT * FROM %Q.%Q WHERE rowid=?", VAR_9->zDb, VAR_9->zTbl);
    if( !VAR_10 ) return VAR_0;
    VAR_7 = FUNC_5(VAR_9->db, VAR_10, -1, &VAR_8->pStmt, 0);
    FUNC_3(VAR_10);
    if( VAR_7==VAR_1 ){
      FUNC_2(VAR_8->pStmt, 1, VAR_6[0]);
    }
  }else{
    char *VAR_11 = FUNC_4("SELECT * FROM %Q.%Q", VAR_9->zDb, VAR_9->zTbl);
    if( !VAR_11 ) return VAR_0;
    VAR_7 = FUNC_5(VAR_9->db, VAR_11, -1, &VAR_8->pStmt, 0);
    FUNC_3(VAR_11);
  }

  if( VAR_7==VAR_1 ){
    VAR_7 = FUNC_1(VAR_2);
  }
  return VAR_7;
}
