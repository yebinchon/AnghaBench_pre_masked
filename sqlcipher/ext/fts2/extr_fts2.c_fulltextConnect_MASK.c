
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_vtab ;
typedef int sqlite3 ;
typedef int fts2Hash ;
typedef int TableSpec ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *,int **,char**) ;
 int FUNC_2 (int *,int,char const* const*,char**) ;

__attribute__((used)) static int FUNC_3(
  sqlite3 *VAR_1,
  void *VAR_2,
  int VAR_3, const char *const*VAR_4,
  sqlite3_vtab **VAR_5,
  char **VAR_6
){
  TableSpec VAR_7;
  int VAR_8 = FUNC_2(&VAR_7, VAR_3, VAR_4, VAR_6);
  if( VAR_8!=VAR_0 ) return VAR_8;

  VAR_8 = FUNC_1(VAR_1, (fts2Hash *)VAR_2, &VAR_7, VAR_5, VAR_6);
  FUNC_0(&VAR_7);
  return VAR_8;
}
