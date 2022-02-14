
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_6__ {int string; } ;
struct TYPE_7__ {scalar_t__ type; int string_len; TYPE_1__ value; } ;
typedef TYPE_2__ json_token_t ;
typedef int json_parse_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,int *,TYPE_2__*) ;
 int FUNC_4 (int *,int *,char*,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8(lua_State *VAR_4, json_parse_t *VAR_5)
{
    json_token_t VAR_6;



    FUNC_1(VAR_4, VAR_5, 3);

    FUNC_5(VAR_4);

    FUNC_2(VAR_5, &VAR_6);


    if (VAR_6.type == VAR_2) {
        FUNC_0(VAR_5);
        return;
    }

    while (1) {
        if (VAR_6.type != VAR_3)
            FUNC_4(VAR_4, VAR_5, "object key string", &VAR_6);


        FUNC_6(VAR_4, VAR_6.value.string, VAR_6.string_len);

        FUNC_2(VAR_5, &VAR_6);
        if (VAR_6.type != VAR_0)
            FUNC_4(VAR_4, VAR_5, "colon", &VAR_6);


        FUNC_2(VAR_5, &VAR_6);
        FUNC_3(VAR_4, VAR_5, &VAR_6);


        FUNC_7(VAR_4, -3);

        FUNC_2(VAR_5, &VAR_6);

        if (VAR_6.type == VAR_2) {
            FUNC_0(VAR_5);
            return;
        }

        if (VAR_6.type != VAR_1)
            FUNC_4(VAR_4, VAR_5, "comma or object end", &VAR_6);

        FUNC_2(VAR_5, &VAR_6);
    }
}
