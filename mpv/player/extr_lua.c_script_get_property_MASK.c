
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {int client; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 struct script_ctx* FUNC_0 (int *) ;
 char* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (int ,char const*,int,char**) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(lua_State *VAR_2)
{
    struct script_ctx *VAR_3 = FUNC_0(VAR_2);
    const char *VAR_4 = FUNC_1(VAR_2, 1);
    int VAR_5 = FUNC_5(VAR_2, FUNC_6(1))
               ? VAR_0 : VAR_1;

    char *VAR_6 = ((void*)0);
    int VAR_7 = FUNC_8(VAR_3->client, VAR_4, VAR_5, &VAR_6);
    if (VAR_7 >= 0) {
        FUNC_3(VAR_2, VAR_6);
        FUNC_9(VAR_6);
        return 1;
    } else {
        if (FUNC_2(VAR_2, 2) && VAR_5 == VAR_0) {
            FUNC_3(VAR_2, "");
        } else {
            FUNC_4(VAR_2, 2);
        }
        FUNC_3(VAR_2, FUNC_7(VAR_7));
        return 2;
    }
}
