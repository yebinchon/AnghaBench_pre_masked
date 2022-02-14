
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0){
  const char *VAR_1 = VAR_0;

  while( 1 ){
    VAR_1 = FUNC_1(VAR_1);
    VAR_1 = FUNC_0(VAR_1);
    VAR_1 = FUNC_1(VAR_1);
    if( VAR_1==0 || *VAR_1==')' ) break;
    if( *VAR_1!=',' ){
      VAR_1 = 0;
      break;
    }
    VAR_1++;
  }

  return VAR_1;
}
