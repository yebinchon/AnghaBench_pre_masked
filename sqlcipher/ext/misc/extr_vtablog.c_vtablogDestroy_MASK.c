
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iInst; } ;
typedef TYPE_1__ vtablog_vtab ;
typedef int sqlite3_vtab ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_1){
  vtablog_vtab *VAR_2 = (vtablog_vtab*)VAR_1;
  FUNC_0("vtablogDestroy(%d)\n", VAR_2->iInst);
  FUNC_1(VAR_1);
  return VAR_0;
}
