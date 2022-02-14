
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct playlist_entry {int dummy; } ;
struct mp_cmd_ctx {TYPE_2__* args; struct MPContext* mpctx; } ;
struct MPContext {TYPE_3__* opts; TYPE_4__* playlist; } ;
struct TYPE_9__ {int current; } ;
struct TYPE_8__ {scalar_t__ position_save_on_quit; } ;
struct TYPE_6__ {char* s; int i; char** str_list; } ;
struct TYPE_7__ {TYPE_1__ v; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct MPContext*,int ,int *) ;
 int FUNC_2 (struct MPContext*,struct playlist_entry*) ;
 int FUNC_3 (struct MPContext*) ;
 int FUNC_4 (struct MPContext*) ;
 int FUNC_5 (TYPE_4__*,struct playlist_entry*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (struct playlist_entry*,int ,int ) ;
 struct playlist_entry* FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void *VAR_1)
{
    struct mp_cmd_ctx *VAR_2 = VAR_1;
    struct MPContext *VAR_3 = VAR_2->mpctx;
    char *VAR_4 = VAR_2->args[0].v.s;
    int VAR_5 = VAR_2->args[1].v.i;

    if (!VAR_5)
        FUNC_6(VAR_3->playlist);

    struct playlist_entry *VAR_6 = FUNC_8(VAR_4);
    if (VAR_2->args[2].v.str_list) {
        char **VAR_7 = VAR_2->args[2].v.str_list;
        for (int VAR_8 = 0; VAR_7[VAR_8] && VAR_7[VAR_8 + 1]; VAR_8 += 2)
            FUNC_7(VAR_6, FUNC_0(VAR_7[VAR_8]), FUNC_0(VAR_7[VAR_8 + 1]));
    }
    FUNC_5(VAR_3->playlist, VAR_6);

    if (!VAR_5 || (VAR_5 == 2 && !VAR_3->playlist->current)) {
        if (VAR_3->opts->position_save_on_quit)
            FUNC_4(VAR_3);
        FUNC_2(VAR_3, VAR_6);
    }
    FUNC_1(VAR_3, VAR_0, ((void*)0));
    FUNC_3(VAR_3);
}
