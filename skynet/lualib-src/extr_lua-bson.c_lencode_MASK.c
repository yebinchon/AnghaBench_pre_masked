
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bson {int dummy; } ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bson*) ;
 int FUNC_1 (struct bson*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int,int,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,struct bson*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static int
FUNC_10(lua_State *VAR_3) {
 struct bson VAR_4;
 FUNC_9(VAR_3,1);
 FUNC_3(VAR_3, 1, VAR_1);
 FUNC_0(&VAR_4);
 FUNC_6(VAR_3, VAR_2);
 FUNC_8(VAR_3, 1);
 FUNC_7(VAR_3, &VAR_4);
 if (FUNC_5(VAR_3, 2, 1, 0) != VAR_0) {
  FUNC_1(&VAR_4);
  return FUNC_4(VAR_3);
 }
 FUNC_1(&VAR_4);
 FUNC_2(VAR_3);
 return 1;
}
