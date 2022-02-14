
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel_box {int * c; } ;
typedef int lua_State ;


 int * FUNC_0 (int *) ;
 struct channel_box* FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(lua_State *VAR_0) {
 struct channel_box *VAR_1 = FUNC_1(VAR_0, 1);
 if (VAR_1) {
  if (FUNC_0(VAR_1->c) == ((void*)0)) {
   VAR_1->c = ((void*)0);
  }
 }

 return 0;
}
