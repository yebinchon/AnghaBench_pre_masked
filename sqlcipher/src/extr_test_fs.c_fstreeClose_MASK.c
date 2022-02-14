
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_4__ {int pStmt; } ;
typedef TYPE_1__ FstreeCsr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab_cursor *VAR_1){
  FstreeCsr *VAR_2 = (FstreeCsr*)VAR_1;
  FUNC_1(VAR_2->pStmt);
  FUNC_0(VAR_2);
  FUNC_2(VAR_2);
  return VAR_0;
}
