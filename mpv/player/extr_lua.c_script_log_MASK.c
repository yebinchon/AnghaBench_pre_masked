
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {int log; } ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 struct script_ctx* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 char* FUNC_8 (int *,int) ;
 int FUNC_9 (int ,int,char*,...) ;

__attribute__((used)) static int FUNC_10(lua_State *VAR_0)
{
    struct script_ctx *VAR_1 = FUNC_1(VAR_0);

    int VAR_2 = FUNC_0(VAR_0, 1);

    int VAR_3 = FUNC_5(VAR_0);
    FUNC_4(VAR_0, "tostring");
    for (int VAR_4 = 2; VAR_4 <= VAR_3; VAR_4++) {
        FUNC_7(VAR_0, -1);
        FUNC_7(VAR_0, VAR_4);
        FUNC_3(VAR_0, 1, 1);
        const char *VAR_5 = FUNC_8(VAR_0, -1);
        if (VAR_5 == ((void*)0))
            return FUNC_2(VAR_0, "Invalid argument");
        FUNC_9(VAR_1->log, VAR_2, "%s%s", VAR_5, VAR_4 > 0 ? " " : "");
        FUNC_6(VAR_0, 1);
    }
    FUNC_9(VAR_1->log, VAR_2, "\n");

    return 0;
}
