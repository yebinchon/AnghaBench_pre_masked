
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Tcl_Obj ;
typedef int Tcl_Interp ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int *,int*) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(Tcl_Interp *VAR_1){
  int VAR_2;
  int VAR_3 = 0;
  Tcl_Obj *VAR_4;
  VAR_2 = FUNC_0(VAR_1,
    "expr {[info exists ::tclvar_set_omit] && $::tclvar_set_omit}"
  );
  if( VAR_2==VAR_0 ){
    VAR_4 = FUNC_2(VAR_1);
    VAR_2 = FUNC_1(0, VAR_4, &VAR_3);
  }
  return (VAR_2==VAR_0 && VAR_3);
}
