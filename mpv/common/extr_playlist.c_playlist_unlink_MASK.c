
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct playlist_entry {struct playlist* pl; TYPE_1__* prev; struct playlist_entry* next; } ;
struct playlist {int current_was_replaced; struct playlist_entry* first; TYPE_1__* last; struct playlist_entry* current; } ;
struct TYPE_2__ {struct playlist_entry* next; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct playlist *VAR_0, struct playlist_entry *VAR_1)
{
    FUNC_0(VAR_0 && VAR_1->pl == VAR_0);

    if (VAR_0->current == VAR_1) {
        VAR_0->current = VAR_1->next;
        VAR_0->current_was_replaced = 1;
    }

    if (VAR_1->next) {
        VAR_1->next->prev = VAR_1->prev;
    } else {
        VAR_0->last = VAR_1->prev;
    }
    if (VAR_1->prev) {
        VAR_1->prev->next = VAR_1->next;
    } else {
        VAR_0->first = VAR_1->next;
    }
    VAR_1->next = VAR_1->prev = ((void*)0);

    VAR_1->pl = ((void*)0);
}
