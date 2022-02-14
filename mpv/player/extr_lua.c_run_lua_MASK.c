
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {int name; } ;
typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct script_ctx*,char*,char const*) ;
 int FUNC_1 (struct script_ctx*) ;
 int FUNC_2 (int) ;
 char*** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,char*) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,int ,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,struct script_ctx*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int,char*) ;
 int FUNC_15 (int *,char*) ;
 char* FUNC_16 (int *,int) ;
 struct script_ctx* FUNC_17 (int *,int) ;
 scalar_t__ FUNC_18 (int *,int) ;
 int FUNC_19 (int *,char*) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(lua_State *VAR_6)
{
    struct script_ctx *VAR_7 = FUNC_17(VAR_6, -1);
    FUNC_9(VAR_6, 1);

    FUNC_3(VAR_6);


    FUNC_11(VAR_6, VAR_7);
    FUNC_14(VAR_6, VAR_0, "ctx");

    FUNC_1(VAR_7);

    FUNC_19(VAR_6, "mp");


    FUNC_13(VAR_6, -1);
    FUNC_15(VAR_6, "mp");

    FUNC_12(VAR_6, VAR_7->name);
    FUNC_14(VAR_6, -2, "script_name");


    FUNC_7(VAR_6);
    FUNC_13(VAR_6, -1);
    FUNC_14(VAR_6, VAR_0, "UNKNOWN_TYPE");
    FUNC_14(VAR_6, -2, "UNKNOWN_TYPE");
    FUNC_7(VAR_6);
    FUNC_13(VAR_6, -1);
    FUNC_14(VAR_6, VAR_0, "MAP");
    FUNC_14(VAR_6, -2, "MAP");
    FUNC_7(VAR_6);
    FUNC_13(VAR_6, -1);
    FUNC_14(VAR_6, VAR_0, "ARRAY");
    FUNC_14(VAR_6, -2, "ARRAY");

    FUNC_9(VAR_6, 1);

    FUNC_2(FUNC_6(VAR_6) == 0);


    FUNC_5(VAR_6, "package");
    FUNC_2(FUNC_18(VAR_6, -1) == VAR_1);
    FUNC_4(VAR_6, -1, "preload");
    FUNC_2(FUNC_18(VAR_6, -1) == VAR_1);
    for (int VAR_8 = 0; VAR_2[VAR_8][0]; VAR_8++) {
        FUNC_10(VAR_6, VAR_4);
        FUNC_14(VAR_6, -2, VAR_2[VAR_8][0]);
    }
    FUNC_9(VAR_6, 2);

    FUNC_2(FUNC_6(VAR_6) == 0);

    FUNC_20(VAR_6);
    FUNC_2(FUNC_6(VAR_6) == 0);


    FUNC_10(VAR_6, VAR_3);
    FUNC_10(VAR_6, VAR_5);
    if (FUNC_8(VAR_6, 0, 0, -2)) {
        const char *VAR_9 = FUNC_16(VAR_6, -1);
        FUNC_0(VAR_7, "Lua error: %s\n", VAR_9 ? VAR_9 : "(unknown)");
    }

    return 0;
}
