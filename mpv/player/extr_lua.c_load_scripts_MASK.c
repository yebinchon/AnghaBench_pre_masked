
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {char* filename; } ;
typedef int lua_State ;


 struct script_ctx* FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char const*) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_0)
{
    struct script_ctx *VAR_1 = FUNC_0(VAR_0);
    const char *VAR_2 = VAR_1->filename;

    FUNC_6(VAR_0, "mp.defaults");

    if (VAR_2[0] == '@') {
        FUNC_6(VAR_0, VAR_2);
    } else {
        FUNC_1(VAR_0, VAR_2);
    }

    FUNC_4(VAR_0, "mp_event_loop");
    if (FUNC_5(VAR_0, -1))
        FUNC_2(VAR_0, "no event loop function\n");
    FUNC_3(VAR_0, 0, 0);

    return 0;
}
