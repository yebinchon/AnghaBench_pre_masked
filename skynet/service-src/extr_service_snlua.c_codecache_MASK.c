
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {char* member_0; int * member_1; } ;
typedef TYPE_1__ luaL_Reg ;


 int * VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int,char*) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_1) {
 luaL_Reg VAR_2[] = {
  { "clear", VAR_0 },
  { "mode", VAR_0 },
  { ((void*)0), ((void*)0) },
 };
 FUNC_0(VAR_1,VAR_2);
 FUNC_1(VAR_1, "loadfile");
 FUNC_2(VAR_1, -2, "loadfile");
 return 1;
}
