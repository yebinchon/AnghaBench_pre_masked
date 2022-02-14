
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static void FUNC_7(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  int VAR_4;
  const char *VAR_5;
  char *VAR_6;
  FUNC_0( VAR_2==1 );
  VAR_4 = FUNC_4(VAR_3[0]);
  VAR_5 = (const char*)FUNC_5(VAR_3[0]);
  VAR_6 = FUNC_1( VAR_4/2 );
  if( VAR_6==0 ){
    FUNC_2(VAR_1);
  }else{
    FUNC_6(VAR_5, VAR_6);
    FUNC_3(VAR_1, VAR_6, VAR_4/2, VAR_0);
  }
}
