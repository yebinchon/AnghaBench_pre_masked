
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iInst; } ;
typedef TYPE_1__ vtablog_vtab ;
typedef int sqlite_int64 ;
typedef int sqlite3_vtab ;
typedef int sqlite3_value ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_vtab *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3,
  sqlite_int64 *VAR_4
){
  vtablog_vtab *VAR_5 = (vtablog_vtab*)VAR_1;
  int VAR_6;
  FUNC_0("vtablogUpdate(tab=%d):\n", VAR_5->iInst);
  FUNC_0("  argc=%d\n", VAR_2);
  for(VAR_6=0; VAR_6<VAR_2; VAR_6++){
    FUNC_0("  argv[%d]=", VAR_6);
    FUNC_1(VAR_3[VAR_6]);
    FUNC_0("\n");
  }
  return VAR_0;
}
