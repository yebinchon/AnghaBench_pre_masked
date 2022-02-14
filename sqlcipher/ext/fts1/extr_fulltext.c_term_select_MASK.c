
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite_int64 ;
typedef int sqlite3_stmt ;
typedef int fulltext_vtab ;
typedef int DocList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *,int ,int **) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int,char const*,int,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(fulltext_vtab *VAR_7, const char *VAR_8, int VAR_9,
                       sqlite_int64 VAR_10,
                       sqlite_int64 *VAR_11,
                       DocList *VAR_12){
  sqlite3_stmt *VAR_13;
  int VAR_14 = FUNC_1(VAR_7, VAR_6, &VAR_13);
  if( VAR_14!=VAR_3 ) return VAR_14;

  VAR_14 = FUNC_4(VAR_13, 1, VAR_8, VAR_9, VAR_5);
  if( VAR_14!=VAR_3 ) return VAR_14;

  VAR_14 = FUNC_3(VAR_13, 2, VAR_10);
  if( VAR_14!=VAR_3 ) return VAR_14;

  VAR_14 = FUNC_2(VAR_7, VAR_6, &VAR_13);
  if( VAR_14!=VAR_4 ) return VAR_14==VAR_1 ? VAR_2 : VAR_14;

  *VAR_11 = FUNC_7(VAR_13, 0);
  FUNC_0(VAR_12, VAR_0,
              FUNC_5(VAR_13, 1), FUNC_6(VAR_13, 1));



  VAR_14 = FUNC_8(VAR_13);
  return VAR_14==VAR_1 ? VAR_3 : VAR_14;
}
