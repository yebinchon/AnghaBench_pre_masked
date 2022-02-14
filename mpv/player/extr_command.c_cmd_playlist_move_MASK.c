
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct playlist_entry {int dummy; } ;
struct mp_cmd_ctx {int success; TYPE_2__* args; struct MPContext* mpctx; } ;
struct MPContext {int playlist; } ;
struct TYPE_3__ {int i; } ;
struct TYPE_4__ {TYPE_1__ v; } ;


 int VAR_0 ;
 int FUNC_0 (struct MPContext*,int ,int *) ;
 struct playlist_entry* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct playlist_entry*,struct playlist_entry*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
    struct mp_cmd_ctx *VAR_2 = VAR_1;
    struct MPContext *VAR_3 = VAR_2->mpctx;

    struct playlist_entry *VAR_4 = FUNC_1(VAR_3->playlist,
                                                          VAR_2->args[0].v.i);
    struct playlist_entry *VAR_5 = FUNC_1(VAR_3->playlist,
                                                          VAR_2->args[1].v.i);
    if (!VAR_4) {
        VAR_2->success = 0;
        return;
    }

    FUNC_2(VAR_3->playlist, VAR_4, VAR_5);
    FUNC_0(VAR_3, VAR_0, ((void*)0));
}
