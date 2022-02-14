
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lua_State {int dummy; } ;
struct Banner1 {struct lua_State* L; } ;
typedef int lua_Integer ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct lua_State*,int) ;
 int FUNC_2 (struct lua_State*,char*) ;
 int FUNC_3 (struct lua_State*,int,int) ;
 scalar_t__ FUNC_4 (struct lua_State*,int) ;
 scalar_t__ FUNC_5 (struct lua_State*,int) ;
 scalar_t__ FUNC_6 (struct lua_State*,int) ;
 scalar_t__ FUNC_7 (struct lua_State*,int) ;
 int FUNC_8 (struct lua_State*,int) ;
 int FUNC_9 (struct Banner1*,int) ;
 int FUNC_10 (struct Banner1*,int ) ;

__attribute__((used)) static void *
FUNC_11(struct Banner1 *VAR_0)
{
    struct lua_State *VAR_1 = VAR_0->L;



    if (VAR_1 == ((void*)0))
        return 0;

    FUNC_0(0, "SCRIPTING: banner init          \n");




    FUNC_2(VAR_1, "setTcpPorts");
    if (FUNC_5(VAR_1, -1)) {
        FUNC_10(VAR_0, FUNC_8(VAR_1, -1));
    } else if (FUNC_4(VAR_1, -1)) {
        FUNC_9(VAR_0, (int)FUNC_7(VAR_1, -1));
    } else if (FUNC_6(VAR_1, -1)) {
        lua_Integer VAR_2 = FUNC_1(VAR_1, -1);
        int VAR_3;
        for (VAR_3=1; VAR_3<=VAR_2; VAR_3++) {
            FUNC_3(VAR_1, -1, VAR_3);
            if (FUNC_5(VAR_1, -1)) {
                FUNC_10(VAR_0, FUNC_8(VAR_1, -1));
            } else if (FUNC_4(VAR_1, -1)) {
                FUNC_9(VAR_0, (int)FUNC_7(VAR_1, -1));
            }
        }
    }

    return 0;
}
