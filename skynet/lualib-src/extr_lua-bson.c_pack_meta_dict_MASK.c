
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bson {scalar_t__ size; } ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,struct bson*,int,int) ;
 int FUNC_6 (struct bson*) ;
 int FUNC_7 (struct bson*,int ) ;
 int FUNC_8 (struct bson*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_9(lua_State *VAR_1, struct bson *VAR_2, int VAR_3) {
 int VAR_4 = FUNC_6(VAR_2);

 FUNC_3(VAR_1, -2);
 FUNC_0(VAR_1, 1, 3);
 for(;;) {
  FUNC_3(VAR_1, -2);
  FUNC_3(VAR_1, -2);
  FUNC_1(VAR_1, -5, -3);
  FUNC_0(VAR_1, 2, 2);

  int VAR_5 = FUNC_4(VAR_1, -2);
  if (VAR_5 == VAR_0) {
   FUNC_2(VAR_1, 4);
   break;
  }
  FUNC_5(VAR_1, VAR_2, VAR_3, VAR_5);
 }
 FUNC_7(VAR_2,0);
 FUNC_8(VAR_2, VAR_2->size - VAR_4, VAR_4);
}
