
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist_entry {int num_redirects; int redirects; struct playlist_entry* next; } ;
struct playlist {struct playlist_entry* first; } ;


 int FUNC_0 (struct playlist_entry*,int ,int,char*) ;
 char* FUNC_1 (struct playlist_entry*,char const*) ;

void FUNC_2(struct playlist *VAR_0, const char *VAR_1)
{
    for (struct playlist_entry *VAR_2 = VAR_0->first; VAR_2; VAR_2 = VAR_2->next) {
        if (VAR_2->num_redirects >= 10)
            break;
        char *VAR_3 = FUNC_1(VAR_2, VAR_1);
        if (VAR_3)
            FUNC_0(VAR_2, VAR_2->redirects, VAR_2->num_redirects, VAR_3);
    }
}
