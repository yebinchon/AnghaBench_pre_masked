
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int Tcl_Interp ;
typedef int Tcl_DString ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int ,int,int ) ;
 int * FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  Tcl_Interp *VAR_4 = FUNC_9(VAR_1);
  Tcl_DString VAR_5;
  int VAR_6;
  int VAR_7;
  FUNC_2(&VAR_5);
  FUNC_0(&VAR_5, "::echo_glob_overload");
  for(VAR_6=0; VAR_6<VAR_2; VAR_6++){
    FUNC_0(&VAR_5, (char*)FUNC_10(VAR_3[VAR_6]));
  }
  VAR_7 = FUNC_4(VAR_4, FUNC_3(&VAR_5));
  FUNC_1(&VAR_5);
  if( VAR_7 ){
    FUNC_7(VAR_1, FUNC_5(VAR_4), -1);
  }else{
    FUNC_8(VAR_1, FUNC_5(VAR_4),
                        -1, VAR_0);
  }
  FUNC_6(VAR_4);
}
