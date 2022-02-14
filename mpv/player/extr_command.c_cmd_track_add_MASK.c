
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct track {size_t type; int no_default; void* lang; void* title; int user_tid; } ;
struct mp_cmd_ctx {int success; TYPE_4__* args; TYPE_1__* abort; scalar_t__ priv; struct MPContext* mpctx; } ;
struct MPContext {int num_tracks; scalar_t__ playback_initialized; TYPE_2__* opts; struct track** tracks; scalar_t__ stop_play; } ;
struct TYPE_7__ {int i; char* s; } ;
struct TYPE_8__ {TYPE_3__ v; } ;
struct TYPE_6__ {int ** stream_id; } ;
struct TYPE_5__ {int cancel; } ;


 int VAR_0 ;
 struct track* FUNC_0 (struct MPContext*,int,char*) ;
 int FUNC_1 (struct MPContext*,char*,int,int ) ;
 int FUNC_2 (struct MPContext*,size_t,struct track*,int ) ;
 int FUNC_3 (struct MPContext*,char*) ;
 void* FUNC_4 (struct track*,char*) ;

__attribute__((used)) static void FUNC_5(void *VAR_1)
{
    struct mp_cmd_ctx *VAR_2 = VAR_1;
    struct MPContext *VAR_3 = VAR_2->mpctx;
    int VAR_4 = *(int *)VAR_2->priv;

    if (VAR_3->stop_play) {
        VAR_2->success = 0;
        return;
    }

    if (VAR_2->args[1].v.i == 2) {
        struct track *VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_2->args[0].v.s);
        if (VAR_5) {
            if (VAR_3->playback_initialized) {
                FUNC_2(VAR_3, VAR_5->type, VAR_5, VAR_0);
                FUNC_3(VAR_3, "Track switched:");
            } else {
                VAR_3->opts->stream_id[0][VAR_5->type] = VAR_5->user_tid;
            }
            return;
        }
    }
    int VAR_6 = FUNC_1(VAR_3, VAR_2->args[0].v.s, VAR_4,
                                     VAR_2->abort->cancel);
    if (VAR_6 < 0) {
        VAR_2->success = 0;
        return;
    }

    for (int VAR_7 = VAR_6; VAR_7 < VAR_3->num_tracks; VAR_7++) {
        struct track *VAR_8 = VAR_3->tracks[VAR_7];
        if (VAR_2->args[1].v.i == 1) {
            VAR_8->no_default = 1;
        } else if (VAR_7 == VAR_6) {
            if (VAR_3->playback_initialized) {
                FUNC_2(VAR_3, VAR_8->type, VAR_8, VAR_0);
            } else {
                VAR_3->opts->stream_id[0][VAR_8->type] = VAR_8->user_tid;
            }
        }
        char *VAR_9 = VAR_2->args[2].v.s;
        if (VAR_9 && VAR_9[0])
            VAR_8->title = FUNC_4(VAR_8, VAR_9);
        char *VAR_10 = VAR_2->args[3].v.s;
        if (VAR_10 && VAR_10[0])
            VAR_8->lang = FUNC_4(VAR_8, VAR_10);
    }

    if (VAR_3->playback_initialized)
        FUNC_3(VAR_3, "Track added:");
}
