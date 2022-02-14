
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {int boolean; int number; int string; } ;
struct TYPE_6__ {int type; TYPE_1__ value; int string_len; } ;
typedef TYPE_2__ json_token_t ;
typedef int json_parse_t ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,char*,TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(lua_State *VAR_0, json_parse_t *VAR_1,
                               json_token_t *VAR_2)
{
    switch (VAR_2->type) {
    case 128:
        FUNC_5(VAR_0, VAR_2->value.string, VAR_2->string_len);
        break;;
    case 130:
        FUNC_6(VAR_0, VAR_2->value.number);
        break;;
    case 132:
        FUNC_3(VAR_0, VAR_2->value.boolean);
        break;;
    case 129:
        FUNC_1(VAR_0, VAR_1);
        break;;
    case 133:
        FUNC_0(VAR_0, VAR_1);
        break;;
    case 131:


        FUNC_4(VAR_0, ((void*)0));
        break;;
    default:
        FUNC_2(VAR_0, VAR_1, "value", VAR_2);
    }
}
