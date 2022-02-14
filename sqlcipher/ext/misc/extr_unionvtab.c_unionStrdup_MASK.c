
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite3_int64 ;


 int FUNC_0 (char*,char const*,size_t) ;
 scalar_t__ FUNC_1 (char const*) ;
 char* FUNC_2 (int*,scalar_t__) ;

__attribute__((used)) static char *FUNC_3(int *VAR_0, const char *VAR_1){
  char *VAR_2 = 0;
  if( VAR_1 ){
    sqlite3_int64 VAR_3 = FUNC_1(VAR_1) + 1;
    VAR_2 = FUNC_2(VAR_0, VAR_3);
    if( VAR_2 ){
      FUNC_0(VAR_2, VAR_1, (size_t)VAR_3);
    }
  }
  return VAR_2;
}
