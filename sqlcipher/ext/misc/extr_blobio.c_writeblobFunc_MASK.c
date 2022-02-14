
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;
typedef int sqlite3_blob ;
typedef int sqlite3 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,char const*,char const*,int ,int,int **) ;
 int FUNC_2 (int *,unsigned char*,int,int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  sqlite3_blob *VAR_4 = 0;
  const char *VAR_5;
  const char *VAR_6;
  const char *VAR_7;
  sqlite3_int64 VAR_8;
  int VAR_9;
  unsigned char *VAR_10;
  int VAR_11;
  sqlite3 *VAR_12;
  int VAR_13;

  VAR_5 = (const char*)FUNC_9(VAR_3[0]);
  VAR_6 = (const char*)FUNC_9(VAR_3[1]);
  if( VAR_6==0 ){
    FUNC_4(VAR_1, "bad table name", -1);
    return;
  }
  VAR_7 = (const char*)FUNC_9(VAR_3[2]);
  if( VAR_6==0 ){
    FUNC_4(VAR_1, "bad column name", -1);
    return;
  }
  VAR_8 = FUNC_8(VAR_3[3]);
  VAR_9 = FUNC_7(VAR_3[4]);
  if( FUNC_10(VAR_3[5])!=VAR_0 ){
    FUNC_4(VAR_1, "6th argument must be a BLOB", -1);
    return;
  }
  VAR_11 = FUNC_6(VAR_3[5]);
  VAR_10 = (unsigned char *)FUNC_5(VAR_3[5]);
  VAR_12 = FUNC_3(VAR_1);
  VAR_13 = FUNC_1(VAR_12, VAR_5, VAR_6, VAR_7, VAR_8, 1, &VAR_4);
  if( VAR_13 ){
    FUNC_4(VAR_1, "cannot open BLOB pointer", -1);
    return;
  }
  VAR_13 = FUNC_2(VAR_4, VAR_10, VAR_11, VAR_9);
  FUNC_0(VAR_4);
  if( VAR_13 ){
    FUNC_4(VAR_1, "BLOB write failed", -1);
  }
}
