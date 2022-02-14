
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0){
  const char *VAR_1 = VAR_0;
  switch( *VAR_1 ){
    case 'n': case 'N':
      if( FUNC_1("null", VAR_1, 4)==0 ){
        VAR_1 = &VAR_1[4];
      }else{
        VAR_1 = 0;
      }
      break;

    case 'x': case 'X':
      VAR_1++;
      if( *VAR_1=='\'' ){
        VAR_1++;
        while( (*VAR_1>='a' && *VAR_1<='f')
            || (*VAR_1>='A' && *VAR_1<='F')
            || (*VAR_1>='0' && *VAR_1<='9')
            ){
          VAR_1++;
        }
        if( *VAR_1=='\'' && 0==((VAR_1-VAR_0)%2) ){
          VAR_1++;
        }else{
          VAR_1 = 0;
        }
      }else{
        VAR_1 = 0;
      }
      break;

    case '\'':
      VAR_1++;
      while( VAR_1 ){
        if( *VAR_1=='\'' ){
          VAR_1++;
          if( *VAR_1!='\'' ) break;
        }
        VAR_1++;
        if( *VAR_1==0 ) VAR_1 = 0;
      }
      break;

    default:

      if( *VAR_1=='+' || *VAR_1=='-' ) VAR_1++;
      while( FUNC_0(*VAR_1) ) VAR_1++;




      if( *VAR_1=='.' && FUNC_0(VAR_1[1]) ){
        VAR_1 += 2;
        while( FUNC_0(*VAR_1) ) VAR_1++;
      }
      if( VAR_1==VAR_0 ) VAR_1 = 0;

      break;
  }

  return VAR_1;
}
