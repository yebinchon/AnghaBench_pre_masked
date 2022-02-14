
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, int *VAR_1){
  int VAR_2 = 0;
  if( FUNC_0(VAR_0[0]) || (VAR_0[0]=='/' && VAR_0[1]=='*') ){
    int VAR_3 = 0;
    int VAR_4;
    if( VAR_0[0]=='/' ){
      VAR_3 = 1;
      VAR_2 = 2;
    }
    while( (VAR_4 = VAR_0[VAR_2++])!=0 ){
      if( VAR_4=='\n' ) (*VAR_1)++;
      if( FUNC_0(VAR_4) ) continue;
      if( VAR_3 && VAR_4=='*' && VAR_0[VAR_2]=='/' ){
        VAR_2++;
        VAR_3 = 0;
      }else if( !VAR_3 && VAR_4=='/' && VAR_0[VAR_2]=='*' ){
        VAR_2++;
        VAR_3 = 1;
      }else if( !VAR_3 ){
        break;
      }
    }
    VAR_2--;
  }else if( VAR_0[0]=='-' && VAR_0[1]=='-' ){
    for(VAR_2=2; VAR_0[VAR_2] && VAR_0[VAR_2]!='\n'; VAR_2++){}
    if( VAR_0[VAR_2] ){ (*VAR_1)++; VAR_2++; }
  }else if( VAR_0[0]=='"' || VAR_0[0]=='\'' ){
    int VAR_5 = VAR_0[0];
    for(VAR_2=1; VAR_0[VAR_2]; VAR_2++){
      if( VAR_0[VAR_2]=='\n' ) (*VAR_1)++;
      if( VAR_0[VAR_2]==VAR_5 ){
        VAR_2++;
        if( VAR_0[VAR_2+1]!=VAR_5 ) break;
      }
    }
  }else{
    int VAR_6;
    for(VAR_2=1; (VAR_6 = VAR_0[VAR_2])!=0 && !FUNC_0(VAR_6) && VAR_6!='"' && VAR_6!='\'' && VAR_6!=';'; VAR_2++){}
  }
  return VAR_2;
}
