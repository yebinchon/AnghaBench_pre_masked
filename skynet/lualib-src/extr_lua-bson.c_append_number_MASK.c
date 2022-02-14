
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bson {int dummy; } ;
typedef int lua_State ;
typedef int lua_Number ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bson*,int *,int ,char const*,size_t) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct bson*,int ) ;
 int FUNC_6 (struct bson*,int ) ;
 int FUNC_7 (struct bson*,int ) ;

__attribute__((used)) static void
FUNC_8(struct bson *VAR_3, lua_State *VAR_4, const char *VAR_5, size_t VAR_6) {
 if (FUNC_2(VAR_4, -1)) {
  int64_t VAR_7 = FUNC_3(VAR_4, -1);
  if (FUNC_1(VAR_7)) {
   FUNC_0(VAR_3, VAR_4, VAR_0, VAR_5, VAR_6);
   FUNC_6(VAR_3, VAR_7);
  } else {
   FUNC_0(VAR_3, VAR_4, VAR_1, VAR_5, VAR_6);
   FUNC_7(VAR_3, VAR_7);
  }
 } else {
  lua_Number VAR_8 = FUNC_4(VAR_4,-1);
  FUNC_0(VAR_3, VAR_4, VAR_2, VAR_5, VAR_6);
  FUNC_5(VAR_3, VAR_8);
 }
}
