
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_int64 ;


 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static char *FUNC_2(char const *VAR_0){
  sqlite3_int64 VAR_1;
  char *VAR_2;
  VAR_1 = 2 + (int)FUNC_1(VAR_0)*2 + 1;
  VAR_2 = FUNC_0(VAR_1);
  if( VAR_2 ){
    int VAR_3;
    char *VAR_4 = VAR_2;
    *(VAR_4++) = '"';
    for(VAR_3=0; VAR_0[VAR_3]; VAR_3++){
      if( VAR_0[VAR_3]=='"' ) *(VAR_4++) = '"';
      *(VAR_4++) = VAR_0[VAR_3];
    }
    *(VAR_4++) = '"';
    *(VAR_4++) = '\0';
  }
  return VAR_2;
}
