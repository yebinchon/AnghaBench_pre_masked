
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite_int64 ;
typedef int sqlite3_value ;
typedef int fulltext_vtab ;


 int VAR_0 ;
 int FUNC_0 (int *,int **,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int **) ;

__attribute__((used)) static int FUNC_4(fulltext_vtab *VAR_1, sqlite_int64 VAR_2,
                        sqlite3_value **VAR_3){
  int VAR_4 = FUNC_2(VAR_1, VAR_2);
  if( VAR_4!=VAR_0 ) return VAR_4;



  VAR_4 = FUNC_1(VAR_1, VAR_2);
  if( VAR_4!=VAR_0 ) return VAR_4;

  VAR_4 = FUNC_0(VAR_1, VAR_3, VAR_2);
  if( VAR_4!=VAR_0 ) return VAR_4;


  return FUNC_3(VAR_1, VAR_2, VAR_3);
}
