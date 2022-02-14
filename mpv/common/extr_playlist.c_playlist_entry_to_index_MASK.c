
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist_entry {struct playlist_entry* next; } ;
struct playlist {struct playlist_entry* first; } ;



int FUNC_0(struct playlist *VAR_0, struct playlist_entry *VAR_1)
{
    struct playlist_entry *VAR_2 = VAR_0->first;
    int VAR_3 = 0;
    if (!VAR_1)
        return -1;
    while (VAR_2 && VAR_2 != VAR_1) {
        VAR_2 = VAR_2->next;
        VAR_3++;
    }
    return VAR_2 == VAR_1 ? VAR_3 : -1;
}
