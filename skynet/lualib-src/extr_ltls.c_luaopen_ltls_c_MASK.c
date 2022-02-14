
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {char* member_0; int * member_1; } ;
typedef TYPE_1__ luaL_Reg ;


 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;

int
FUNC_2(lua_State* VAR_2) {
    luaL_Reg VAR_3[] = {
        {"newctx", VAR_0},
        {"newtls", VAR_1},
        {((void*)0), ((void*)0)},
    };
    FUNC_0(VAR_2);
    FUNC_1(VAR_2, VAR_3);
    return 1;
}
