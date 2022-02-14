
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mp_cmd_ctx {int success; TYPE_3__* args; TYPE_1__* cmd; struct MPContext* mpctx; } ;
struct MPContext {int dummy; } ;
struct TYPE_5__ {int i; } ;
struct TYPE_6__ {TYPE_2__ v; } ;
struct TYPE_4__ {int sender; } ;


 int FUNC_0 (struct MPContext*,char*) ;
 int FUNC_1 (struct MPContext*,int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    struct mp_cmd_ctx *VAR_1 = VAR_0;
    struct MPContext *VAR_2 = VAR_1->mpctx;

    if (!VAR_1->cmd->sender) {
        FUNC_0(VAR_2, "Can be used from client API only.\n");
        VAR_1->success = 0;
        return;
    }
    FUNC_1(VAR_2, VAR_1->cmd->sender, VAR_1->args[0].v.i);
}
