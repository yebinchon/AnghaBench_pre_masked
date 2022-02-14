
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sds ;
typedef int lua_State ;
struct TYPE_4__ {int step; } ;
struct TYPE_3__ {int lua_replicate_commands; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ) ;
 TYPE_1__ VAR_1 ;

void FUNC_7(lua_State *VAR_2, sds *VAR_3, int VAR_4) {
    int VAR_5, VAR_6 = VAR_1.lua_replicate_commands;

    FUNC_0(VAR_2,"redis");
    FUNC_5(VAR_2,"call");
    FUNC_1(VAR_2,-2);
    for (VAR_5 = 1; VAR_5 < VAR_4; VAR_5++)
        FUNC_4(VAR_2,VAR_3[VAR_5],FUNC_6(VAR_3[VAR_5]));
    VAR_0.step = 1;
    VAR_1.lua_replicate_commands = 1;
    FUNC_2(VAR_2,VAR_4-1,1,0);
    VAR_0.step = 0;
    VAR_1.lua_replicate_commands = VAR_6;
    FUNC_3(VAR_2,2);
}
