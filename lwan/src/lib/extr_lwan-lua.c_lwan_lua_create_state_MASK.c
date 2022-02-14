
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int base; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *) ;
 TYPE_2__ VAR_0 ;
 int FUNC_8 (int *,int,char*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (char*,...) ;
 int VAR_1 ;

lua_State *FUNC_11(const char *VAR_2, const char *VAR_3)
{
    lua_State *VAR_4;

    VAR_4 = FUNC_4();
    if (FUNC_0(!VAR_4))
        return ((void*)0);

    FUNC_5(VAR_4);

    FUNC_3(VAR_4, VAR_1);
    FUNC_6(VAR_4, ((void*)0), VAR_0.base.base);
    FUNC_8(VAR_4, -1, "__index");

    if (VAR_2) {
        if (FUNC_0(FUNC_1(VAR_4, VAR_2) != 0)) {
            FUNC_10("Error opening Lua script %s: %s", VAR_2,
                              FUNC_9(VAR_4, -1));
            goto close_lua_state;
        }
    } else if (VAR_3) {
        if (FUNC_0(FUNC_2(VAR_4, VAR_3) != 0)) {
            FUNC_10("Error evaluating Lua script %s",
                              FUNC_9(VAR_4, -1));
            goto close_lua_state;
        }
    } else {
        FUNC_10("Either file or inline script has to be provided");
        goto close_lua_state;
    }

    return VAR_4;

close_lua_state:
    FUNC_7(VAR_4);
    return ((void*)0);
}
