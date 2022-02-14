
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char const*,int) ;
 char* FUNC_3 (char*,...) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_0){
  int VAR_1, VAR_2;
  char VAR_3;
  if( VAR_0[0]==0 ) return FUNC_3("\"\"");
  for(VAR_1=VAR_2=0; (VAR_3 = VAR_0[VAR_1])!=0; VAR_1++){
    if( !FUNC_0(VAR_3) && VAR_3!='_' ){
      if( VAR_1>0 && FUNC_1(VAR_3) ){
        VAR_2++;
      }else{
        return FUNC_3("\"%w\"", VAR_0);
      }
    }
  }
  if( VAR_2 || !FUNC_2(VAR_0,VAR_1) ){
    return FUNC_3("%s", VAR_0);
  }
  return FUNC_3("\"%w\"", VAR_0);
}
