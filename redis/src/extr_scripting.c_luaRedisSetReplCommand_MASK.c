
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {scalar_t__ lua_replicate_commands; int lua_repl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 TYPE_1__ VAR_2 ;

int FUNC_4(lua_State *VAR_3) {
    int VAR_4 = FUNC_1(VAR_3);
    int VAR_5;

    if (VAR_2.lua_replicate_commands == 0) {
        FUNC_2(VAR_3, "You can set the replication behavior only after turning on single commands replication with redis.replicate_commands().");
        return FUNC_0(VAR_3);
    } else if (VAR_4 != 1) {
        FUNC_2(VAR_3, "redis.set_repl() requires two arguments.");
        return FUNC_0(VAR_3);
    }

    VAR_5 = FUNC_3(VAR_3,-1);
    if ((VAR_5 & ~(VAR_0|VAR_1)) != 0) {
        FUNC_2(VAR_3, "Invalid replication flags. Use REPL_AOF, REPL_REPLICA, REPL_ALL or REPL_NONE.");
        return FUNC_0(VAR_3);
    }
    VAR_2.lua_repl = VAR_5;
    return 0;
}
