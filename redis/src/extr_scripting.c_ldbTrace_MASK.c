
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {char* name; int currentline; int short_src; } ;
typedef TYPE_1__ lua_Debug ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int,TYPE_1__*) ;
 int FUNC_4 (int ,char*,char*,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (int ,char*) ;

void FUNC_8(lua_State *VAR_0) {
    lua_Debug VAR_1;
    int VAR_2 = 0;

    while(FUNC_3(VAR_0,VAR_2,&VAR_1)) {
        FUNC_2(VAR_0,"Snl",&VAR_1);
        if(FUNC_7(VAR_1.short_src,"user_script") != ((void*)0)) {
            FUNC_0(FUNC_4(FUNC_5(),"%s %s:",
                (VAR_2 == 0) ? "In" : "From",
                VAR_1.name ? VAR_1.name : "top level"));
            FUNC_1(VAR_1.currentline);
        }
        VAR_2++;
    }
    if (VAR_2 == 0) {
        FUNC_0(FUNC_6("<error> Can't retrieve Lua stack."));
    }
}
