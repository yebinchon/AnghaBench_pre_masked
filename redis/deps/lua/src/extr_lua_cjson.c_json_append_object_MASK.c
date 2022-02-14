
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strbuf_t ;
typedef int lua_State ;
typedef int json_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int,int *) ;
 int FUNC_1 (int *,int *,int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int *,int,char*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char) ;
 int FUNC_9 (int *,char*,int) ;

__attribute__((used)) static void FUNC_10(lua_State *VAR_2, json_config_t *VAR_3,
                               int VAR_4, strbuf_t *VAR_5)
{
    int VAR_6, VAR_7;


    FUNC_8(VAR_5, '{');

    FUNC_6(VAR_2);

    VAR_6 = 0;
    while (FUNC_4(VAR_2, -2) != 0) {
        if (VAR_6)
            FUNC_8(VAR_5, ',');
        else
            VAR_6 = 1;


        VAR_7 = FUNC_7(VAR_2, -2);
        if (VAR_7 == VAR_0) {
            FUNC_8(VAR_5, '"');
            FUNC_1(VAR_2, VAR_3, VAR_5, -2);
            FUNC_9(VAR_5, "\":", 2);
        } else if (VAR_7 == VAR_1) {
            FUNC_2(VAR_2, VAR_5, -2);
            FUNC_8(VAR_5, ':');
        } else {
            FUNC_3(VAR_2, VAR_3, VAR_5, -2,
                                  "table key must be a number or string");

        }


        FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
        FUNC_5(VAR_2, 1);

    }

    FUNC_8(VAR_5, '}');
}
