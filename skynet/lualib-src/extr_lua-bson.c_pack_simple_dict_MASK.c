
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bson {scalar_t__ size; } ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,struct bson*,int,int) ;
 int FUNC_4 (struct bson*) ;
 int FUNC_5 (struct bson*,int ) ;
 int FUNC_6 (struct bson*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_7(lua_State *VAR_0, struct bson *VAR_1, int VAR_2) {
 int VAR_3 = FUNC_4(VAR_1);
 FUNC_1(VAR_0);
 while(FUNC_0(VAR_0,-2) != 0) {
  int VAR_4 = FUNC_2(VAR_0, -2);
  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_4);
 }
 FUNC_5(VAR_1,0);
 FUNC_6(VAR_1, VAR_1->size - VAR_3, VAR_3);
}
