
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const) ;

__attribute__((used)) static int FUNC_2(
  const char *VAR_4,
  const char **VAR_5,
  int *VAR_6
){
  const char *VAR_7 = VAR_4;

  while( 1 ){
    while( FUNC_1(*VAR_7) ) VAR_7++;
    if( VAR_7[0]=='-' && VAR_7[1]=='-' ){
      VAR_7 += 2;
      while( VAR_7[0]!='\n' ){
        if( VAR_7[0]=='\0' ) return VAR_2;
        VAR_7++;
      }
      while( FUNC_1(*VAR_7) ) VAR_7++;
      if( VAR_6 ) *VAR_6 = 1;
    }else
    if( VAR_7[0]=='/' && VAR_7[1]=='*' ){
      VAR_7 += 2;
      while( VAR_7[0]!='*' || VAR_7[1]!='/' ){
        if( VAR_7[1]=='\0' ) return VAR_2;
        VAR_7++;
      }
      VAR_7 += 2;
    }else{
      *VAR_5 = VAR_7;
      if( VAR_6==0 ) return VAR_2;
      switch( *VAR_7 ){
        case '\0':
          return VAR_2;
        case '(':
          return VAR_3;
        case ')':
          return VAR_0;
        case ',':
          return VAR_1;

        case '"':
        case '\'':
        case '`': {
          char VAR_8 = *VAR_7;
          VAR_7++;
          while( *VAR_7 ){
            if( *VAR_7==VAR_8 ){
              VAR_7++;
              if( *VAR_7!=VAR_8 ) break;
            }
            VAR_7++;
          }
          break;
        }

        case '[':
          while( *VAR_7++!=']' );
          break;

        default:
          VAR_7++;
          break;
      }
      *VAR_6 = 0;
    }
  }

  FUNC_0( 0 );
  return -1;
}
