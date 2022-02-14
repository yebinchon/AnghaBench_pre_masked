
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct playlist_entry {int dummy; } ;
struct mp_cmd_ctx {int success; TYPE_2__* args; struct MPContext* mpctx; } ;
struct MPContext {TYPE_3__* playlist; scalar_t__ stop_play; } ;
struct TYPE_7__ {struct playlist_entry* current; } ;
struct TYPE_5__ {scalar_t__ i; } ;
struct TYPE_6__ {TYPE_1__ v; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct MPContext*,int ,int *) ;
 int FUNC_1 (struct MPContext*) ;
 struct playlist_entry* FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (TYPE_3__*,struct playlist_entry*) ;

__attribute__((used)) static void FUNC_4(void *VAR_2)
{
    struct mp_cmd_ctx *VAR_3 = VAR_2;
    struct MPContext *VAR_4 = VAR_3->mpctx;

    struct playlist_entry *VAR_5 = FUNC_2(VAR_4->playlist,
                                                         VAR_3->args[0].v.i);
    if (VAR_3->args[0].v.i < 0)
        VAR_5 = VAR_4->playlist->current;
    if (!VAR_5) {
        VAR_3->success = 0;
        return;
    }


    if (VAR_4->playlist->current == VAR_5 && !VAR_4->stop_play)
        VAR_4->stop_play = VAR_1;
    FUNC_3(VAR_4->playlist, VAR_5);
    FUNC_0(VAR_4, VAR_0, ((void*)0));
    FUNC_1(VAR_4);
}
