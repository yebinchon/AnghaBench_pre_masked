
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ,char**) ;
 int VAR_1 ;
 int FUNC_3 (int *,char*,int,int ) ;

__attribute__((used)) static void FUNC_4(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  sqlite3 *VAR_5 = FUNC_1(VAR_2);
  char *VAR_6 = 0;
  FUNC_0(VAR_3);
  FUNC_0(VAR_4);
  FUNC_2(VAR_5, "main", VAR_0, &VAR_6);
  if( VAR_6 ){
    FUNC_3(VAR_2, VAR_6, -1, VAR_1);
  }
}
