
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int lua_replicate_commands; scalar_t__ lua_write_dirty; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_0 ;

int FUNC_3(lua_State *VAR_1) {
    if (VAR_0.lua_write_dirty) {
        FUNC_0(VAR_1,0);
    } else {
        VAR_0.lua_replicate_commands = 1;



        FUNC_2(FUNC_1());
        FUNC_0(VAR_1,1);
    }
    return 1;
}
