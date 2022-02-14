
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite_uint64 ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,int,int **,char const**) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(sqlite3 *VAR_5, const char *VAR_6, int VAR_7){
  sqlite3_stmt *VAR_8;
  const char *VAR_9;
  sqlite_uint64 VAR_10, VAR_11;
  int VAR_12;

  if (!VAR_7){
    FUNC_0("***************************************************************\n");
  }
  if (!VAR_7) FUNC_0("SQL statement: [%s]\n", VAR_6);
  VAR_10 = FUNC_1();
  VAR_12 = FUNC_3(VAR_5, VAR_6, -1, &VAR_8, &VAR_9);
  VAR_11 = FUNC_1() - VAR_10;
  VAR_3 += VAR_11;
  if (!VAR_7){
    FUNC_0("sqlite3_prepare_v2() returns %d in %llu cycles\n", VAR_12, VAR_11);
  }
  if( VAR_12==VAR_0 ){
    int VAR_13 = 0;
    VAR_10 = FUNC_1();
    while( (VAR_12=FUNC_4(VAR_8))==VAR_1 ){ VAR_13++; }
    VAR_11 = FUNC_1() - VAR_10;
    VAR_4 += VAR_11;
    if (!VAR_7){
      FUNC_0("sqlite3_step() returns %d after %d rows in %llu cycles\n",
             VAR_12, VAR_13, VAR_11);
    }
    VAR_10 = FUNC_1();
    VAR_12 = FUNC_2(VAR_8);
    VAR_11 = FUNC_1() - VAR_10;
    VAR_2 += VAR_11;
    if (!VAR_7){
      FUNC_0("sqlite3_finalize() returns %d in %llu cycles\n", VAR_12, VAR_11);
    }
  }
}
