
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct playlist_entry {int init_failed; struct playlist_entry* next; struct playlist_entry* prev; scalar_t__ playback_short; } ;
struct MPContext {TYPE_2__* playlist; TYPE_1__* opts; } ;
struct TYPE_5__ {struct playlist_entry* first; struct playlist_entry* last; } ;
struct TYPE_4__ {int loop_times; scalar_t__ shuffle; } ;


 struct playlist_entry* FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;

struct playlist_entry *FUNC_2(struct MPContext *VAR_0, int VAR_1,
                                    bool VAR_2, bool VAR_3)
{
    struct playlist_entry *VAR_4 = FUNC_0(VAR_0->playlist, VAR_1);
    if (VAR_4 && VAR_1 < 0 && !VAR_2) {

        while (VAR_4 && VAR_4->playback_short)
            VAR_4 = VAR_4->prev;

        if (!VAR_4 && VAR_0->opts->loop_times == 1)
            VAR_4 = VAR_0->playlist->first;
    }
    if (!VAR_4 && VAR_0->opts->loop_times != 1) {
        if (VAR_1 > 0) {
            if (VAR_0->opts->shuffle)
                FUNC_1(VAR_0->playlist);
            VAR_4 = VAR_0->playlist->first;
            if (VAR_4 && VAR_0->opts->loop_times > 1)
                VAR_0->opts->loop_times--;
        } else {
            VAR_4 = VAR_0->playlist->last;

            while (VAR_4 && VAR_4->playback_short)
                VAR_4 = VAR_4->prev;
        }
        bool VAR_5 = VAR_0->opts->loop_times == -2;
        if (!VAR_2 && VAR_4 && VAR_4->init_failed && !VAR_5) {

            bool VAR_6 = 1;
            struct playlist_entry *VAR_7;
            for (VAR_7 = VAR_0->playlist->first; VAR_7; VAR_7 = VAR_7->next) {
                VAR_6 &= VAR_7->init_failed;
                if (!VAR_6)
                    break;
            }
            if (VAR_6)
                VAR_4 = ((void*)0);
        }
    }
    return VAR_4;
}
