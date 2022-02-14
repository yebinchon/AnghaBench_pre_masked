
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i64 ;


 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static i64 FUNC_1(char *VAR_0, char **VAR_1, int *VAR_2){
  i64 VAR_3 = 0;
  if( *VAR_2==0 ){
    char *VAR_4 = VAR_0;

    if( !FUNC_0(*VAR_4) ){
      *VAR_2 = 1;
      return 0;
    }


    while( FUNC_0(*VAR_4) ){
      VAR_3 = VAR_3*10 + (*VAR_4 - '0');
      VAR_4++;
    }


    switch( *VAR_4 ){
      case 'k': case 'K':
        VAR_3 = VAR_3 * 1024;
        VAR_4++;
        break;

      case 'm': case 'M':
        VAR_3 = VAR_3 * 1024 * 1024;
        VAR_4++;
        break;

      case 'g': case 'G':
        VAR_3 = VAR_3 * 1024 * 1024 * 1024;
        VAR_4++;
        break;
    }

    if( VAR_1 ) *VAR_1 = VAR_4;
  }
  return VAR_3;
}
