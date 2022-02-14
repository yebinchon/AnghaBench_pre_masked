
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct script_ctx {TYPE_1__* mpctx; int client; } ;
typedef int lua_State ;
struct TYPE_2__ {int osd; } ;


 struct script_ctx* FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,int,int,char*) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_0)
{
    struct script_ctx *VAR_1 = FUNC_0(VAR_0);
    int VAR_2 = FUNC_1(VAR_0, 1);
    int VAR_3 = FUNC_1(VAR_0, 2);
    const char *VAR_4 = FUNC_2(VAR_0, 3);
    if (!VAR_4[0])
        VAR_4 = " ";
    FUNC_4(VAR_1->mpctx->osd, VAR_1->client, VAR_2, VAR_3, (char *)VAR_4);
    FUNC_3(VAR_1->mpctx);
    return 0;
}
