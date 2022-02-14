
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
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *,int ,int **) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int,char const*,int,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(fulltext_vtab *VAR_6, const char *VAR_7, int VAR_8,
                       int VAR_9,
                       sqlite_int64 *VAR_10, DocList *VAR_11){
  sqlite3_stmt *VAR_12;
  int VAR_13 = FUNC_1(VAR_6, VAR_5, &VAR_12);
  if( VAR_13!=VAR_2 ) return VAR_13;

  VAR_13 = FUNC_4(VAR_12, 1, VAR_7, VAR_8, VAR_4);
  if( VAR_13!=VAR_2 ) return VAR_13;

  VAR_13 = FUNC_3(VAR_12, 2, VAR_9);
  if( VAR_13!=VAR_2 ) return VAR_13;

  VAR_13 = FUNC_2(VAR_6, VAR_5, &VAR_12);
  if( VAR_13!=VAR_3 ) return VAR_13;

  *VAR_10 = FUNC_7(VAR_12, 0);
  FUNC_0(VAR_11, VAR_0,
              FUNC_5(VAR_12, 1), FUNC_6(VAR_12, 1));



  VAR_13 = FUNC_8(VAR_12);
  return VAR_13==VAR_1 ? VAR_3 : VAR_13;
}
