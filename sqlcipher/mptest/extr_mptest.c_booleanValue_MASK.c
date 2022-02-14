
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_0){
  int VAR_1;
  if( VAR_0==0 ) return 0;
  for(VAR_1=0; VAR_0[VAR_1]>='0' && VAR_0[VAR_1]<='9'; VAR_1++){}
  if( VAR_1>0 && VAR_0[VAR_1]==0 ) return FUNC_0(VAR_0);
  if( FUNC_2(VAR_0, "on")==0 || FUNC_2(VAR_0,"yes")==0 ){
    return 1;
  }
  if( FUNC_2(VAR_0, "off")==0 || FUNC_2(VAR_0,"no")==0 ){
    return 0;
  }
  FUNC_1("unknown boolean: [%s]", VAR_0);
  return 0;
}
