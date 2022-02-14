
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int JsonString ;


 int VAR_0 ;
 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  int VAR_4;
  JsonString VAR_5;

  FUNC_3(&VAR_5, VAR_1);
  FUNC_0(&VAR_5, '[');
  for(VAR_4=0; VAR_4<VAR_2; VAR_4++){
    FUNC_1(&VAR_5);
    FUNC_2(&VAR_5, VAR_3[VAR_4]);
  }
  FUNC_0(&VAR_5, ']');
  FUNC_4(&VAR_5);
  FUNC_5(VAR_1, VAR_0);
}
