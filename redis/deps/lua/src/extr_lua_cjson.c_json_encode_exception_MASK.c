
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int strbuf_t ;
typedef int lua_State ;
struct TYPE_3__ {int encode_keep_buffer; } ;
typedef TYPE_1__ json_config_t ;


 int FUNC_0 (int *,char*,int ,char const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(lua_State *VAR_0, json_config_t *VAR_1, strbuf_t *VAR_2, int VAR_3,
                                  const char *VAR_4)
{
    if (!VAR_1->encode_keep_buffer)
        FUNC_3(VAR_2);
    FUNC_0(VAR_0, "Cannot serialise %s: %s",
                  FUNC_2(VAR_0, FUNC_1(VAR_0, VAR_3)), VAR_4);
}
