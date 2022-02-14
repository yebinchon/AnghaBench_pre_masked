
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Tcl_DString ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, int VAR_1, char **VAR_2, char **VAR_3){
  Tcl_DString *VAR_4 = (Tcl_DString*)VAR_0;
  int VAR_5;

  if( FUNC_1(VAR_4)==0 ){
    for(VAR_5=0; VAR_5<VAR_1; VAR_5++){
      FUNC_0(VAR_4, VAR_3[VAR_5] ? VAR_3[VAR_5] : "NULL");
    }
  }
  for(VAR_5=0; VAR_5<VAR_1; VAR_5++){
    FUNC_0(VAR_4, VAR_2[VAR_5] ? VAR_2[VAR_5] : "NULL");
  }
  return 0;
}
