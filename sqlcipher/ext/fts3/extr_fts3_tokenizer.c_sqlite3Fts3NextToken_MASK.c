
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

const char *FUNC_1(const char *VAR_0, int *VAR_1){
  const char *VAR_2;
  const char *VAR_3 = 0;


  VAR_2 = VAR_0;
  while( VAR_3==0 ){
    char VAR_4 = *VAR_2;
    switch( VAR_4 ){
      case '\0': return 0;
      case '\'':
      case '"':
      case '`': {
        VAR_3 = VAR_2;
        while( *++VAR_3 && (*VAR_3!=VAR_4 || *++VAR_3==VAR_4) );
        break;
      }
      case '[':
        VAR_3 = &VAR_2[1];
        while( *VAR_3 && VAR_3[0]!=']' ) VAR_3++;
        if( *VAR_3 ) VAR_3++;
        break;

      default:
        if( FUNC_0(*VAR_2) ){
          VAR_3 = &VAR_2[1];
          while( FUNC_0(*VAR_3) ) VAR_3++;
        }else{
          VAR_2++;
        }
    }
  }

  *VAR_1 = (int)(VAR_3-VAR_2);
  return VAR_2;
}
