
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist_entry {struct playlist_entry* next; } ;
struct playlist {struct playlist_entry* first; struct playlist_entry* last; struct playlist_entry* current; scalar_t__ current_was_replaced; } ;


 int FUNC_0 (struct playlist*,struct playlist_entry*,struct playlist_entry*) ;
 int FUNC_1 (struct playlist*,struct playlist_entry*) ;

void FUNC_2(struct playlist *VAR_0, struct playlist *VAR_1)
{
    struct playlist_entry *VAR_2 = VAR_0->current;
    if (VAR_0->current && VAR_0->current_was_replaced)
        VAR_2 = VAR_0->current->next;
    if (!VAR_2)
        VAR_2 = VAR_0->last;

    while (VAR_1->first) {
        struct playlist_entry *VAR_3 = VAR_1->first;
        FUNC_1(VAR_1, VAR_3);
        FUNC_0(VAR_0, VAR_2, VAR_3);
        VAR_2 = VAR_3;
    }
}
