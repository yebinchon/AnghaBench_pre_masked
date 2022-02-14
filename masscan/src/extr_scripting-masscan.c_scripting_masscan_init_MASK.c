
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lua_State {int dummy; } ;
struct MasscanWrapper {struct Masscan* masscan; } ;
struct TYPE_4__ {struct lua_State* L; } ;
struct Masscan {TYPE_1__ scripting; } ;
struct TYPE_5__ {char* member_0; int * member_1; } ;
typedef TYPE_2__ luaL_Reg ;


 int VAR_0 ;
 int FUNC_0 (struct lua_State*,int ) ;
 int FUNC_1 (struct lua_State*,TYPE_2__ const*,int ) ;
 int FUNC_2 (struct lua_State*,int ) ;
 struct MasscanWrapper* FUNC_3 (struct lua_State*,int) ;
 int FUNC_4 (struct lua_State*,int) ;
 int FUNC_5 (struct lua_State*,int) ;
 int FUNC_6 (struct lua_State*,int,char*) ;
 int FUNC_7 (struct lua_State*,char*) ;


 int FUNC_8 (struct MasscanWrapper*,int ,int) ;

void FUNC_9(struct Masscan *VAR_1)
{
    struct MasscanWrapper *VAR_2;
    struct lua_State *VAR_3 = VAR_1->scripting.L;

    static const luaL_Reg VAR_4[] = {
        {"setconfig", 128},
        {"__gc", 129},
        {((void*)0), ((void*)0)}
    };





    FUNC_0(VAR_3, VAR_0);
    FUNC_5(VAR_3, -1);
    FUNC_6(VAR_3, -2, "__index");
    FUNC_1(VAR_3, VAR_4, 0);
    FUNC_4(VAR_3, 1);


    VAR_2 = FUNC_3(VAR_3, sizeof(*VAR_2));
    FUNC_8(VAR_2, 0, sizeof(*VAR_2));
    VAR_2->masscan = VAR_1;


    FUNC_2(VAR_3, VAR_0);

    FUNC_7(VAR_3, "Masscan");

}
