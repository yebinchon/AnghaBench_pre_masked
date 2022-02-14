
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
typedef int sqlite3_context ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 char* FUNC_5 (char*,int ) ;
 int FUNC_6 (int *,char const*,int,int **,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char*,int,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(
  sqlite3_context *VAR_3,
  int VAR_4,
  sqlite3_value **VAR_5
){
  sqlite3_stmt *VAR_6;
  int VAR_7;
  sqlite3 *VAR_8 = FUNC_2(VAR_3);
  const char *VAR_9;

  VAR_9 = (char*)FUNC_11(VAR_5[0]);
  VAR_7 = FUNC_6(VAR_8, VAR_9, -1, &VAR_6, 0);
  if( VAR_7==VAR_0 ){
    VAR_7 = FUNC_10(VAR_6);
    if( VAR_7==VAR_1 ){
      FUNC_9(VAR_3, FUNC_1(VAR_6, 0));
    }
    VAR_7 = FUNC_4(VAR_6);
  }
  if( VAR_7 ){
    char *VAR_10;
    FUNC_0( VAR_6==0 );
    VAR_10 = FUNC_5("sqlite3_prepare_v2() error: %s",FUNC_3(VAR_8));
    FUNC_8(VAR_3, VAR_10, -1, VAR_2);
    FUNC_7(VAR_3, VAR_7);
  }
}
