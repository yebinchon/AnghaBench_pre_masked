
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;

const char *FUNC_1(const char *VAR_2, int VAR_3, const char *VAR_4){
  int VAR_5;
  const char *VAR_6 = VAR_4;
  for(VAR_5=0; VAR_5<VAR_1; VAR_5++){
    const char *VAR_7 = VAR_0[VAR_5];
    while( VAR_7[0]=='-' ) VAR_7++;
    if( FUNC_0(VAR_7, VAR_2)==0 ){
      int VAR_8 = 1;
      if( VAR_3==0 || VAR_5==VAR_1-1 ) VAR_8 = 0;
      VAR_6 = VAR_0[VAR_5+VAR_8];
      while( VAR_5+VAR_8<VAR_1 ){
        VAR_0[VAR_5] = VAR_0[VAR_5+VAR_8+1];
        VAR_5++;
      }
      break;
    }
  }
  return VAR_6;
}
