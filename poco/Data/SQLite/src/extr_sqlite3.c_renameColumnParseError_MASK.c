
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_3__ {int zErrMsg; } ;
typedef TYPE_1__ Parse ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char const*,char const*,char*,int ) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value *VAR_2,
  sqlite3_value *VAR_3,
  Parse *VAR_4
){
  const char *VAR_5 = (const char*)FUNC_3(VAR_2);
  const char *VAR_6 = (const char*)FUNC_3(VAR_3);
  char *VAR_7;

  VAR_7 = FUNC_1("error in %s %s%s: %s",
      VAR_5, VAR_6, (VAR_1 ? " after rename" : ""),
      VAR_4->zErrMsg
  );
  FUNC_2(VAR_0, VAR_7, -1);
  FUNC_0(VAR_7);
}
