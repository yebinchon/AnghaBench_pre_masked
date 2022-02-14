
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist_entry {struct playlist_entry* next; } ;
struct playlist {struct playlist_entry* first; } ;



struct playlist_entry *FUNC_0(struct playlist *VAR_0, int VAR_1)
{
    struct playlist_entry *VAR_2 = VAR_0->first;
    for (int VAR_3 = 0; ; VAR_3++) {
        if (!VAR_2 || VAR_3 == VAR_1)
            return VAR_2;
        VAR_2 = VAR_2->next;
    }
}
