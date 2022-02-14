
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ mstime_t ;
typedef int lua_State ;
struct TYPE_7__ {scalar_t__ event; int short_src; int currentline; } ;
typedef TYPE_1__ lua_Debug ;
struct TYPE_9__ {int step; int currentline; scalar_t__ luabp; } ;
struct TYPE_8__ {scalar_t__ lua_time_start; int lua_time_limit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_6__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,TYPE_1__*) ;
 int FUNC_7 (int *,int ,TYPE_1__*) ;
 int FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int ,char*,int ,char*) ;
 int FUNC_11 () ;
 TYPE_2__ VAR_3 ;
 int * FUNC_12 (int ,char*) ;

void FUNC_13(lua_State *VAR_4, lua_Debug *VAR_5) {
    FUNC_7(VAR_4,0,VAR_5);
    FUNC_6(VAR_4,"Sl",VAR_5);
    VAR_2.currentline = VAR_5->currentline;

    int VAR_6 = FUNC_0(VAR_2.currentline) || VAR_2.luabp;
    int VAR_7 = 0;


    if(FUNC_12(VAR_5->short_src,"user_script") == ((void*)0)) return;


    if (VAR_5->event == VAR_1 && VAR_2.step == 0 && VAR_6 == 0) {
        mstime_t VAR_8 = FUNC_9() - VAR_3.lua_time_start;
        mstime_t VAR_9 = VAR_3.lua_time_limit ?
                             VAR_3.lua_time_limit : 5000;
        if (VAR_8 >= VAR_9) {
            VAR_7 = 1;
            VAR_2.step = 1;
        } else {
            return;
        }
    }

    if (VAR_2.step || VAR_6) {
        char *VAR_10 = "step over";
        if (VAR_6) VAR_10 = VAR_2.luabp ? "redis.breakpoint() called" :
                                     "break point";
        else if (VAR_7) VAR_10 = "timeout reached, infinite loop?";
        VAR_2.step = 0;
        VAR_2.luabp = 0;
        FUNC_1(FUNC_10(FUNC_11(),
            "* Stopped at %d, stop reason = %s",
            VAR_2.currentline, VAR_10));
        FUNC_2(VAR_2.currentline);
        FUNC_4();
        if (FUNC_3(VAR_4) == VAR_0 && VAR_7) {



            FUNC_8(VAR_4, "timeout during Lua debugging with client closing connection");
            FUNC_5(VAR_4);
        }
        VAR_3.lua_time_start = FUNC_9();
    }
}
