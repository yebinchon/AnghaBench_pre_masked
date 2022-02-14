
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int strbuf_t ;
typedef int lua_State ;
struct TYPE_4__ {int encode_keep_buffer; int encode_buf; } ;
typedef TYPE_1__ json_config_t ;


 int FUNC_0 (int *,TYPE_1__*,int ,int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int *,int*) ;

__attribute__((used)) static int FUNC_9(lua_State *VAR_0)
{
    json_config_t *VAR_1 = FUNC_1(VAR_0);
    strbuf_t VAR_2;
    strbuf_t *VAR_3;
    char *VAR_4;
    int VAR_5;

    FUNC_2(VAR_0, FUNC_3(VAR_0) == 1, 1, "expected 1 argument");

    if (!VAR_1->encode_keep_buffer) {

        VAR_3 = &VAR_2;
        FUNC_6(VAR_3, 0);
    } else {

        VAR_3 = &VAR_1->encode_buf;
        FUNC_7(VAR_3);
    }

    FUNC_0(VAR_0, VAR_1, 0, VAR_3);
    VAR_4 = FUNC_8(VAR_3, &VAR_5);

    FUNC_4(VAR_0, VAR_4, VAR_5);

    if (!VAR_1->encode_keep_buffer)
        FUNC_5(VAR_3);

    return 1;
}
