
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int luabp; scalar_t__ active; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int) ;

int FUNC_1(lua_State *VAR_1) {
    if (VAR_0.active) {
        VAR_0.luabp = 1;
        FUNC_0(VAR_1,1);
    } else {
        FUNC_0(VAR_1,0);
    }
    return 1;
}
