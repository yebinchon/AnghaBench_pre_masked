
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_1__ json_token_t ;
typedef int json_parse_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int *,TYPE_1__*) ;
 int FUNC_4 (int *,int *,char*,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int) ;

__attribute__((used)) static void FUNC_7(lua_State *VAR_2, json_parse_t *VAR_3)
{
    json_token_t VAR_4;
    int VAR_5;



    FUNC_1(VAR_2, VAR_3, 2);

    FUNC_5(VAR_2);

    FUNC_2(VAR_3, &VAR_4);


    if (VAR_4.type == VAR_0) {
        FUNC_0(VAR_3);
        return;
    }

    for (VAR_5 = 1; ; VAR_5++) {
        FUNC_3(VAR_2, VAR_3, &VAR_4);
        FUNC_6(VAR_2, -2, VAR_5);

        FUNC_2(VAR_3, &VAR_4);

        if (VAR_4.type == VAR_0) {
            FUNC_0(VAR_3);
            return;
        }

        if (VAR_4.type != VAR_1)
            FUNC_4(VAR_2, VAR_3, "comma or array end", &VAR_4);

        FUNC_2(VAR_3, &VAR_4);
    }
}
