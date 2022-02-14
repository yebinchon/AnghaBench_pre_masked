
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct track {scalar_t__ is_external; } ;
struct mp_cmd_ctx {int success; TYPE_3__* args; TYPE_1__* abort; struct MPContext* mpctx; } ;
struct MPContext {scalar_t__ playback_initialized; scalar_t__ stop_play; } ;
struct TYPE_5__ {int i; } ;
struct TYPE_6__ {TYPE_2__ v; } ;
struct TYPE_4__ {int cancel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPContext*,int ) ;
 int FUNC_1 (struct MPContext*,int ,struct track*,int ) ;
 int FUNC_2 (struct MPContext*,char*) ;
 struct track* FUNC_3 (struct MPContext*,int ,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_2)
{
    struct mp_cmd_ctx *VAR_3 = VAR_2;
    struct MPContext *VAR_4 = VAR_3->mpctx;

    if (VAR_4->stop_play) {
        VAR_3->success = 0;
        return;
    }

    FUNC_0(VAR_4, VAR_3->abort->cancel);
    if (!VAR_3->args[0].v.i && VAR_4->playback_initialized) {

        struct track *VAR_5 = FUNC_3(VAR_4, 0, VAR_0);
        if (VAR_5 && VAR_5->is_external)
            FUNC_1(VAR_4, VAR_0, VAR_5, 0);
        struct track *VAR_6 = FUNC_3(VAR_4, 0, VAR_1);
        if (VAR_6 && VAR_6->is_external)
            FUNC_1(VAR_4, VAR_1, VAR_6, 0);

        FUNC_2(VAR_4, "Track list:\n");
    }
}
