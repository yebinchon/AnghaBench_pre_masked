
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist_entry {struct playlist_entry* next; } ;
struct playlist {struct playlist_entry* first; } ;



__attribute__((used)) static int FUNC_0(struct playlist *VAR_0)
{
    int VAR_1 = 0;
    for (struct playlist_entry *VAR_2 = VAR_0->first; VAR_2; VAR_2 = VAR_2->next)
        VAR_1++;
    return VAR_1;
}
