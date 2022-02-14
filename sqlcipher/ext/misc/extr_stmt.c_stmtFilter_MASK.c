
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iRowid; scalar_t__ pStmt; } ;
typedef TYPE_1__ stmt_cursor ;
typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(
  sqlite3_vtab_cursor *VAR_0,
  int VAR_1, const char *VAR_2,
  int VAR_3, sqlite3_value **VAR_4
){
  stmt_cursor *VAR_5 = (stmt_cursor *)VAR_0;
  VAR_5->pStmt = 0;
  VAR_5->iRowid = 0;
  return FUNC_0(VAR_0);
}
