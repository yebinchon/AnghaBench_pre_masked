
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int Fts3Cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(
  sqlite3_context *VAR_2,
  const char *VAR_3,
  sqlite3_value *VAR_4,
  Fts3Cursor **VAR_5
){
  int VAR_6;
  *VAR_5 = (Fts3Cursor*)FUNC_3(VAR_4, "fts3cursor");
  if( (*VAR_5)!=0 ){
    VAR_6 = VAR_1;
  }else{
    char *VAR_7 = FUNC_1("illegal first argument to %s", VAR_3);
    FUNC_2(VAR_2, VAR_7, -1);
    FUNC_0(VAR_7);
    VAR_6 = VAR_0;
  }
  return VAR_6;
}
