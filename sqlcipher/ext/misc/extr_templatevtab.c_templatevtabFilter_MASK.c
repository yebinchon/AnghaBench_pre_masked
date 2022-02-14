
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iRowid; } ;
typedef TYPE_1__ templatevtab_cursor ;
typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(
  sqlite3_vtab_cursor *VAR_1,
  int VAR_2, const char *VAR_3,
  int VAR_4, sqlite3_value **VAR_5
){
  templatevtab_cursor *VAR_6 = (templatevtab_cursor *)VAR_1;
  VAR_6->iRowid = 1;
  return VAR_0;
}
