
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_cmd_ctx {int success; int msg_osd; TYPE_2__* args; scalar_t__ priv; struct MPContext* mpctx; } ;
struct MPContext {int dummy; } ;
struct TYPE_3__ {int s; } ;
struct TYPE_4__ {TYPE_1__ v; } ;


 scalar_t__ FUNC_0 (struct MPContext*,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
    struct mp_cmd_ctx *VAR_1 = VAR_0;
    struct MPContext *VAR_2 = VAR_1->mpctx;
    int VAR_3 = *(int *)VAR_1->priv;
    VAR_1->success = FUNC_0(VAR_2, VAR_3, VAR_1->args[0].v.s,
                                    VAR_1->args[1].v.s, VAR_1->msg_osd) >= 0;
}
