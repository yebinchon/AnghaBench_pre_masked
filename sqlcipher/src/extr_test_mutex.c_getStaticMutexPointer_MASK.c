
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_mutex ;
typedef int Tcl_Obj ;
typedef int Tcl_Interp ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,char*,int ,int*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int) ;

__attribute__((used)) static sqlite3_mutex *FUNC_3(
  Tcl_Interp *VAR_3,
  Tcl_Obj *VAR_4
){
  int VAR_5;
  if( FUNC_0(VAR_3, VAR_4, VAR_2, "mutex name", 0, &VAR_5) ){
    return 0;
  }
  FUNC_1( VAR_5!=VAR_0 && VAR_5!=VAR_1 );
  return FUNC_2(VAR_5);
}
