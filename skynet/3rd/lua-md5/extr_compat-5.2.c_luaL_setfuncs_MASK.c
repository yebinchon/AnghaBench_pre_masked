
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int func; int * name; } ;
typedef TYPE_1__ luaL_Reg ;


 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;

void FUNC_6 (lua_State *VAR_0, const luaL_Reg *VAR_1, int VAR_2) {
  FUNC_0(VAR_0, VAR_2+1, "too many upvalues");
  for (; VAR_1->name != ((void*)0); VAR_1++) {
    int VAR_3;
    FUNC_3(VAR_0, VAR_1->name);
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
      FUNC_4(VAR_0, -(VAR_2 + 1));
    FUNC_2(VAR_0, VAR_1->func, VAR_2);
    FUNC_5(VAR_0, -(VAR_2 + 3));
  }
  FUNC_1(VAR_0, VAR_2);
}
