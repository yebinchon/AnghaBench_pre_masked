
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct track {int dummy; } ;
struct mp_cmd_ctx {int success; TYPE_2__* args; scalar_t__ priv; struct MPContext* mpctx; } ;
struct MPContext {scalar_t__ playback_initialized; } ;
struct TYPE_3__ {int i; } ;
struct TYPE_4__ {TYPE_1__ v; } ;


 int FUNC_0 (struct MPContext*,struct track*) ;
 struct track* FUNC_1 (struct MPContext*,int,int ) ;
 int FUNC_2 (struct MPContext*,char*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    struct mp_cmd_ctx *VAR_1 = VAR_0;
    struct MPContext *VAR_2 = VAR_1->mpctx;
    int VAR_3 = *(int *)VAR_1->priv;

    struct track *VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_1->args[0].v.i);
    if (!VAR_4) {
        VAR_1->success = 0;
        return;
    }

    FUNC_0(VAR_2, VAR_4);
    if (VAR_2->playback_initialized)
        FUNC_2(VAR_2, "Track removed:");
}
