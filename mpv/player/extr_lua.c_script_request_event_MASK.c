
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {int client; } ;
typedef int lua_State ;


 struct script_ctx* FUNC_0 (int *) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 char* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int,int) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_0)
{
    struct script_ctx *VAR_1 = FUNC_0(VAR_0);
    const char *VAR_2 = FUNC_1(VAR_0, 1);
    bool VAR_3 = FUNC_3(VAR_0, 2);

    int VAR_4 = -1;
    for (int VAR_5 = 0; VAR_5 < 256; VAR_5++) {
        const char *VAR_6 = FUNC_4(VAR_5);
        if (VAR_6 && FUNC_6(VAR_6, VAR_2) == 0) {
            VAR_4 = VAR_5;
            break;
        }
    }
    FUNC_2(VAR_0, FUNC_5(VAR_1->client, VAR_4, VAR_3) >= 0);
    return 1;
}
