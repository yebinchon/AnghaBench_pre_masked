
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int,char const*,int,char*) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int *,char*,int,int (*) (char*)) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  const char *VAR_3;
  int VAR_4;
  const char *VAR_5;
  int VAR_6;

  int VAR_7;
  int VAR_8;
  char *VAR_9;

  FUNC_0( VAR_1==2 );

  VAR_6 = FUNC_9(VAR_2[0]);
  VAR_5 = (const char*)FUNC_8(VAR_2[0]);
  VAR_4 = FUNC_9(VAR_2[1]);
  VAR_3 = (const char*)FUNC_8(VAR_2[1]);


  VAR_7 = FUNC_2(VAR_3, VAR_4);
  if( VAR_7<0 ){
    FUNC_6(VAR_0, "corrupt fossil delta", -1);
    return;
  }

  VAR_9 = FUNC_4(VAR_7+1);
  if( VAR_9==0 ){
    FUNC_7(VAR_0);
  }else{
    VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_3, VAR_4, VAR_9);
    if( VAR_8!=VAR_7 ){
      FUNC_3(VAR_9);
      FUNC_6(VAR_0, "corrupt fossil delta", -1);
    }else{
      FUNC_5(VAR_0, VAR_9, VAR_7, FUNC_3);
    }
  }
}
