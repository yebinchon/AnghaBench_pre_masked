
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int Tcl_Interp ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(
  Tcl_Interp *VAR_1,
  const char *VAR_2,
  sqlite3_stmt **VAR_3
){
  *VAR_3 = (sqlite3_stmt*)FUNC_0(VAR_2);
  return VAR_0;
}
