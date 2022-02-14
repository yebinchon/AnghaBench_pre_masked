
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int,int *,char const**) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_0, int VAR_1, int *VAR_2,
                            const char **VAR_3, int VAR_4)
{
    static const char *VAR_5[] = { "off", "on", ((void*)0) };

    if (!VAR_3) {
        VAR_3 = VAR_5;
        VAR_4 = 1;
    }

    if (!FUNC_2(VAR_0, VAR_1)) {
        if (VAR_4 && FUNC_1(VAR_0, VAR_1))
            *VAR_2 = FUNC_5(VAR_0, VAR_1) * VAR_4;
        else
            *VAR_2 = FUNC_0(VAR_0, VAR_1, ((void*)0), VAR_3);
    }

    if (VAR_4 && (*VAR_2 == 0 || *VAR_2 == VAR_4))
        FUNC_3(VAR_0, *VAR_2);
    else
        FUNC_4(VAR_0, VAR_3[*VAR_2]);

    return 1;
}
