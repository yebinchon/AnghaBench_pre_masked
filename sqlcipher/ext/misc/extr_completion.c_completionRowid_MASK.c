
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_vtab_cursor ;
struct TYPE_2__ {int iRowid; } ;
typedef TYPE_1__ completion_cursor ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(sqlite3_vtab_cursor *VAR_1, sqlite_int64 *VAR_2){
  completion_cursor *VAR_3 = (completion_cursor*)VAR_1;
  *VAR_2 = VAR_3->iRowid;
  return VAR_0;
}
