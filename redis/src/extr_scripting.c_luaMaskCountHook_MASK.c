
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
typedef int lua_Debug ;
struct TYPE_2__ {long long lua_time_start; long long lua_time_limit; int lua_timedout; scalar_t__ lua_kill; int lua_caller; int lua_cur_script; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 long long FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_6 (int ,char*,...) ;

void FUNC_7(lua_State *VAR_2, lua_Debug *VAR_3) {
    long long VAR_4 = FUNC_3() - VAR_1.lua_time_start;
    FUNC_0(VAR_3);
    FUNC_0(VAR_2);



    if (VAR_4 >= VAR_1.lua_time_limit && VAR_1.lua_timedout == 0) {
        FUNC_6(VAR_0,
            "Lua slow script detected: still in execution after %lld milliseconds. "
            "You can try killing the script using the SCRIPT KILL command. "
            "Script SHA1 is: %s",
            VAR_4, VAR_1.lua_cur_script);
        VAR_1.lua_timedout = 1;





        FUNC_5(VAR_1.lua_caller);
    }
    if (VAR_1.lua_timedout) FUNC_4();
    if (VAR_1.lua_kill) {
        FUNC_6(VAR_0,"Lua script killed by user with SCRIPT KILL.");
        FUNC_2(VAR_2,"Script killed by user with SCRIPT KILL...");
        FUNC_1(VAR_2);
    }
}
