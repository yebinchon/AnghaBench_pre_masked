
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,char const*,char**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*,int,int ) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  if( VAR_3!=1 && VAR_3!=2 ){
    FUNC_3(VAR_2,
        "wrong number of arguments to function rtreecheck()", -1
    );
  }else{
    int VAR_5;
    char *VAR_6 = 0;
    const char *VAR_7 = (const char*)FUNC_6(VAR_4[0]);
    const char *VAR_8;
    if( VAR_3==1 ){
      VAR_8 = VAR_7;
      VAR_7 = "main";
    }else{
      VAR_8 = (const char*)FUNC_6(VAR_4[1]);
    }
    VAR_5 = FUNC_0(FUNC_1(VAR_2), VAR_7, VAR_8, &VAR_6);
    if( VAR_5==VAR_0 ){
      FUNC_5(VAR_2, VAR_6 ? VAR_6 : "ok", -1, VAR_1);
    }else{
      FUNC_4(VAR_2, VAR_5);
    }
    FUNC_2(VAR_6);
  }
}
