
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

int FUNC_4(int VAR_0, char **VAR_1){
  int VAR_2;
  int VAR_3;
  if( VAR_0==0 ){
    VAR_3 = 10;
  }else if( VAR_0==1 ){
    VAR_3 = FUNC_0(VAR_1[0]);
  }else{
    FUNC_2("Usage: random ?N?\n");
    return -1;
  }
  for(VAR_2=0; VAR_2<VAR_3; VAR_2++){
    FUNC_1("0x%x\n", FUNC_3(VAR_2));
  }
  return 0;
}
