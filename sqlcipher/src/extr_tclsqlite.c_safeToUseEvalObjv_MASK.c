
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Tcl_Obj ;
typedef int Tcl_Interp ;


 char* FUNC_0 (int *,int*) ;

__attribute__((used)) static int FUNC_1(Tcl_Interp *VAR_0, Tcl_Obj *VAR_1){




  const char *VAR_2;
  int VAR_3;
  VAR_2 = FUNC_0(VAR_1, &VAR_3);
  while( VAR_3-- > 0 ){
    int VAR_4 = *(VAR_2++);
    if( VAR_4=='$' || VAR_4=='[' || VAR_4==';' ) return 0;
  }
  return 1;
}
