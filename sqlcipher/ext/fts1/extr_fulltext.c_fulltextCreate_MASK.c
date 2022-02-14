
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_vtab ;
typedef int sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,void*,int,char const* const*,int **,char**) ;
 int FUNC_2 (int *,char const* const,char*) ;

__attribute__((used)) static int FUNC_3(
  sqlite3 *VAR_1,
  void *VAR_2,
  int VAR_3,
  const char * const *VAR_4,
  sqlite3_vtab **VAR_5,
  char **VAR_6
){
  int VAR_7;
  FUNC_0( VAR_3>=3 );
  VAR_7 = FUNC_2(VAR_1, VAR_4[2],
    "create table %_content(content text);"
    "create table %_term(term text, first integer, doclist blob);"
    "create index %_index on %_term(term, first)");
  if( VAR_7!=VAR_0 ) return VAR_7;

  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
