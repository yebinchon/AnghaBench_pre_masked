
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3 ;
typedef int Tcl_Obj ;
typedef int Tcl_Interp ;
struct TYPE_3__ {scalar_t__ objClientData; } ;
typedef TYPE_1__ Tcl_CmdInfo ;


 scalar_t__ FUNC_0 (int *,char*,TYPE_1__*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static sqlite3 *FUNC_4(Tcl_Interp *VAR_0, Tcl_Obj *VAR_1){
  sqlite3 *VAR_2;
  Tcl_CmdInfo VAR_3;
  char *VAR_4 = FUNC_1(VAR_1);
  if( FUNC_0(VAR_0, VAR_4, &VAR_3) ){
    VAR_2 = *((sqlite3 **)VAR_3.objClientData);
  }else{
    VAR_2 = (sqlite3*)FUNC_3(VAR_4);
  }
  FUNC_2( VAR_2 );
  return VAR_2;
}
