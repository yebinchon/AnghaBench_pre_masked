
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bson {int dummy; } ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bson*) ;
 int FUNC_1 (struct bson*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int,int,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,struct bson*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int
FUNC_11(lua_State *VAR_2) {
 struct bson VAR_3;
 int VAR_4 = FUNC_5(VAR_2);
 if (VAR_4%2 != 0) {
  return FUNC_3(VAR_2, "Invalid ordered dict");
 }
 FUNC_0(&VAR_3);
 FUNC_9(VAR_2, 1);
 FUNC_7(VAR_2, VAR_1);
 FUNC_10(VAR_2, 1);
 FUNC_8(VAR_2, &VAR_3);
 if (FUNC_6(VAR_2, VAR_4+1, 1, 0) != VAR_0) {
  FUNC_1(&VAR_3);
  return FUNC_4(VAR_2);
 }
 FUNC_1(&VAR_3);
 FUNC_2(VAR_2);
 return 1;
}
