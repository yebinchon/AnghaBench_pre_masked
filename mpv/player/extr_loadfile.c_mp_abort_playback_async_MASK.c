
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_abort_entry {scalar_t__ coupled_to_playback; } ;
struct MPContext {int num_abort_list; int abort_lock; struct mp_abort_entry** abort_list; int playback_abort; } ;


 int FUNC_0 (struct MPContext*,struct mp_abort_entry*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct MPContext *VAR_0)
{
    FUNC_1(VAR_0->playback_abort);

    FUNC_2(&VAR_0->abort_lock);

    for (int VAR_1 = 0; VAR_1 < VAR_0->num_abort_list; VAR_1++) {
        struct mp_abort_entry *VAR_2 = VAR_0->abort_list[VAR_1];
        if (VAR_2->coupled_to_playback)
            FUNC_0(VAR_0, VAR_2);
    }

    FUNC_3(&VAR_0->abort_lock);
}
