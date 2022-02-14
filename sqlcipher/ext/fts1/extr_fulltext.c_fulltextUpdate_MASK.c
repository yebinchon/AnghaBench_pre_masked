
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite_int64 ;
typedef int sqlite3_vtab ;
typedef int sqlite3_value ;
typedef int fulltext_vtab ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,char const*,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(sqlite3_vtab *VAR_2, int VAR_3, sqlite3_value **VAR_4,
                   sqlite_int64 *VAR_5){
  fulltext_vtab *VAR_6 = (fulltext_vtab *) VAR_2;

  if( VAR_3<2 ){
    return FUNC_1(VAR_6, FUNC_3(VAR_4[0]));
  }

  if( FUNC_5(VAR_4[0]) != VAR_1 ){
    return VAR_0;
  }

  FUNC_0( VAR_3==3 );
  return FUNC_2(VAR_6, VAR_4[1],
                      (const char *)FUNC_4(VAR_4[2]), VAR_5);
}
