
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite_int64 ;
typedef int sqlite3_stmt ;
typedef int fulltext_vtab ;
typedef int LeavesReader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int ,int ,char const*,int,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int **) ;
 int FUNC_5 (int *,int,int) ;
 char* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(fulltext_vtab *VAR_5, int VAR_6,
                             LeavesReader *VAR_7, int *VAR_8){
  sqlite3_stmt *VAR_9;
  int VAR_10, VAR_11 = FUNC_4(VAR_5, VAR_1, &VAR_9);
  if( VAR_11!=VAR_3 ) return VAR_11;

  VAR_11 = FUNC_5(VAR_9, 1, VAR_6);
  if( VAR_11!=VAR_3 ) return VAR_11;

  VAR_10 = 0;
  while( (VAR_11 = FUNC_9(VAR_9))==VAR_4 ){
    sqlite_int64 VAR_12 = FUNC_8(VAR_9, 0);
    sqlite_int64 VAR_13 = FUNC_8(VAR_9, 1);
    const char *VAR_14 = FUNC_6(VAR_9, 2);
    int VAR_15 = FUNC_7(VAR_9, 2);

    FUNC_0( VAR_10<VAR_0 );
    VAR_11 = FUNC_2(VAR_5, VAR_10, VAR_12, VAR_13, VAR_14, VAR_15,
                          &VAR_7[VAR_10]);
    if( VAR_11!=VAR_3 ) break;

    VAR_10++;
  }
  if( VAR_11!=VAR_2 ){
    while( VAR_10-->0 ){
      FUNC_1(&VAR_7[VAR_10]);
    }
    return VAR_11;
  }

  *VAR_8 = VAR_10;


  while( VAR_10-- ){
    FUNC_3(VAR_7+VAR_10, *VAR_8-VAR_10);
  }
  return VAR_3;
}
