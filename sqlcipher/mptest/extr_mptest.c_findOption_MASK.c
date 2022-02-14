
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static char *FUNC_3(
  char **VAR_0,
  int *VAR_1,
  const char *VAR_2,
  int VAR_3
){
  int VAR_4, VAR_5;
  char *VAR_6 = 0;
  int VAR_7 = *VAR_1;

  FUNC_0( VAR_3==0 || VAR_3==1 );
  for(VAR_4=0; VAR_4<VAR_7; VAR_4++){
    const char *VAR_8;
    if( VAR_4+VAR_3 >= VAR_7 ) break;
    VAR_8 = VAR_0[VAR_4];
    if( VAR_8[0]!='-' ) continue;
    VAR_8++;
    if( VAR_8[0]=='-' ){
      if( VAR_8[1]==0 ) break;
      VAR_8++;
    }
    if( FUNC_2(VAR_8,VAR_2)==0 ){
      if( VAR_3 && VAR_4==VAR_7-1 ){
        FUNC_1("command-line option \"--%s\" requires an argument", VAR_8);
      }
      if( VAR_3 ){
        VAR_6 = VAR_0[VAR_4+1];
      }else{
        VAR_6 = VAR_0[VAR_4];
      }
      VAR_5 = VAR_4+1+(VAR_3!=0);
      while( VAR_5<VAR_7 ) VAR_0[VAR_4++] = VAR_0[VAR_5++];
      *VAR_1 = VAR_4;
      return VAR_6;
    }
  }
  return VAR_6;
}
