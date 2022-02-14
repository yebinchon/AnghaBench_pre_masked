
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct playlist_entry {int dummy; } ;
struct playlist {struct playlist_entry* current; } ;
struct mp_cmd_ctx {int success; TYPE_3__* abort; TYPE_2__* args; struct MPContext* mpctx; } ;
struct MPContext {TYPE_4__* playlist; int global; } ;
struct TYPE_9__ {struct playlist_entry* first; } ;
struct TYPE_8__ {int cancel; } ;
struct TYPE_6__ {char* s; int i; } ;
struct TYPE_7__ {TYPE_1__ v; } ;


 int FUNC_0 (struct MPContext*,char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct MPContext*,int ,int *) ;
 int FUNC_2 (struct MPContext*,struct playlist_entry*) ;
 int FUNC_3 (struct MPContext*) ;
 int FUNC_4 (TYPE_4__*,struct playlist*) ;
 int FUNC_5 (TYPE_4__*) ;
 struct playlist* FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (struct MPContext*,struct playlist*) ;
 int FUNC_8 (struct playlist*) ;

__attribute__((used)) static void FUNC_9(void *VAR_1)
{
    struct mp_cmd_ctx *VAR_2 = VAR_1;
    struct MPContext *VAR_3 = VAR_2->mpctx;
    char *VAR_4 = VAR_2->args[0].v.s;
    bool VAR_5 = VAR_2->args[1].v.i;

    struct playlist *VAR_6 = FUNC_6(VAR_4, VAR_2->abort->cancel,
                                              VAR_3->global);
    if (VAR_6) {
        FUNC_7(VAR_3, VAR_6);
        struct playlist_entry *VAR_7 = VAR_6->current;
        if (!VAR_5)
            FUNC_5(VAR_3->playlist);
        FUNC_4(VAR_3->playlist, VAR_6);
        FUNC_8(VAR_6);

        if (!VAR_5 && VAR_3->playlist->first)
            FUNC_2(VAR_3, VAR_7 ? VAR_7 : VAR_3->playlist->first);

        FUNC_1(VAR_3, VAR_0, ((void*)0));
        FUNC_3(VAR_3);
    } else {
        FUNC_0(VAR_3, "Unable to load playlist %s.\n", VAR_4);
        VAR_2->success = 0;
    }
}
