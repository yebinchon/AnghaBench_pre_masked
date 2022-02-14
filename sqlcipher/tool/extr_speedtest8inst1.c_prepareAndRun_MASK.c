
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_vfs ;
typedef scalar_t__ sqlite3_uint64 ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,scalar_t__,int,char const*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char const*,int,int **,char const**) ;
 int FUNC_5 (int,char*,char*,char const*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(sqlite3_vfs *VAR_5, sqlite3 *VAR_6, const char *VAR_7){
  sqlite3_stmt *VAR_8;
  const char *VAR_9;
  int VAR_10;
  char VAR_11[1024];
  VAR_11[1023] = '\0';

  sqlite3_uint64 VAR_12;

  FUNC_5(1023, VAR_11, "sqlite3_prepare_v2: %s", VAR_7);
  FUNC_3(VAR_5, VAR_11);

  VAR_12 = FUNC_0();
  VAR_10 = FUNC_4(VAR_6, VAR_7, -1, &VAR_8, &VAR_9);
  VAR_12 = FUNC_0() - VAR_12;
  FUNC_2(VAR_5,VAR_1,VAR_12,VAR_10,VAR_7);

  if( VAR_10==VAR_3 ){
    int VAR_13 = 0;

    FUNC_5(1023, VAR_11, "sqlite3_step loop: %s", VAR_7);
    FUNC_3(VAR_5, VAR_11);
    VAR_12 = FUNC_0();
    while( (VAR_10=FUNC_6(VAR_8))==VAR_4 ){ VAR_13++; }
    VAR_12 = FUNC_0() - VAR_12;
    FUNC_2(VAR_5, VAR_2, VAR_12, VAR_10, VAR_7);

    FUNC_5(1023, VAR_11, "sqlite3_finalize: %s", VAR_7);
    FUNC_3(VAR_5, VAR_11);
    VAR_12 = FUNC_0();
    VAR_10 = FUNC_1(VAR_8);
    VAR_12 = FUNC_0() - VAR_12;
    FUNC_2(VAR_5, VAR_0, VAR_12, VAR_10, VAR_7);
  }
}
