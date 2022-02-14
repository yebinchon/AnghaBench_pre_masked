
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite_int64 ;
typedef int sqlite3_stmt ;
typedef int fulltext_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(fulltext_vtab *VAR_6, int VAR_7,
                       sqlite_int64 *VAR_8,
                       sqlite_int64 *VAR_9){
  sqlite3_stmt *VAR_10;
  int VAR_11 = FUNC_0(VAR_6, VAR_0, &VAR_10);
  if( VAR_11!=VAR_4 ) return VAR_11;

  VAR_11 = FUNC_1(VAR_10, 1, VAR_7);
  if( VAR_11!=VAR_4 ) return VAR_11;

  VAR_11 = FUNC_4(VAR_10);
  if( VAR_11==VAR_1 ) return VAR_1;
  if( VAR_11!=VAR_5 ) return VAR_11;


  if( VAR_3==FUNC_3(VAR_10, 0) ){


    int VAR_12 = FUNC_4(VAR_10);
    if( VAR_12==VAR_5 ) return VAR_2;
    return VAR_12;
  }

  *VAR_8 = FUNC_2(VAR_10, 0);
  *VAR_9 = FUNC_2(VAR_10, 1);



  VAR_11 = FUNC_4(VAR_10);
  if( VAR_11==VAR_5 ) return VAR_2;
  if( VAR_11!=VAR_1 ) return VAR_11;
  return VAR_5;
}
