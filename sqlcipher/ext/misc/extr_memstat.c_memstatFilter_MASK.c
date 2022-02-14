
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_3__ {scalar_t__ iDb; scalar_t__ iRowid; } ;
typedef TYPE_1__ memstat_cursor ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_vtab_cursor *VAR_0,
  int VAR_1, const char *VAR_2,
  int VAR_3, sqlite3_value **VAR_4
){
  memstat_cursor *VAR_5 = (memstat_cursor *)VAR_0;
  int VAR_6 = FUNC_0(VAR_5);
  if( VAR_6 ) return VAR_6;
  VAR_5->iRowid = 0;
  VAR_5->iDb = 0;
  return FUNC_1(VAR_0);
}
