
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_4__ {scalar_t__ pVtab; } ;
typedef TYPE_1__ sqlite3_vtab_cursor ;
typedef int sqlite3_stmt ;
typedef int echo_vtab ;
struct TYPE_5__ {int * pStmt; } ;
typedef TYPE_2__ echo_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab_cursor *VAR_2, sqlite_int64 *VAR_3){
  sqlite3_stmt *VAR_4 = ((echo_cursor *)VAR_2)->pStmt;

  if( FUNC_0((echo_vtab *)(VAR_2->pVtab), "xRowid") ){
    return VAR_0;
  }

  *VAR_3 = FUNC_1(VAR_4, 0);
  return VAR_1;
}
