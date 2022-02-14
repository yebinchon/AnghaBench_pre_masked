
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct playlist_entry {int dummy; } ;
struct MPContext {scalar_t__ stop_play; TYPE_1__* playlist; } ;
struct TYPE_2__ {int current_was_replaced; struct playlist_entry* current; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct MPContext*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct playlist_entry*) ;

void FUNC_3(struct MPContext *VAR_1, struct playlist_entry *VAR_2)
{
    FUNC_0(!VAR_2 || FUNC_2(VAR_1->playlist, VAR_2) >= 0);
    VAR_1->playlist->current = VAR_2;
    VAR_1->playlist->current_was_replaced = 0;

    if (!VAR_1->stop_play)
        VAR_1->stop_play = VAR_0;
    FUNC_1(VAR_1);
}
