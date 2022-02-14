
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_stmt ;
struct TYPE_3__ {int * pStmt; } ;
typedef TYPE_1__ echo_cursor ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab_cursor *VAR_0){
  int VAR_1;
  echo_cursor *VAR_2 = (echo_cursor *)VAR_0;
  sqlite3_stmt *VAR_3 = VAR_2->pStmt;
  VAR_2->pStmt = 0;
  FUNC_1(VAR_2);
  VAR_1 = FUNC_0(VAR_3);
  return VAR_1;
}
