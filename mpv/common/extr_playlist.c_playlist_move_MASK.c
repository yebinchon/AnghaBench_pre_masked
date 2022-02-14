
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist_entry {int prev; } ;
struct playlist {int current_was_replaced; struct playlist_entry* current; int last; } ;


 int FUNC_0 (struct playlist*,int ,struct playlist_entry*) ;
 int FUNC_1 (struct playlist*,struct playlist_entry*) ;

void FUNC_2(struct playlist *VAR_0, struct playlist_entry *VAR_1,
                   struct playlist_entry *VAR_2)
{
    if (VAR_1 == VAR_2)
        return;

    struct playlist_entry *VAR_3 = VAR_0->current;
    bool VAR_4 = VAR_0->current_was_replaced;

    FUNC_1(VAR_0, VAR_1);
    FUNC_0(VAR_0, VAR_2 ? VAR_2->prev : VAR_0->last, VAR_1);

    VAR_0->current = VAR_3;
    VAR_0->current_was_replaced = VAR_4;
}
