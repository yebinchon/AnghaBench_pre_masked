
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int,char const*,int,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(fulltext_vtab *VAR_6, const char *VAR_7, int VAR_8,
                           sqlite_int64 VAR_9, sqlite_int64 *VAR_10){
  sqlite3_stmt *VAR_11;
  int VAR_12 = FUNC_0(VAR_6, VAR_5, &VAR_11);
  if( VAR_12!=VAR_2 ) return VAR_12;

  VAR_12 = FUNC_3(VAR_11, 1, VAR_7, VAR_8, VAR_4);
  if( VAR_12!=VAR_2 ) return VAR_12;

  VAR_12 = FUNC_2(VAR_11, 2, VAR_9);
  if( VAR_12!=VAR_2 ) return VAR_12;

  VAR_12 = FUNC_1(VAR_6, VAR_5, &VAR_11);
  if( VAR_12!=VAR_3 ) return VAR_12==VAR_0 ? VAR_1 : VAR_12;

  switch( FUNC_5(VAR_11, 0) ){
    case 128:
      VAR_12 = VAR_0;
      break;
    case 129:
     *VAR_10 = FUNC_4(VAR_11, 0);
     break;
    default:
      return VAR_1;
  }


  if( FUNC_6(VAR_11) != VAR_0 ) return VAR_1;
  return VAR_12;
}
