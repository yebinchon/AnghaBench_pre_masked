
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_6__ {char* string; } ;
struct TYPE_7__ {size_t type; scalar_t__ index; TYPE_1__ value; } ;
typedef TYPE_2__ json_token_t ;
struct TYPE_8__ {int tmp; } ;
typedef TYPE_3__ json_parse_t ;


 size_t VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (int *,char*,char const*,char const*,scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(lua_State *VAR_2, json_parse_t *VAR_3,
                                   const char *VAR_4, json_token_t *VAR_5)
{
    const char *VAR_6;

    FUNC_1(VAR_3->tmp);

    if (VAR_5->type == VAR_0)
        VAR_6 = VAR_5->value.string;
    else
        VAR_6 = VAR_1[VAR_5->type];


    FUNC_0(VAR_2, "Expected %s but found %s at character %d",
               VAR_4, VAR_6, VAR_5->index + 1);
}
