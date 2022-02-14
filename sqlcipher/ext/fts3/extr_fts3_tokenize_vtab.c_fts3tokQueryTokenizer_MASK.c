
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_tokenizer_module ;
typedef int Fts3Hash ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,char const*) ;
 scalar_t__ FUNC_1 (int *,char const*,int) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(
  Fts3Hash *VAR_2,
  const char *VAR_3,
  const sqlite3_tokenizer_module **VAR_4,
  char **VAR_5
){
  sqlite3_tokenizer_module *VAR_6;
  int VAR_7 = (int)FUNC_2(VAR_3);

  VAR_6 = (sqlite3_tokenizer_module *)FUNC_1(VAR_2, VAR_3, VAR_7+1);
  if( !VAR_6 ){
    FUNC_0(VAR_5, "unknown tokenizer: %s", VAR_3);
    return VAR_0;
  }

  *VAR_4 = VAR_6;
  return VAR_1;
}
