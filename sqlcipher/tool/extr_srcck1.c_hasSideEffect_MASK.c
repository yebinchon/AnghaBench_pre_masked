
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, unsigned int VAR_1){
  unsigned int VAR_2;
  for(VAR_2=0; VAR_2<VAR_1; VAR_2++){
    if( VAR_0[VAR_2]=='/' && FUNC_0(&VAR_0[VAR_2], "/*side-effects-ok*/", 19)==0 ) return 0;
    if( VAR_0[VAR_2]=='=' && VAR_2>0 && VAR_0[VAR_2-1]!='=' && VAR_0[VAR_2-1]!='>'
           && VAR_0[VAR_2-1]!='<' && VAR_0[VAR_2-1]!='!' && VAR_0[VAR_2+1]!='=' ) return 1;
    if( VAR_0[VAR_2]=='+' && VAR_0[VAR_2+1]=='+' ) return 1;
    if( VAR_0[VAR_2]=='-' && VAR_0[VAR_2+1]=='-' ) return 1;
  }
  return 0;
}
