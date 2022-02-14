
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int sqlite3 ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char const*,char const*,char**) ;
 int FUNC_3 (int *,char*,int) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(sqlite3_context *VAR_0, int VAR_1, sqlite3_value **VAR_2){
  const char *VAR_3 = (const char *)FUNC_4(VAR_2[0]);
  const char *VAR_4;
  sqlite3 *VAR_5 = FUNC_0(VAR_0);
  char *VAR_6 = 0;

  if( VAR_1==2 ){
    VAR_4 = (const char *)FUNC_4(VAR_2[1]);
  }else{
    VAR_4 = 0;
  }
  if( VAR_3 && FUNC_2(VAR_5, VAR_3, VAR_4, &VAR_6) ){
    FUNC_3(VAR_0, VAR_6, -1);
    FUNC_1(VAR_6);
  }
}
