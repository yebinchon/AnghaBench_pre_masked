
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CidxCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*) ;
 char** FUNC_1 (int*,int) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char**) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(
  CidxCursor *VAR_2,
  int VAR_3,
  const char *VAR_4,
  char ***VAR_5
){
  char **VAR_6;
  int VAR_7 = VAR_1;
  int VAR_8 = (int)FUNC_5(VAR_4);

  VAR_6 = FUNC_1(&VAR_7, sizeof(char*)*VAR_3 + VAR_8+1);
  if( VAR_7==VAR_1 ){
    int VAR_9;
    char *VAR_10 = (char*)&VAR_6[VAR_3];
    char *VAR_11 = VAR_10;
    FUNC_3(VAR_10, VAR_4, VAR_8+1);
    for(VAR_9=0; VAR_9<VAR_3; VAR_9++){
      while( *VAR_11==' ' ) VAR_11++;


      if( *VAR_11=='N' ){
        if( FUNC_2(VAR_11, "NULL", 4) ) goto parse_error;
        VAR_11 += 4;
      }


      else if( *VAR_11=='X' || *VAR_11=='\'' ){
        VAR_6[VAR_9] = VAR_11;
        if( *VAR_11=='X' ) VAR_11++;
        if( *VAR_11!='\'' ) goto parse_error;
        VAR_11++;
        while( 1 ){
          if( *VAR_11=='\0' ) goto parse_error;
          if( *VAR_11=='\'' ){
            VAR_11++;
            if( *VAR_11!='\'' ) break;
          }
          VAR_11++;
        }
      }


      else{
        VAR_6[VAR_9] = VAR_11;
        while( (*VAR_11>='0' && *VAR_11<='9')
            || *VAR_11=='.' || *VAR_11=='+' || *VAR_11=='-' || *VAR_11=='e' || *VAR_11=='E'
        ){
          VAR_11++;
        }
      }

      while( *VAR_11==' ' ) VAR_11++;
      if( *VAR_11!=(VAR_9==(VAR_3-1) ? '\0' : ',') ){
        goto parse_error;
      }
      *VAR_11++ = '\0';
    }
  }

  *VAR_5 = VAR_6;
  return VAR_7;

 parse_error:
  FUNC_4(VAR_6);
  *VAR_5 = 0;
  FUNC_0(VAR_2, "%s", "error parsing after value");
  return VAR_0;
}
