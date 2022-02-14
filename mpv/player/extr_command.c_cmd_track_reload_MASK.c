
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct track {int type; scalar_t__ external_filename; scalar_t__ is_external; } ;
struct mp_cmd_ctx {int success; TYPE_3__* abort; TYPE_2__* args; scalar_t__ priv; struct MPContext* mpctx; } ;
struct MPContext {struct track** tracks; int playback_initialized; } ;
struct TYPE_6__ {int cancel; } ;
struct TYPE_4__ {int i; } ;
struct TYPE_5__ {TYPE_1__ v; } ;


 int FUNC_0 (struct MPContext*,char*) ;
 int FUNC_1 (struct MPContext*,char*,int,int ) ;
 int FUNC_2 (struct MPContext*,struct track*) ;
 int FUNC_3 (struct MPContext*,int ,struct track*,int ) ;
 struct track* FUNC_4 (struct MPContext*,int,int ) ;
 int FUNC_5 (struct MPContext*,char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_8(void *VAR_0)
{
    struct mp_cmd_ctx *VAR_1 = VAR_0;
    struct MPContext *VAR_2 = VAR_1->mpctx;
    int VAR_3 = *(int *)VAR_1->priv;

    if (!VAR_2->playback_initialized) {
        FUNC_0(VAR_2, "Cannot reload while not initialized.\n");
        VAR_1->success = 0;
        return;
    }

    struct track *VAR_4 = FUNC_4(VAR_2, VAR_3, VAR_1->args[0].v.i);
    int VAR_5 = -1;

    if (VAR_4 && VAR_4->is_external && VAR_4->external_filename) {
        char *VAR_6 = FUNC_7(((void*)0), VAR_4->external_filename);
        FUNC_2(VAR_2, VAR_4);
        VAR_5 = FUNC_1(VAR_2, VAR_6, VAR_3, VAR_1->abort->cancel);
        FUNC_6(VAR_6);
    }

    if (VAR_5 < 0) {
        VAR_1->success = 0;
        return;
    }

    struct track *VAR_7 = VAR_2->tracks[VAR_5];
    FUNC_3(VAR_2, VAR_7->type, VAR_7, 0);
    FUNC_5(VAR_2, "Reloaded:");
}
