
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int,char const*,int,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int *,char*,int,int (*) (char*)) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  const char *VAR_4; int VAR_5;
  const char *VAR_6; int VAR_7;
  char *VAR_8; int VAR_9;

  FUNC_0( VAR_2==2 );
  if( FUNC_9(VAR_3[0])==VAR_0 ) return;
  if( FUNC_9(VAR_3[1])==VAR_0 ) return;
  VAR_5 = FUNC_8(VAR_3[0]);
  VAR_4 = (const char*)FUNC_7(VAR_3[0]);
  VAR_7 = FUNC_8(VAR_3[1]);
  VAR_6 = (const char*)FUNC_7(VAR_3[1]);
  VAR_8 = FUNC_3(VAR_7+70);
  if( VAR_8==0 ){
    FUNC_6(VAR_1);
  }else{
    VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    if( VAR_9<0 ){
      FUNC_2(VAR_8);
      FUNC_5(VAR_1, "cannot create fossil delta", -1);
    }else{
      FUNC_4(VAR_1, VAR_8, VAR_9, FUNC_2);
    }
  }
}
