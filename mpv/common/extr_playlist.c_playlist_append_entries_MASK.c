
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist_entry {int dummy; } ;
struct playlist {struct playlist_entry* first; } ;


 int FUNC_0 (struct playlist*,struct playlist_entry*) ;
 int FUNC_1 (struct playlist*,struct playlist_entry*) ;

void FUNC_2(struct playlist *VAR_0, struct playlist *VAR_1)
{
    while (VAR_1->first) {
        struct playlist_entry *VAR_2 = VAR_1->first;
        FUNC_1(VAR_1, VAR_2);
        FUNC_0(VAR_0, VAR_2);
    }
}
