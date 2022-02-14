
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int JsonString ;
typedef int JsonNode ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(
  JsonNode *VAR_1,
  sqlite3_context *VAR_2,
  sqlite3_value **VAR_3
){
  JsonString VAR_4;
  FUNC_0(&VAR_4, VAR_2);
  FUNC_1(VAR_1, &VAR_4, VAR_3);
  FUNC_2(&VAR_4);
  FUNC_3(VAR_2, VAR_0);
}
