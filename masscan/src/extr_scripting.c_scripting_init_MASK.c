
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lua_State {int dummy; } ;
struct TYPE_2__ {char* name; struct lua_State* L; } ;
struct Masscan {TYPE_1__ scripting; } ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct lua_State*,char const*) ;
 struct lua_State* FUNC_3 () ;
 int FUNC_4 (struct lua_State*) ;
 int FUNC_5 (struct lua_State*) ;
 int FUNC_6 (struct lua_State*,int ,int ,int ) ;
 int FUNC_7 (struct lua_State*,int) ;
 scalar_t__* FUNC_8 (int ) ;
 int FUNC_9 (struct Masscan*) ;
 int FUNC_10 () ;

void
FUNC_11(struct Masscan *VAR_1)
{
    int VAR_2;
    struct lua_State *VAR_3;
    const char *VAR_4 = VAR_1->scripting.name;
    int VAR_5;


    if (VAR_4 == 0 || VAR_4[0] == '\0') {
        FUNC_0(0, "%s: no script specified, use --script option\n", "SCRIPTING");
        FUNC_1(1);
    }


    FUNC_10();


    VAR_2 = (int)*FUNC_8(0);
    FUNC_0(1, "Lua version = %d\n", VAR_2);
    if (VAR_2 != 503 && VAR_2 != 502) {
        FUNC_0(0, "Unable to load Lua library\n");
        FUNC_1(1);
    }




    VAR_3 = FUNC_3();
    FUNC_4(VAR_3);
    VAR_1->scripting.L = VAR_3;
    FUNC_9(VAR_1);




    VAR_5 = FUNC_2(VAR_3, VAR_4);
    if (VAR_5 != VAR_0) {
        FUNC_0(0, "%s error loading: %s: %s\n", "SCRIPTING:", VAR_4, FUNC_7(VAR_3, -1));
        FUNC_5(VAR_3);
        FUNC_1(1);
    }





    FUNC_0(1, "%s running script: %s\n", "SCRIPTING:", VAR_4);
    VAR_5 = FUNC_6(VAR_3, 0, 0, 0);
    if (VAR_5 != VAR_0) {
        FUNC_0(0, "%s error running: %s: %s\n", "SCRIPTING:", VAR_4, FUNC_7(VAR_3, -1));
        FUNC_5(VAR_3);
        FUNC_1(1);
    }

}
