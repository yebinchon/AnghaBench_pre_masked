
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zErrMsg; } ;
struct TYPE_7__ {TYPE_1__ base; int db; } ;
typedef TYPE_2__ tcl_vtab ;
struct TYPE_8__ {scalar_t__ pStmt; } ;
typedef TYPE_3__ tcl_cursor ;
struct TYPE_9__ {scalar_t__ pVtab; } ;
typedef TYPE_4__ sqlite3_vtab_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(sqlite3_vtab_cursor *VAR_2){
  tcl_cursor *VAR_3 = (tcl_cursor*)VAR_2;
  if( VAR_3->pStmt ){
    tcl_vtab *VAR_4 = (tcl_vtab*)(VAR_2->pVtab);
    int VAR_5 = FUNC_3(VAR_3->pStmt);
    if( VAR_5!=VAR_1 ){
      const char *VAR_6;
      VAR_5 = FUNC_1(VAR_3->pStmt);
      VAR_3->pStmt = 0;
      if( VAR_5!=VAR_0 ){
        VAR_6 = FUNC_0(VAR_4->db);
        VAR_4->base.zErrMsg = FUNC_2("%s", VAR_6);
      }
    }
  }
  return VAR_0;
}
