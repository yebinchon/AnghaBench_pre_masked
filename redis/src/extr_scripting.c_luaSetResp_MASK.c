
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {TYPE_1__* lua_client; } ;
struct TYPE_3__ {int resp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 TYPE_2__ VAR_0 ;

int FUNC_4(lua_State *VAR_1) {
    int VAR_2 = FUNC_1(VAR_1);

    if (VAR_2 != 1) {
        FUNC_2(VAR_1, "redis.setresp() requires one argument.");
        return FUNC_0(VAR_1);
    }

    int VAR_3 = FUNC_3(VAR_1,-VAR_2);
    if (VAR_3 != 2 && VAR_3 != 3) {
        FUNC_2(VAR_1, "RESP version must be 2 or 3.");
        return FUNC_0(VAR_1);
    }

    VAR_0.lua_client->resp = VAR_3;
    return 0;
}
