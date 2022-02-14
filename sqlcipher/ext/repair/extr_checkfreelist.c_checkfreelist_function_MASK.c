
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char const*,char**) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*,int,int ) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  const char *VAR_5;
  int VAR_6;
  char *VAR_7 = 0;
  sqlite3 *VAR_8 = FUNC_2(VAR_2);

  FUNC_0( VAR_3==1 );
  VAR_5 = (const char*)FUNC_6(VAR_4[0]);
  VAR_6 = FUNC_1(VAR_8, VAR_5, &VAR_7);
  if( VAR_6==VAR_0 ){
    FUNC_5(VAR_2, VAR_7?VAR_7:"ok", -1, VAR_1);
  }else{
    FUNC_4(VAR_2, VAR_6);
  }

  FUNC_3(VAR_7);
}
