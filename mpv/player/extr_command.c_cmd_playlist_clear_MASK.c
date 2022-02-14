
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct playlist_entry {struct playlist_entry* next; } ;
struct mp_cmd_ctx {struct MPContext* mpctx; } ;
struct MPContext {TYPE_1__* playlist; } ;
struct TYPE_2__ {struct playlist_entry* current; struct playlist_entry* first; scalar_t__ current_was_replaced; } ;


 int VAR_0 ;
 int FUNC_0 (struct MPContext*,int ,int *) ;
 int FUNC_1 (struct MPContext*) ;
 int FUNC_2 (TYPE_1__*,struct playlist_entry*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
    struct mp_cmd_ctx *VAR_2 = VAR_1;
    struct MPContext *VAR_3 = VAR_2->mpctx;


    if (VAR_3->playlist->current_was_replaced)
        VAR_3->playlist->current = ((void*)0);
    while (VAR_3->playlist->first) {
        struct playlist_entry *VAR_4 = VAR_3->playlist->first;
        if (VAR_4 == VAR_3->playlist->current) {
            VAR_4 = VAR_4->next;
            if (!VAR_4)
                break;
        }
        FUNC_2(VAR_3->playlist, VAR_4);
    }
    FUNC_0(VAR_3, VAR_0, ((void*)0));
    FUNC_1(VAR_3);
}
