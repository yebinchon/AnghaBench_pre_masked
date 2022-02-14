
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist_entry {struct playlist* pl; struct playlist_entry* prev; struct playlist_entry* next; } ;
struct playlist {struct playlist_entry* last; struct playlist_entry* first; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct playlist*,struct playlist_entry*) ;

void FUNC_2(struct playlist *VAR_0, struct playlist_entry *VAR_1,
                     struct playlist_entry *VAR_2)
{
    FUNC_0(VAR_0 && VAR_2->pl == ((void*)0) && VAR_2->next == ((void*)0) && VAR_2->prev == ((void*)0));
    if (VAR_1) {
        FUNC_0(VAR_1->pl == VAR_0);
        FUNC_0(VAR_0->first && VAR_0->last);
    }
    VAR_2->prev = VAR_1;
    if (VAR_1) {
        VAR_2->next = VAR_1->next;
        VAR_1->next = VAR_2;
    } else {
        VAR_2->next = VAR_0->first;
        VAR_0->first = VAR_2;
    }
    if (VAR_2->next) {
        VAR_2->next->prev = VAR_2;
    } else {
        VAR_0->last = VAR_2;
    }
    VAR_2->pl = VAR_0;
    FUNC_1(VAR_0, VAR_2);
}
