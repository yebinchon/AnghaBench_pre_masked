
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_2__ {int pStmt; } ;
typedef TYPE_1__ fs_cursor ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab_cursor *VAR_0){
  fs_cursor *VAR_1 = (fs_cursor*)VAR_0;
  return (FUNC_0(VAR_1->pStmt)==0);
}
