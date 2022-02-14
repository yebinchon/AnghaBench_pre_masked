
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int JsonString ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,scalar_t__) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  int VAR_5;
  JsonString VAR_6;
  const char *VAR_7;
  u32 VAR_8;

  if( VAR_3&1 ){
    FUNC_7(VAR_2, "json_object() requires an even number "
                                  "of arguments", -1);
    return;
  }
  FUNC_4(&VAR_6, VAR_2);
  FUNC_0(&VAR_6, '{');
  for(VAR_5=0; VAR_5<VAR_3; VAR_5+=2){
    if( FUNC_11(VAR_4[VAR_5])!=VAR_1 ){
      FUNC_7(VAR_2, "json_object() labels must be TEXT", -1);
      FUNC_5(&VAR_6);
      return;
    }
    FUNC_1(&VAR_6);
    VAR_7 = (const char*)FUNC_10(VAR_4[VAR_5]);
    VAR_8 = (u32)FUNC_9(VAR_4[VAR_5]);
    FUNC_2(&VAR_6, VAR_7, VAR_8);
    FUNC_0(&VAR_6, ':');
    FUNC_3(&VAR_6, VAR_4[VAR_5+1]);
  }
  FUNC_0(&VAR_6, '}');
  FUNC_6(&VAR_6);
  FUNC_8(VAR_2, VAR_0);
}
