
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strbuf_t ;
typedef int lua_State ;
typedef int json_config_t ;


 int FUNC_0 (int *,int *,int,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,char) ;

__attribute__((used)) static void FUNC_4(lua_State *VAR_0, json_config_t *VAR_1, int VAR_2,
                              strbuf_t *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;

    FUNC_3(VAR_3, '[');

    VAR_5 = 0;
    for (VAR_6 = 1; VAR_6 <= VAR_4; VAR_6++) {
        if (VAR_5)
            FUNC_3(VAR_3, ',');
        else
            VAR_5 = 1;

        FUNC_2(VAR_0, -1, VAR_6);
        FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
        FUNC_1(VAR_0, 1);
    }

    FUNC_3(VAR_3, ']');
}
