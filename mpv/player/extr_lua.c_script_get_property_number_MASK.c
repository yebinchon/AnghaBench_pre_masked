
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {int client; } ;
typedef int lua_State ;


 int VAR_0 ;
 struct script_ctx* FUNC_0 (int *) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,double) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char const*,int ,double*) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_1)
{
    struct script_ctx *VAR_2 = FUNC_0(VAR_1);
    const char *VAR_3 = FUNC_1(VAR_1, 1);


    double VAR_4 = 0;
    int VAR_5 = FUNC_6(VAR_2->client, VAR_3, VAR_0, &VAR_4);
    if (VAR_5 >= 0) {
        FUNC_2(VAR_1, VAR_4);
        return 1;
    } else {
        FUNC_4(VAR_1, 2);
        FUNC_3(VAR_1, FUNC_5(VAR_5));
        return 2;
    }
}
