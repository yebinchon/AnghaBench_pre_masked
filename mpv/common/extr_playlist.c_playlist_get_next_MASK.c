
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist_entry {struct playlist_entry* next; struct playlist_entry* prev; struct playlist* pl; } ;
struct playlist {struct playlist_entry* current; scalar_t__ current_was_replaced; } ;


 int FUNC_0 (int) ;

struct playlist_entry *FUNC_1(struct playlist *VAR_0, int VAR_1)
{
    FUNC_0(VAR_1 == -1 || VAR_1 == +1);
    if (!VAR_0->current)
        return ((void*)0);
    FUNC_0(VAR_0->current->pl == VAR_0);
    if (VAR_1 < 0)
        return VAR_0->current->prev;
    return VAR_0->current_was_replaced ? VAR_0->current : VAR_0->current->next;
}
