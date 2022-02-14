
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;
typedef int sqlite3_blob ;
typedef int sqlite3 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,char const*,char const*,int ,int ,int **) ;
 int FUNC_2 (int *,unsigned char*,int,int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (unsigned char*) ;
 unsigned char* FUNC_5 (int) ;
 int FUNC_6 (int *,unsigned char*,int,int (*) (unsigned char*)) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  sqlite3_blob *VAR_3 = 0;
  const char *VAR_4;
  const char *VAR_5;
  const char *VAR_6;
  sqlite3_int64 VAR_7;
  int VAR_8;
  unsigned char *VAR_9;
  int VAR_10;
  sqlite3 *VAR_11;
  int VAR_12;

  VAR_4 = (const char*)FUNC_11(VAR_2[0]);
  VAR_5 = (const char*)FUNC_11(VAR_2[1]);
  if( VAR_5==0 ){
    FUNC_7(VAR_0, "bad table name", -1);
    return;
  }
  VAR_6 = (const char*)FUNC_11(VAR_2[2]);
  if( VAR_5==0 ){
    FUNC_7(VAR_0, "bad column name", -1);
    return;
  }
  VAR_7 = FUNC_10(VAR_2[3]);
  VAR_8 = FUNC_9(VAR_2[4]);
  VAR_10 = FUNC_9(VAR_2[5]);
  if( VAR_10<=0 ) return;
  VAR_9 = FUNC_5( VAR_10+1 );
  if( VAR_9==0 ){
    FUNC_8(VAR_0);
    return;
  }
  VAR_11 = FUNC_3(VAR_0);
  VAR_12 = FUNC_1(VAR_11, VAR_4, VAR_5, VAR_6, VAR_7, 0, &VAR_3);
  if( VAR_12 ){
    FUNC_4(VAR_9);
    FUNC_7(VAR_0, "cannot open BLOB pointer", -1);
    return;
  }
  VAR_12 = FUNC_2(VAR_3, VAR_9, VAR_10, VAR_8);
  FUNC_0(VAR_3);
  if( VAR_12 ){
    FUNC_4(VAR_9);
    FUNC_7(VAR_0, "BLOB write failed", -1);
  }else{
    FUNC_6(VAR_0, VAR_9, VAR_10, FUNC_4);
  }
}
