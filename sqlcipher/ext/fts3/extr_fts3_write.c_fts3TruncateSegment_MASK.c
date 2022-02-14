
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef scalar_t__ sqlite3_int64 ;
struct TYPE_3__ {char* a; int n; int member_2; int member_1; int member_0; } ;
typedef int Fts3Table ;
typedef TYPE_1__ Blob ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int **,int ) ;
 int FUNC_1 (char const*,int,TYPE_1__*,char const*,int,scalar_t__*) ;
 int FUNC_2 (int *,scalar_t__,char*,int ) ;
 int FUNC_3 (int *,scalar_t__,char**,int*,int ) ;
 int FUNC_4 (int *,int,char*,int ,int ) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int,scalar_t__) ;
 int FUNC_7 (int *,int) ;
 char* FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(
  Fts3Table *VAR_6,
  sqlite3_int64 VAR_7,
  int VAR_8,
  const char *VAR_9,
  int VAR_10
){
  int VAR_11 = VAR_0;
  Blob VAR_12 = {0,0,0};
  Blob VAR_13 = {0,0,0};
  sqlite3_int64 VAR_14 = 0;
  sqlite3_int64 VAR_15 = 0;
  sqlite3_int64 VAR_16 = 0;
  sqlite3_stmt *VAR_17 = 0;

  VAR_11 = FUNC_0(VAR_6, VAR_5, &VAR_17, 0);
  if( VAR_11==VAR_0 ){
    int VAR_18;
    FUNC_6(VAR_17, 1, VAR_7);
    FUNC_5(VAR_17, 2, VAR_8);
    if( VAR_1==FUNC_13(VAR_17) ){
      const char *VAR_19 = FUNC_8(VAR_17, 4);
      int VAR_20 = FUNC_9(VAR_17, 4);
      VAR_16 = FUNC_10(VAR_17, 1);
      VAR_11 = FUNC_1(VAR_19, VAR_20, &VAR_12, VAR_9, VAR_10, &VAR_14);
    }
    VAR_18 = FUNC_12(VAR_17);
    if( VAR_11==VAR_0 ) VAR_11 = VAR_18;
  }

  while( VAR_11==VAR_0 && VAR_14 ){
    char *VAR_21 = 0;
    int VAR_22 = 0;
    VAR_15 = VAR_14;

    VAR_11 = FUNC_3(VAR_6, VAR_14, &VAR_21, &VAR_22, 0);
    if( VAR_11==VAR_0 ){
      VAR_11 = FUNC_1(VAR_21, VAR_22, &VAR_13, VAR_9, VAR_10, &VAR_14);
    }
    if( VAR_11==VAR_0 ){
      VAR_11 = FUNC_2(VAR_6, VAR_15, VAR_13.a, VAR_13.n);
    }
    FUNC_11(VAR_21);
  }


  if( VAR_11==VAR_0 && VAR_15 ){
    sqlite3_stmt *VAR_23 = 0;
    VAR_11 = FUNC_0(VAR_6, VAR_4, &VAR_23, 0);
    if( VAR_11==VAR_0 ){
      FUNC_6(VAR_23, 1, VAR_16);
      FUNC_6(VAR_23, 2, VAR_15-1);
      FUNC_13(VAR_23);
      VAR_11 = FUNC_12(VAR_23);
    }
  }

  if( VAR_11==VAR_0 ){
    sqlite3_stmt *VAR_24 = 0;
    VAR_11 = FUNC_0(VAR_6, VAR_3, &VAR_24, 0);
    if( VAR_11==VAR_0 ){
      FUNC_6(VAR_24, 1, VAR_15);
      FUNC_4(VAR_24, 2, VAR_12.a, VAR_12.n, VAR_2);
      FUNC_6(VAR_24, 3, VAR_7);
      FUNC_5(VAR_24, 4, VAR_8);
      FUNC_13(VAR_24);
      VAR_11 = FUNC_12(VAR_24);
      FUNC_7(VAR_24, 2);
    }
  }

  FUNC_11(VAR_12.a);
  FUNC_11(VAR_13.a);
  return VAR_11;
}
