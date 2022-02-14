
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int,int,int,char const*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,char const*) ;
 int FUNC_7 (int ,char*,int,int **,int ) ;
 char* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

int FUNC_10(sqlite3_stmt *VAR_4){
  const char *VAR_5;
  char *VAR_6;
  sqlite3_stmt *VAR_7;
  int VAR_8;

  VAR_5 = FUNC_8(VAR_4);
  if( VAR_5==0 ) return VAR_0;

  VAR_6 = FUNC_6("EXPLAIN QUERY PLAN %s", VAR_5);
  if( VAR_6==0 ) return VAR_1;

  VAR_8 = FUNC_7(FUNC_3(VAR_4), VAR_6, -1, &VAR_7, 0);
  FUNC_5(VAR_6);
  if( VAR_8!=VAR_2 ) return VAR_8;

  while( VAR_3==FUNC_9(VAR_7) ){
    int VAR_9 = FUNC_1(VAR_7, 0);
    int VAR_10 = FUNC_1(VAR_7, 1);
    int VAR_11 = FUNC_1(VAR_7, 2);
    const char *VAR_12 = (const char *)FUNC_2(VAR_7, 3);

    FUNC_0("%d %d %d %s\n", VAR_9, VAR_10, VAR_11, VAR_12);
  }

  return FUNC_4(VAR_7);
}
