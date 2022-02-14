
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int dispname ;


 char*** VAR_0 ;
 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,char const*) ;
 scalar_t__ FUNC_2 (int *,char const*,int ,char*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(lua_State *VAR_1)
{
    const char *VAR_2 = FUNC_0(VAR_1, 1);
    char VAR_3[80];
    FUNC_5(VAR_3, sizeof(VAR_3), "@%s", VAR_2);
    for (int VAR_4 = 0; VAR_0[VAR_4][0]; VAR_4++) {
        if (FUNC_6(VAR_2, VAR_0[VAR_4][0]) == 0) {
            const char *VAR_5 = VAR_0[VAR_4][1];
            if (FUNC_2(VAR_1, VAR_5, FUNC_7(VAR_5), VAR_3))
                FUNC_4(VAR_1);
            FUNC_3(VAR_1, 0, 1);
            return 1;
        }
    }
    FUNC_1(VAR_1, "builtin module '%s' not found\n", VAR_2);
    return 0;
}
