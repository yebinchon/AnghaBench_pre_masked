
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_cmd_ctx {TYPE_2__* cmd; struct MPContext* mpctx; } ;
struct MPContext {int outstanding_async; } ;
struct TYPE_4__ {TYPE_1__* def; } ;
struct TYPE_3__ {int exec_async; int (* handler ) (struct mp_cmd_ctx*) ;} ;


 int FUNC_0 (struct mp_cmd_ctx*) ;
 int FUNC_1 (struct MPContext*) ;
 int FUNC_2 (struct MPContext*) ;
 scalar_t__ FUNC_3 (struct MPContext*) ;
 int FUNC_4 (struct MPContext*) ;
 int FUNC_5 (struct mp_cmd_ctx*) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
    struct mp_cmd_ctx *VAR_1 = VAR_0;
    struct MPContext *VAR_2 = VAR_1->mpctx;

    FUNC_1(VAR_2);

    bool VAR_3 = VAR_1->cmd->def->exec_async;
    VAR_1->cmd->def->handler(VAR_1);
    if (!VAR_3)
        FUNC_0(VAR_1);

    VAR_2->outstanding_async -= 1;
    if (!VAR_2->outstanding_async && FUNC_3(VAR_2))
        FUNC_4(VAR_2);

    FUNC_2(VAR_2);
}
