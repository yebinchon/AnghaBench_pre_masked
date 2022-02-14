
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int strbuf_t ;
typedef int lua_State ;
struct TYPE_3__ {int encode_max_depth; int encode_keep_buffer; } ;
typedef TYPE_1__ json_config_t ;


 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(lua_State *VAR_0, json_config_t *VAR_1,
                                    int VAR_2, strbuf_t *VAR_3)
{
    if (VAR_2 <= VAR_1->encode_max_depth && FUNC_1(VAR_0, 3))
        return;

    if (!VAR_1->encode_keep_buffer)
        FUNC_2(VAR_3);

    FUNC_0(VAR_0, "Cannot serialise, excessive nesting (%d)",
               VAR_2);
}
