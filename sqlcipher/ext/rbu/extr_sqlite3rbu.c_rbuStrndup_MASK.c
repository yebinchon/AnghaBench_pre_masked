
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_2, int *VAR_3){
  char *VAR_4 = 0;

  FUNC_0( *VAR_3==VAR_1 );
  if( VAR_2 ){
    size_t VAR_5 = FUNC_3(VAR_2) + 1;
    VAR_4 = (char*)FUNC_2(VAR_5);
    if( VAR_4 ){
      FUNC_1(VAR_4, VAR_2, VAR_5);
    }else{
      *VAR_3 = VAR_0;
    }
  }

  return VAR_4;
}
