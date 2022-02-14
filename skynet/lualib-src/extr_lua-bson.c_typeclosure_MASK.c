
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int typename ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static void
FUNC_2(lua_State *VAR_1) {
 static const char * VAR_2[] = {
  "number",
  "boolean",
  "table",
  "nil",
  "string",
  "binary",
  "objectid",
  "timestamp",
  "date",
  "regex",
  "minkey",
  "maxkey",
  "unsupported",
 };
 int VAR_3;
 int VAR_4 = sizeof(VAR_2)/sizeof(VAR_2[0]);
 for (VAR_3=0;VAR_3<VAR_4;VAR_3++) {
  FUNC_1(VAR_1,VAR_2[VAR_3]);
 }
 FUNC_0(VAR_1, VAR_0, VAR_4);
}
