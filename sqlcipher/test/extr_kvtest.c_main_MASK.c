
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**) ;
 int FUNC_1 (int,char**) ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 () ;
 int FUNC_4 (int,char**) ;
 scalar_t__ FUNC_5 (char*,char*) ;

int FUNC_6(int VAR_0, char **VAR_1){
  if( VAR_0<3 ) FUNC_3();
  if( FUNC_5(VAR_1[1],"init")==0 ){
    return FUNC_1(VAR_0, VAR_1);
  }
  if( FUNC_5(VAR_1[1],"export")==0 ){
    return FUNC_0(VAR_0, VAR_1);
  }
  if( FUNC_5(VAR_1[1],"run")==0 ){
    return FUNC_2(VAR_0, VAR_1);
  }
  if( FUNC_5(VAR_1[1],"stat")==0 ){
    return FUNC_4(VAR_0, VAR_1);
  }
  FUNC_3();
  return 0;
}
