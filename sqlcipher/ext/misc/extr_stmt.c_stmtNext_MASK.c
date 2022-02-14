
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pStmt; int db; int iRowid; } ;
typedef TYPE_1__ stmt_cursor ;
typedef int sqlite3_vtab_cursor ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab_cursor *VAR_1){
  stmt_cursor *VAR_2 = (stmt_cursor*)VAR_1;
  VAR_2->iRowid++;
  VAR_2->pStmt = FUNC_0(VAR_2->db, VAR_2->pStmt);
  return VAR_0;
}
