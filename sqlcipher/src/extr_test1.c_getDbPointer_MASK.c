
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct SqliteDb {int * db; } ;
typedef int sqlite3 ;
typedef int Tcl_Interp ;
struct TYPE_3__ {scalar_t__ objClientData; } ;
typedef TYPE_1__ Tcl_CmdInfo ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (char const*) ;

int FUNC_2(Tcl_Interp *VAR_1, const char *VAR_2, sqlite3 **VAR_3){
  struct SqliteDb *VAR_4;
  Tcl_CmdInfo VAR_5;
  if( FUNC_0(VAR_1, VAR_2, &VAR_5) ){
    VAR_4 = (struct SqliteDb*)VAR_5.objClientData;
    *VAR_3 = VAR_4->db;
  }else{
    *VAR_3 = (sqlite3*)FUNC_1(VAR_2);
  }
  return VAR_0;
}
